#ifndef MAIN_H
#define MAIN_H
/* Prototype file */

char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_chessboard(char (*a)[8]);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
#endif
