/* à compléter: entêtes */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define BUFFER_LEN 64

int main(void)
{
	char orig[BUFFER_LEN] = "bonjour";
	// = {0}; is the universal zero initializer, C99 Standard 6.7.8.21
	char mirror[BUFFER_LEN] = {0};  // fill buffer with 0 (a.k.a. '\0')
	const int l = strlen(orig);
	/* à compléter: corps de main */
	for(int i = l - 1; i >= 0; i--) {
		mirror[l - 1 - i] = orig[i];
	}
	printf("\nmirror  = %s", mirror);
	return EXIT_SUCCESS;
}
