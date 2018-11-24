#ifndef FCC_ARGS_H_INCLUDED
#define FCC_ARGS_H_INCLUDED

void* UnusedArgument(void *arg);

/** Function: processArgs
 *
 *  Create the vector 'options' and its contents, then store its length in the
 *  variable 'numberOfOptions'.
 *
 */

int processUserArguments(int argc, char *argv[]);

void validateUserArguments(int argc, char *argv[]);


#endif // FCC_ARGS_H_INCLUDED
