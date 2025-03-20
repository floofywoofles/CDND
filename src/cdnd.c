#include <stdio.h>
#include <string.h>
#include "dialogue.h"

#define MAX_INPUT 32

int main(void)
{
    char input[MAX_INPUT];

    while (1)
    {
        printf("Choose an option: ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "quit") == 0 || strcmp(input, "q") == 0 || strcmp(input, "exit") == 0)
        {
            break;
        }
    }

    return 0;
}