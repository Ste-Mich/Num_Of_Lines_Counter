#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        printf("FILE NOT FOUND");
        return (-1);
    }

    char currentChar = NULL;
    int counter = 1;
    while (currentChar != EOF)
    {
        currentChar = fgetc(fp);
        if (currentChar == '\n')
            counter++;
    }

    printf("\n\nENDING THE PROGRAM, num of lines: %d \n\n", counter);

    fclose(fp);
    return 0;
}
