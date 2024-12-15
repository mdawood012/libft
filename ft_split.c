
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int count_words(const char *s, char c)
{
    int count = 0;
    int flag = 0;
    while (*s != '\0')
    {
        if (*s == c)
            flag = 0;
        if (*s != c && !flag)
        {
            flag = 1;
            count++;
        }
        s++;
    }
    return count;
}
int count_len(const char *s, char c)
{
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == c) 
            break;
        i++;
    }
    return i;
}
void ft_free(char **ptr, int i)
{
    while (i > 0)
    {
        free(ptr[i-1]);
        i--;
    }
    free(ptr);
}

char **temp(char const *s, char c, char **ptr, int word_len)
{
    int i;

    i = 0;
    while (*s != '\0') 
    {
        if ((word_len = count_len(s, c)) > 0) 
        {
            ptr[i] = malloc(word_len+1);
            if (ptr[i] == NULL)
            {
                ft_free(ptr, i);
                return NULL;
            }
            strncpy(ptr[i], s, word_len);
            ptr[i++][word_len] = '\0';
            s += word_len;
        }
        while (*s == c)
            s++;
    }
    ptr[i] = NULL;
    return ptr; 
}
char **ft_split(char const *s, char c)
{
    char **ptr;
    int word_len;

    word_len = 0;
    ptr = malloc((count_words(s, c) + 1) * sizeof(char *));
    if (ptr == NULL) 
        return NULL;
    ptr = temp(s, c, ptr, word_len);
    return ptr;
}

int main() {
    char *str = "-hello--world-my--";
    char delimiter = '-';
    
    char **split = ft_split(str, delimiter);
    int i = 0;
    
    // Print the split strings
    while (split[i] != NULL) {
        printf("%s\n", split[i]);
        i++;
    }
    
    // Free allocated memory
    
    return 0;
}
/*
    1. calculate the length of the string up until c - count_len
    2. create a pointer for that - 
    3. store that value into **ptr.

    malloc assigning of the array size based on the count

    iterating through the string and when coming across 
    a c then up until that point add all those values to i++
    of the array until we reach the end of the string. 
    once we reach the end of the string we null terminate the
    array and print it out.*/

