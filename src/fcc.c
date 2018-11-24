
#include "fcc.h"

enum Operator {
    Addition,
    Subtraction,
    Multiplication,
    Division
};

typedef struct token_t {
    int type;
    char* content;
}* Token;

Token createToken(char* data) {
    if (!data) { return NULL; }

    Token newToken = malloc(sizeof(struct token_t));

    if (!newToken) { return NULL; }

    newToken->type = strlen(data);

    newToken->content = malloc(strlen(data) + 1);
    memset(newToken->content, 0, strlen(data) + 1);

    strcpy(newToken->content, data);

    return newToken;
}

char* tokenToString(Token t) {
    if (!t) { return NULL; }

    int type = t->type;

    char* s = malloc(sizeof(char) * 32);
    memset(s,0,32);
    
    itoa(type, s, 10);

    return s;
}


int main(int argc, char *argv[])
{
    validateUserArguments(argc, argv);

    for (size_t i = 1; i < (size_t) argc; i++) {
        
        // Iterate through each character in each word
        for (size_t j = 0; j < strlen(argv[i]); j++) {
            char data = (char) *(argv[i] + j);

            printf("%c\n", data);
        }

        Token t1 = createToken(argv[i]);

        const char* s = tokenToString(t1);

        printf("token: %s\n", t1->content);
        printf("length: %s\n", s);
    }

    return EXIT_SUCCESS;
}
