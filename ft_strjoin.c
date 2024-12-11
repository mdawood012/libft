/*
Function name :
ft_strjoin
Prototype:
char *ft_strjoin(char const *s1, char const *s2);
Turn in files -

Parameters s1: The prefix string.

s2: The suffix string.

Return value:  The new string.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.

s1 = "hello"
s2 = "world"
the size of malloc should be s1+s2+1(for null temrinator)
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len = strlen(s1);//get the length of s1
    size_t s2_len = strlen(s2);//get the length of s2
    size_t total_len = s1_len + s2_len + 1;//get the total length + null terminator 
    char *temp = malloc(total_len);//assign enough size for malloc
    if (temp == NULL)
    {
        return NULL;
    }
    //if memory allocation fails.
    int i = 0;//for iterating through 
    strlcpy(temp, s1, tolen);//copy contents of s1 onto temp. 
    //printf("%s", temp);
    //printf("%I64d", s1_len);
    while (s2[i] != '\0')//while s2 is not equal to the end of the string 
    {
        //printf("%c", s2[i]);
        temp[s1_len+i] = s2[i];//where s1 ends start adding s2. 
        //("%c", temp[s1_len+1]);
        i++;//increment 1
    }
    temp[total_len-1] = '\0';
    return temp;
}

int main() 
{
    const char *s1 = "hello "; // Input string
    const char *s2 = "vita";

    char *temp = ft_strjoin(s1, s2);

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


