#include <stdio.h>

int main ()
{

	int numero;
 	int casos;

	scanf("%d", &casos);

	while (casos--)
	{

		scanf("%d", &numero);

		if (numero % 2 == 0)
			printf("1\n");
		else
			printf("9\n");

	}

	return 0;
}	

