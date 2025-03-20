#ifndef NODE_H
#define NODE_H

#include "dialogue.h"

typedef struct
{
    DNode nodes[5];
    Dialogue dialogueOption;
} DNode;

#endif