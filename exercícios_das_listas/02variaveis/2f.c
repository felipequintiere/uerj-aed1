/*
f. Modificar o programa anterior de modo que além de n, seja pedido um valor k
seguido de k inteiros que consistem da lista dos múltiplos que devem ser
considerados. Por exemplo, se n=17, k=3 seguido dos números 2,3,5, então o
somatório deve considerar apenas os números 2,3,4,5,6,8,9,10,12,14,15,16.
*/

// o valor da saída para n=17, k=3 e os valores 2,3,5 é 104
#include <stdio.h>

int main(void)
{
	long long n, k, soma = 0;
	long long i;

	printf(
		"n: limite superior\n"
		"k: número de múltiplos\n\n"
		"selecione [n] [k]: "
	);
	scanf("%lld %lld", &n, &k);

	_Bool numeros[n]; 
	long long v[k];


	printf("selecione os números [valores de k]: ");
	for (i = 0; i < k; i++) {
		scanf("%lld",&v[i]);
	}

	// inicializar o vetor numeros[] com zeros
	for (i = 0; i < n; i++) {
		numeros[i] = 0;
	}

	for (i = 0; i < k; i++) {
		for (long long j = 0; j < n; j++) {
			if ((j+1) % v[i] == 0) {
				numeros[j] = 1;
			}
		}
	}

	for (i = 0; i < n; i++) {
		 printf("%d: %lld \n", (i+1), numeros[i]);
	}

	for (i = 0; i < n; i++) {
		if (numeros[i] == 1)
			soma += i+1;
	}

	printf("\nsoma: %d\n", soma);

	return 0;
}
