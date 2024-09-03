#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main(int argc, char *argv[]) {
    if(argc != 4) {
        return EXIT_FAILURE;
    }
    
    int oper_gauche = atoi(argv[1]);
    char operateur = argv[2][0];
    int oper_droite = atoi(argv[3]);
    float result;

    switch (operateur)
    {
    case 'x':
        result = oper_gauche * oper_droite;
        printf("%d %c %d = %d\n", oper_gauche, operateur, oper_droite, result);
        break;
    case '/':
        result = oper_gauche / oper_droite;
        printf("%d %c %d = %.1f\n", oper_gauche, operateur, oper_droite, result);
        break;
    case '+':
        result = oper_gauche + oper_droite;
        printf("%d %c %d = %d\n", oper_gauche, operateur, oper_droite, result);
        break;
    case '-':
        result = oper_gauche - oper_droite;
        printf("%d %c %d = %d\n", oper_gauche, operateur, oper_droite, result);
        break;
    default:
        printf("Opérateur invalide...\n");
        break;
    }

    return EXIT_SUCCESS;
    
}