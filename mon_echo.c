/* à compléter: entêtes */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	/* à compléter: corps de main */
	for (int i = 0; i < argc; i++) {
		
		printf('%s ', argv[i]);
	}
	return EXIT_SUCCESS;
}
