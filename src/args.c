
#include "fcc.h"


void* UnusedArgument(void *arg) {
    return arg;
}

int processUserArguments(int argc, char *argv[]) {
    if (argc - 1) {
        for (int i = 1; i < argc; i++) {
            // Simply iterate through and print arguments
            // printf("[%d]: %s\n", i, argv[i]);

            UnusedArgument((char *) argv[i]);
        }
    }

    return (argc - 1);
}

void validateUserArguments(int argc, char *argv[]) {
    int optsNumber = processUserArguments(argc, argv);

    if (!optsNumber) {
        // User did not supply any arguments
        fprintf(stderr, "<No arguments passed in>\n");

        exit(EXIT_FAILURE);
    }
}
