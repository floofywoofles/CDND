#ifndef TREE_H
#define TREE_H

#include "node.h"

typedef struct
{
    DNode *root;
    DNode *curr;
    DNode *prev;
} DTree;

void setRoot(DTree *t);
void setCurr(DTree *t);
void setPrev(DTree *t);

#endif