#ifndef MAIN_H

#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/*cp - Program*/
/*------------------*/
void error100(int fd);
void error99(char *filename);
void error98(char *filename);
size_t subs_read_write(int fd_r, char *buff, char *filename1, char *filename2);

/*elf reader program.*/
/*----------------------*/
void cant_open(char *filename);
void cant_read(char *filename);
void cant_close(int fd);
/*void check_elf(char *file, char *buff);
void print_magic(char *buff);
void print_class(char *buff);
void print_data(char *buff);
void print_version(char *buff); => Commented for conflict*/
void print_os_abi(char *buff);
void print_abi_v(char *buff);
void print_f_type(char *buff);
void print_address(char *buff);
	/*||*/
	/*||*/
/* 2nd attempt*/
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
#endif /* #ifndef MAIN_H*/
