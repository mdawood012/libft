/*Function name 
ft_split
Prototype char 
**ft_split(char const *s, char c);
Turn in files -
Parameters s: The string to be split.
c: The delimiter character.
Return value The array of new strings resulting from the split.
NULL if the allocation fails.
External functs. malloc, free
Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
s = "hel.lo. w.o.rl.d"
c = .
return = hel lo w o rl d
all as seperate words. with a null terminator at d
gotta create an array that points to the pointer of s.
so its like **temp --> *s --> "he"

int main() {
    char *str = "hello world";//pointer points to h
    char **ptr = &str;//pointer points to the dereferenced value of pointer str so helloworld 
    printf("%s", *ptr);//derefence pointer. 
    return 0;
}
*/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
char **ft_split(char const *s, char c)
{
    //do not have to copy i can use strcpy
    int len_c = 0;
    int i = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c)
        {
            len_c++;
        }
        i++;
    }
    char **str_list = (char **)malloc((len_c + 2) * sizeof(char *)); 
    i = 0;
    int j = 0;
    int start = 0;
    while (i < len_c+1)
    {
        while (s[j] != c && s[j] != '\0')//while we are not at a full stop. 
        {
            j++;//increment by 1. 
        }
        start = j;
        char *temp = malloc(start+1);//assign memory for all those values 
        strncpy(temp, s, start);//copy those values of s into temp until j. 
        temp[j] = '\0';
        str_list[i] = temp;
        i++;
        if (s[j] == c)
        {
            j++;
        }
    }
    str_list[len_c] = NULL;
    for (int i = 0; i < len_c+1; i++) {
        printf("[%d]: %s\n", i, str_list[i]);
    }
    return str_list;   
}

int main()
{
    const char *s = "hel.lo. w.o.rl. d";
    char c = '.';
    char **temp = ft_split(s, c);
    printf("ignore: %s", *temp);
}