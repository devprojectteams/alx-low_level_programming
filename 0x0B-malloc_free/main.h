#ifndef MAIN_H
#define MAIN_H

char **strtow(char *);
char *argstostr(int, char **);
void free_grid(int **, int);
int **alloc_grid(int, int);
char *str_concat(char *, char *);
char *_strdup(char *);
char *create_array(unsigned int, char);

#endif /* MAIN_H */
