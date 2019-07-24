#ifndef function_pointers
#define function_pointers
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
#endif /* function_pointers */
