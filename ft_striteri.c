/*
Function name: ft_striteri
Prototype: void ft_striteri(char *s, void (*f)(unsigned int,
char*));
Parameters s: The string on which to iterate.
f: The function to apply to each character.
Return value None
External functs. None
Description:
 Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/
#include <stdio.h>
void ft_uppercase(unsigned int n, char *s) {
    if (n % 2 == 0 && s[n] >= 'a' && s[n] <= 'z')
    {
        s[n] -= 32;
    }
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (s == 0)
    {
        return ;
    }
    unsigned int i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

int main() {
    char input[] = "hello";
    printf("Original: %s\n", input);
    ft_striteri(input, ft_uppercase);

    printf("Modified: %s\n", input);

    return 0;
}