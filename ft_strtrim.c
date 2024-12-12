#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int front = 0;
    int back = 0;
    char const *temp = s1;

    int i = 0;
    while (temp[i] != '\0')
    {
        if (strchr(set, temp[i]))
            front++;
        else
            break;
        i++;
    }
    temp = s1;
    i = strlen(temp);//8
    while (i > 0)
    {
        if (strchr(set, temp[i]))
            back++;
        else
            break;
        i--;
    }
    i = strlen(temp)+1;
    int j = 0;
    int total = i - front - back;
    char *ptr = malloc(total+1);
    while (total > 0)
    {
        ptr[j] = s1[front];
        j++;
        front++;
        total--;
    }
    return ptr;

}


int main()
{
    char s1[] = "-/+hello+/-";       // Input string
    char set[] = "+-/"; 
    char *ptr = ft_strtrim(s1, set);
    printf("%s", ptr);

}