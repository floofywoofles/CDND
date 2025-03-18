#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dialogue.h"

void setDialogue(Dialogue *d, char *text)
{
    if (sizeof(text) > MAX_SIZE)
    {
        printf("Text exceeds max size\n");
        exit(EXIT_FAILURE);
    }

    sprintf(d->text, "%s", text);
}