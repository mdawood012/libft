/*Function name ft_strmapi
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Turn in files -
Parameters s: The string on which to iterate.
f: The function to apply to each character. i.e. ft_split 
Return value The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
External functs. malloc
Description Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to collect the
results from the successive applications of f.

char const *s = "hello world";
char *ptr = ft_replace(unsigned int n, char c);
so if n = s[n++] and c = '.'

*/

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
char ft_replace(unsigned int n, char c)
{
    return c + n;
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (s == NULL)
    {
        return NULL;
    }
    unsigned int len = strlen(s);
    char *ptr = malloc(len+1);
    if (ptr == NULL)
    {
        return NULL;
    }
    unsigned int i = 0;
    while (s[i] != '\0')
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}

int main() {
    char *input = "";
    char *result;

    // Apply ft_strmapi with the transform function
    result = ft_strmapi(input, ft_replace);

    if (result) {
        printf("Original: %s\n", input);
        printf("Transformed: %s\n", result);
        free(result);  // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}