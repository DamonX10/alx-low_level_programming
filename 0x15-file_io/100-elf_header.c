#ifndef MAIN_H
#define MAIN_H

#include <elf.h> // For ELF header structures

/* Define the prototype for the _putchar function provided by the system */
int _putchar(char c);

/* Function prototypes for your ELF header parsing program */
int check_elf_file(const unsigned char *e_ident);
void print_elf_header(const ElfN_Ehdr *header);
int open_elf_file(char *filename, ElfN_Ehdr *elf_header);
void close_elf_file(int fd);
void read_elf_header(int fd, ElfN_Ehdr *elf_header);
void display_elf_header(ElfN_Ehdr *elf_header);

#endif /* MAIN_H */

