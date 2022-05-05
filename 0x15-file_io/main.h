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

#endif /* #ifndef MAIN_H*/
