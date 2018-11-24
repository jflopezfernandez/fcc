
#include "fcc.h"


int main(int argc, char *argv[])
{
    int numberOfOptions = processOptions(argc, argv);

    if (!numberOfOptions) {
        // User did not specify files to compile
        fprintf(stderr, "<You must specify files to compile>\n");

        return EXIT_SUCCESS;
    }

    return EXIT_SUCCESS;
}
