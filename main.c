#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arguments/arguments.h"


int main(int argc, char **argv) {

    chekcArguments(argc);

    char * operationType = malloc(sizeof(char) * 100);
    char *filename = malloc(sizeof(char) * 100);

    strcopy(operationType, argv[1]);
    strcopy(filename, argv[2]);

    int operation = identifyOperationRequired(operationType);

    printf("operation: %d\n", operation);

    if(operation == 1) {
        printf("addition\n");
        
    } else {
        printf("multiplication\n");
    }

    free(operationType);

    free(filename);


    
    

    return 0;
}