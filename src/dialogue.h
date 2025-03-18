#ifndef DIALOGUE_H
#define DIALOGUE_H

#define MAX_SIZE 32

#include "option.h"

typedef struct
{
    char *text;
    Option *options;
    unsigned int optionsSize;
} Dialogue;

void setDialogue(Dialogue *d, char *text);
void addOption(Dialogue *d, Option opt);

#endif