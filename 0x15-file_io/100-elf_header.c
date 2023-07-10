#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void close_elf(int elf);
void print_entry(unsigned long int e_entry, unsigned char *e_identify);
void check_elf(unsigned char *e_identify);
void print_type(unsigned int e_type, unsigned char *e_identify);
void print_magic(unsigned char *e_identify);
void print_class(unsigned char *e_identify);
void print_data(unsigned char *e_identify);
void print_version(unsigned char *e_identify);
void print_abi(unsigned char *e_identify);
void print_osabi(unsigned char *e_identify);

/**
 * check_elf - function checks if a file is an ELF file
 * @e_identify: Pointer to array containing the ELF magic numbers
 *
 * Returns: exit code 98 if the file is not an ELF file
 */
void check_elf(unsigned char *e_identify)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (e_identify[idx] != 127 &&
		    e_identify[idx] != 'E' &&
		    e_identify[idx] != 'L' &&
		    e_identify[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - function prints out the magic numbers of an ELF header
 * @e_identify: A pointer to array containing the ELF magic numbers
 *
 * Returns: Magic numbers separated by a space
 */
void print_magic(unsigned char *e_identify)
{
	int idx;

	printf(" Magic: ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", e_identify[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - function prints the class of an ELF header
 * @e_identify: Pointer to an array containing the ELF class
 */
void print_class(unsigned char *e_identify)
{
	printf(" Class: ");

	switch (e_identify[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_identify[EI_CLASS]);
	}
}

/**
 * print_data - function prints out the data of an ELF header
 * @e_identify: Pointer to array containing the ELF class
 */
void print_data(unsigned char *e_identify)
{
	printf(" Data: ");

	switch (e_identify[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_identify[EI_CLASS]);
	}
}

/**
 * print_version - function prints out the version of an ELF header
 * @e_identify: Pointer to array containing the ELF version
 */
void print_version(unsigned char *e_identify)
{
	 printf(" Version: %d",
			  e_identify[EI_VERSION]);

	switch (e_identify[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - function prints out the OS/ABI of an ELF header
 * @e_identify:Pointer to array containing the ELF version
 */
void print_osabi(unsigned char *e_identify)
{
	printf(" OS/ABI: ");

	switch (e_identify[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_identify[EI_OSABI]);
	}
}

/**
 * print_abi - function prints the ABI version of an ELF header
 * @e_identify: Pointer to array containing the ELF ABI version
 */
void print_abi(unsigned char *e_identify)
{
	printf(" ABI Version: %d\n",
		e_identify[EI_ABIVERSION]);
}

/**
 * print_type - function prints the type of an ELF header
 * @e_type: ELF type
 * @e_identify: Pointer to an array containing the ELF
 */
void print_type(unsigned int e_type, unsigned char *e_identify)
{
	if (e_identify[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - function prints the entry point of an ELF header
 * @e_entry: An address of the ELF entry point
 * @e_identify: Pointer to an array containing the ELF
 */
void print_entry(unsigned long int e_entry, unsigned char *e_identify)
{
	printf(" Entry point address: ");

	if (e_identify[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_identify[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - function closes an ELF file
 * @elf: A file descriptor of the ELF file
 *
 * Return: displays exit code 98 if file cannot be closed
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - function displays information contained in the ELF header
 * at the start of an ELF file
 * @argc: The argument number applied to the program
 * @argv: An array of argument pointers
 *
 * Return: 0 on success or
 * If the file is not an ELF File or
 * the function fails - exit code 98
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *headerFile;
	int opn;
	int rd;

	opn = open(argv[1], O_RDONLY);
	if (opn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	headerFile = malloc(sizeof(Elf64_Ehdr));
	if (headerFile == NULL)
	{
		close_elf(opn);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(opn, headerFile, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(headerFile);
		close_elf(opn);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(headerFile->e_ident);
	printf("ELF Header:\n");
	print_magic(headerFile->e_ident);
	print_class(headerFile->e_ident);
	print_data(headerFile->e_ident);
	print_version(headerFile->e_ident);
	print_osabi(headerFile->e_ident);
	print_abi(headerFile->e_ident);
	print_type(headerFile->e_type, headerFile->e_ident);
	print_entry(headerFile->e_entry, headerFile->e_ident);

	free(headerFile);
	close_elf(opn);
	return (0);
}
