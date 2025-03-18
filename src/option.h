#ifndef OPTION_H
#define OPTION_H

typedef struct
{
    char *text;
    int treeIndex;
} Option;

void setText(Option *opt, char *str);
void setTreeIndex(Option *opt, int ind);

#endif