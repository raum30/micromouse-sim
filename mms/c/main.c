#include <stdio.h>
#include "API.h"

void log(char *text)
{
    frprint(stderr, "%s\n", text);
    fflush(stderr);
}

int main(int argc, char *argv[])
{
    log("Running...");
    API_setColor(0, 0, 'G');
    API_setText(0, 0, "abc");
}