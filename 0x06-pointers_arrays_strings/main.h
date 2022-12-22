#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * void prototypes()
 * int protottypes()
 * char prototypes()
 */
void reverse_array(int *a, int n);
void prinnt_number(int n);
void print_buffer(char *b, int size);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *-strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_string_toupper(char *);
char *_cap_string(char *);
char *_leet(char *);
char *_rot13(char *);
char *_infinite_add(char *n1, char *n2, char *r, int size_r);
char *_add_strings(char *n1, char *n2, char *r, int r_index);

#endif /*MAIN.H*/
