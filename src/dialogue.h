#ifndef DIALOGUE_H
#define DIALOGUE_H

#define MAX_SIZE 32

typedef struct
{
    char *text;
} Dialogue;

void setDialogue(Dialogue *d, char *text);

#endif