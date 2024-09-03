#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void bin2dec(char bin[], char dec[]) {
    size_t size = strlen(bin);
    if (size == 0) {
        return NULL;
    }
    int j = 0;
    int result = 0;
    for (int i = size - 1; i >= 0; i--) {
        result += atoi(bin[i]) * 2 * j;
        j = j + 2; 
    }

    
    
}