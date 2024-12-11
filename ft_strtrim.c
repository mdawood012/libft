/*Function name: ft_strtrim
Prototype: char *ft_strtrim(char const *s1, char const *set);
Turn in files -
Parameters s1: The string to be trimmed.
set: The reference set of characters to trim.
Return value The trimmed string.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/
/*
essentially if a string is something like 
-+-hello---
then if in the set i specify -+
then it'll return 
hello
*/


/*
i have to find a way to check if any of the values in the intial portion of s is equal to any of the values in set
for this its quicker to check if any of the values aren't equal to set. 
so essentially create a while loop that says: 
i could create a loop that compares value at s[0] to each value in the set until none of the values of s are 
in set. 

int total = 0;
int i = 0, j;

while (s[i] != '\0') {
    j = 0; // Reset `j` for each new character in `s`
    while (set[j] != '\0') {
        if (s[i] == set[j]) {
            total++; // Increment `total` for a match
            break;   // Exit the inner loop after a match
        }
        j++;
    }
    i++; // Move to the next character in `s`
}
this compares them and the total will indicate how many of them match. 
plan - create two pointers one that calculates the length of the intitial values in s1 that belong to set. 
i = 0;
j = 0;
while (i < strlen(set))
{
    char c = set[i]
    if (s1[j] == c)
    {
        j++;
    } 
    i++;
}
create a pointer called front that stores the length of that 
so char *front = malloc(j);//creates a pointer with the length of the initial values of set in s.

then do the same thing for the end. 
i = 0;
j = strlen(s)-1;
while (i < strlen(set))
{
    char c = set[i]
    if (s1[j] == c)
    {
        j--;
    }
    i++;
}it doesnt work because if c = / and at the time s1 = + then it wouldnt -1 because theyre not the same even though they
both may belong to teh set but it doesnt add it. 
*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_strtrim(char const *s1, char const *set)
{
    //front loop 
    //back loop
    size_t s1_len = strlen(s1)+1;
    char *front = malloc(s1_len/2);
    size_t i = 0;
    int j = 0;
    int k = 0;
    while (i < strlen(set)) {
        char c = set[i];  // Current character from set
        if (s1[j] == c) {  // Compare with s1[j]
            j++;  // If they match, increment j
        }
        i++;  // Move to the next character in set
    }
    while (s1[j] != '\0')
    {
        front[k] = s1[j];
        k++;
        j++;
    }
    //printf("%c", s1[j-1]);
    i = 0;
    while (s1_len > 0)
    {
        char c = set[i];
        //--+/
        if (s1[j-1] == c)
        {
            j--;
        }
        else
        {
            front[j] = '\0';

        }
        i++;
        s1_len--;
    }
    return front;
}

int main()
{
    char const *s1 = "+-/he/llo---+/";
    char const *set = "--+/";

    char *temp = ft_strtrim(s1, set);

    if (temp == NULL) {
        //printf("Null"); // Handle NULL return case
    } else {
        char *ptr = temp; // Use a separate pointer to traverse
        while (*ptr != '\0') {
          //  printf("%c", *ptr);
            ptr++;
        }
    }

    free(temp); // Free allocated memory (only if temp is not NULL)
    return 0;
}
