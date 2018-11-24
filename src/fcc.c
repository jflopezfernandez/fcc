
#include "fcc.h"


int main(int argc, char *argv[])
{
    validateUserArguments(argc, argv);

    for (size_t i = 1; i < (size_t) argc; i++) {
        for (size_t j = 0; j < strlen(argv[i]); j++) {
            printf("%c ", (char) *(argv[i] + j));
        }
    }

    return EXIT_SUCCESS;
}
