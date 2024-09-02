#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int table, result;
    printf("vous voulez la table de combien ? ");
    scanf("%d", &table);
    for (int i = 0; i < 11; i++) {
        result = i * table;
        printf("\n%d x %d = %d", i, table, result);
    }
    return EXIT_SUCCESS;
}