#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
int _putchar(char c);


#endif