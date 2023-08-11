#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * error_exit - Display error message and exit with status code
 * @message: error message to display
 * @status: exit status code
 */
void error_exit(const char *message, int status)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(status);
}

/**
 * display_elf_header - Display information contained in ELF header
 * @filename: name of ELF file
 */
void display_elf_header(const char *filename)
{
int fd;
Elf64_Ehdr header;
int i;
fd = open(filename, O_RDONLY);
if (fd == -1)
{
error_exit("Error: Cannot open file", 98);
}
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
error_exit("Error: Cannot read from file", 98);
}
close(fd);
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%2.2x%c", header.e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
}
printf("  Class:                             ");
switch (header.e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Data:                              ");
switch (header.e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
}
int main(int argc, char **argv)
{
if (argc != 2)
{
error_exit("Usage: elf_header elf_filename", 97);
}
display_elf_header(argv[1]);
return (0);
}
