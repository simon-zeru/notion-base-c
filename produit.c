/* à compléter: entêtes */
#include <stdlib.h>

int main(void)
{
	/* à compléter: corps de main */
	int a, b, c;
	printf("programme qui multiplie 2 nombres");
	printf("\nsaisir un premier nombre : ");
	scanf("%d", &a);
	printf("\nsaisir un deuxième nombre : ");
	scanf("%d", &b);
	c = a*b;
	printf("%d x %d = %d", a, b, c);
	return EXIT_SUCCESS;
}
