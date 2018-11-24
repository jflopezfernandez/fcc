
#include "fcc.h"


int processOptions(int argc, char *argv[]) {
    if (argc - 1) {
        for (int i = 1; i < argc; i++) {
            printf("[%d]: %s\n", i, argv[i]);
        }
    }

    return (argc - 1);
}
