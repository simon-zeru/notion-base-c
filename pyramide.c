#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void putchars(unsigned int repeat, char ch) {
    
    for(unsigned int i = 0; i < repeat; i++) {
        printf("%c", ch);
    }

}

int main(int argc, char *argv[]) {
    if(argc != 2) {
        return EXIT_FAILURE;
    }
    
    unsigned int hauteur = atoi(argv[1]);
    char character = argv[2][0];


    for (int i = 1; i < hauteur + 1; i++) {
        putchars(hauteur - i, ' ');
        putchars(2*i-1, character);
        printf("\n");
    }

    return EXIT_SUCCESS;
    
}