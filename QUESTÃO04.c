#include <stdio.h>

int main()
{
	int idades[10];
	int maiores = 0;

	for (int i = 0; i<10; i++) {

		printf("Digite a idade %d:", i + 1);
		scanf("%d", &idades[i]);

		if (idades[i] >= 18) {
			maiores++;

		}


	}
    
    printf("Maiores de idade: %d\n", maiores);

	return 0;
}