#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char serverRoot[256];

void setServerRoot(char *root) {
    sprintf(serverRoot, "%s", root);
}

void main(int argc, char **argv) {
    printf("Starting server...");
    FILE *request, *response, *log;

    setServerRoot(argv[1]);

    request = fopen(argv[2], "r");
    response = fopen(argv[3], "w+");
    log = fopen(argv[4], "a");
}