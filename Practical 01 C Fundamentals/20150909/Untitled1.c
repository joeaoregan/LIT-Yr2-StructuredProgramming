#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_SZ 256

int main(int argc, char *argv[]) {
    /* Initalize variables */
    static char name[MAX_NAME_SZ+1];

    /* Ask user for name. */
    printf("What is your name? ");

    /* Get the name, with size limit. */
    fgets (name, MAX_NAME_SZ, stdin);

    /* Remove trailing newline, if there. */
    if ((strlen(name)>0) && (name[strlen (name) - 1] == '\n')){
        name[strlen (name) - 1] = '\0';
    }

    /* Print Message. */
    printf("\nCongradulations %s!\n\nYou have made your first functional program in C.\n", name);
    printf("Have fun learning more about programming!\n\n");

    /* Pause the Console */
    system("pause");

    /* Free memory and exit. */
    free (name);
    return 0;
}
