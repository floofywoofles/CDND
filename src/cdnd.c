#include <stdio.h>
#include "dialogue.h"

int main(void)
{
    Dialogue d;
    setDialogue(&d, "Hello there");
    printf("%s\n", d.text);
    return 0;
}