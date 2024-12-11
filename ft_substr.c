/*
Function name ft_substr
Prototype char *ft_substr(char const *s, unsigned int start,
size_t len);

Turn in files - Parameters s: The string from which to create the substring. start: The start index of the substring in the
string ’s’. len: The maximum length of the substring.

Return value - The substring.
NULL if the allocation fails.

External functs. malloc
Description Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

so if s = "hello world";
start = 3;
len = 7;
then the substring created is lo worl
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t s_len = strlen(s);
    if (*s == '\0' || start >= s_len)
    {
        return NULL;
    }
    char *temp = malloc(len+1);
    if (temp == NULL)
    {
        return NULL;
    }
    int i = 0;
    while (len > 0 && *s != '\0')
    {
        temp[i] = s[start];
        i++;
        start++;
        len--;
    }
    temp[i] = '\0';
    return temp;
}

//edge cases if start is beyond the length of s. 
//edge cases if s is an empty string. 
int main() {
    const char *s = "hello"; // Input string
    unsigned int start = 4;
    size_t len = 2;

    char *temp = ft_substr(s, start, len);

    if (temp == NULL) {
        printf("Null"); // Handle NULL return case
    } else {
        char *ptr = temp; // Use a separate pointer to traverse
        while (*ptr != '\0') {
            printf("%c", *ptr);
            ptr++;
        }
    }

    free(temp); // Free allocated memory (only if temp is not NULL)
    return 0;
}
