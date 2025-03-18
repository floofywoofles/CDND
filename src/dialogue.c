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
    d->text = (char *)malloc(MAX_SIZE * sizeof(char));
    sprintf(d->text, "%s", text);
}

void addOption(Dialogue *d, Option opt)
{
    if (d->options == NULL)
    {
        d->options = malloc(1 * sizeof(Option));
        d->optionsSize = 1;
    }

    if (d->optionsSize > sizeof(d->options) + 1)
    {
        d->options = realloc(d->options, d->optionsSize + 1);
        d->optionsSize += 1;
    }

    d->options[d->optionsSize - 1] = opt;
}