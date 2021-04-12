
/*
 * C Program to Count Number of Words in a given Text Or Sentence
 */
#include <stdio.h>
#include <string.h>

void main()
{
    char string[200];
    int count = 0, i;

    printf("Skriv en sætning:\n");
    scanf("%[^\n]string", string);
    /**< Tæller hvor mange ord arrayet indeholder */
    for (i = 0;string[i] != '\0';i++)
    {
        if (string[i] == ' ' && string[i+1] != ' ')
            count++;
    }
    printf("Antal ord i array: %d\n", count + 1);
}
