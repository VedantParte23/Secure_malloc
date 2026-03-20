#ifndef MALLOC_H
#define MALLOC_H


#include <stddef.h>

void *secure_malloc(size_t size, char* file, int line);
void secure_free(void* pointer);
void print_report(void);

#define malloc(x) secure_malloc(x,__FILE__,__LINE__)
#define free(p) secure_free(p)

#endif

