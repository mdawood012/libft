
/*
Function name ft_itoa
Prototype char *ft_itoa(int n);
Turn in files -
Parameters n: the integer to convert.
Return value The string representing the integer.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

//if it is not an int then memory allocation also fails
so return NULL. 

*/
#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
    int negative;
    if (n < 0)
    {
        negative = 1;
        n*=-1;
    }

    int temp = n;
    int count = 0;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    char *ptr = malloc(count+2);
    if (ptr == NULL)
    {
        return NULL;
    }
    ptr[count + negative] = '\0';//null terminate the string. 
    int i = count+negative-1;
    while (n != 0)
    {
        char c = (n % 10) + '0'; 
        n /= 10; 
        ptr[i] = c;
        i--;
        //ptr[i--] = (n % 10) + '0'
    }
    if (negative)
    {
        ptr[i] = '-';
    }
    return ptr;
}

int main()
{
    int i = -505;
    //char buffer [33];
    //itoa (i,buffer,10);
    //printf("%s\n", buffer);
    char *ptr = ft_itoa(i);
    //char c = ft_itoa(i);
    printf("%s", ptr);
}