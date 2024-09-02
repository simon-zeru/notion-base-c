#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void putchars(unsigned int repeat, char ch) {
    
    for(int i = 0; i < repeat; i++) {
        printf("%c", ch);
    }

}

int main(void) {
    int hauteur;

    printf("hauteur ? ");
    scanf("%d", &hauteur);


    for (int i = 1; i < hauteur + 1; i++) {
        putchars(hauteur - i, ' ');
        putchars(2*i-1, '*');
        printf("\n");
    }

    return EXIT_SUCCESS;
    
}