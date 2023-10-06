#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
void check_elf(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned int *e_ident);
void print_osabi(unsigned int *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
/**
 * check_elf_plus_print_magic - checks whether a file is an e-file
 * @e_ident: pointer to file having ELF magic numbers
 * if not ELF file, exit code 98
 */
void check_elf_plus_print_magic(unsigned char *e_ident)
{
int i;
for (i = 0; i < 4; i++)
{
if (e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L' &&
		e_ident != 'F')
{
dprintf(STDERR_FILENO, "Error: This is not an elf file\n");
exit(98);
}
}
int j;
printf("   Magic:  ");
for (j = 0; j < EI_NIDENT; j++)
{
printf("%02x", e_ident[j]);
if (j == EI_NIDENT - 1)
{
printf("\n");
}
else
{
printf(" ");
}
}
/**
 * print_data - prints ELF header data
 * @e_ident: pointer to array of ELF class
 */
void print_data(unsigned char *e_ident)
{
printf("  Data:            ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
	printf("none\n");
break;
case ELFDATA2LSB:
printf("2's compliment, little endian\n");
break;
case ELFDATA2MSB:
printf("2's compliment, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
/**
 * print_class_plus_print_version - prints class and version
 * @e_ident: pointer
 */
void print_class_plus_print_version(unsigned char *e_ident)
{
printf("   Class:                     ");
switch (e_ident[EI_CLASS])
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
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
printf("   Version:      %d", e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
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
 * print_osabi - prints ELF header OS/ABI
 * @e_ident: pointer to array of ELF version
 */
void print_osabi(unsigned char *e_ident)
{
printf(" OS/ABI:      ");
switch (e_ident[EI_OSABI])
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
	printf("UNIX - freeBSD\n");
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
	printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}
/**
 * print_type_plus_print_abi - prints type of ELF header
 * @e_type: ELF type
 * @e_ident: pointer to array of ELF class
 */
void print_type_plus_print_abi(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
	e_type >>= 8;
printf("   Type:        ");
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
printf("  ABI Version:     %d\n", e_ident[EI_ABIVERSION]);
}
/**
 * print_entry - prints ELF header entry point
 * @e_entry: ELF entry point address
 * @e_ident: pointer to array of ELF class
 * @elf: ELF file descriptor
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident, int elf)
{
printf("  Entry point address:               ");
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (e_ident[EI_CLASS] == ELFCLASS32)
	printf("%#x\n", (unsigned int)e_entry);
else
{
printf("%#lx\n", e_entry);
}
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", elf);
exit(98);
}
}
/**
 * main - Displays the information in the
 *        ELF header at the start of an ELF file.
 * @argc:  number of arguments passed to the program.
 * @argv: array of pointers to the arguments.
 * Return: 0 (success)
 * Description: If  not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int op, re;
op = open(argv[1], O_RDONLY);
if (op == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(op);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
re = read(op, header, sizeof(Elf64_Ehdr));
if (re == -1)
{
free(header);
close_elf(op);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
check_elf(header->e_ident);
printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_osabi(header->e_ident);
print_abi(header->e_ident);
print_type(header->e_type, header->e_ident);
print_entry(header->e_entry, header->e_ident);
free(header);
close_elf(op);
return (0);
}
