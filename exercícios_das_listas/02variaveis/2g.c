/*
Modificar o programa anterior de modo que ao invés de um único valor n, o
usuário entre com a quantidade q de somas que deseja fazer, seguido de q
valores n1,...,nq, seguido do valor k e dos k múltiplos a considerar. A saída
deve ser o valor de cada um dos q somatórios (o i-ésimo somatório é a soma dos
números entre 1 e ni que são múltiplos de qualquer um dos k múltiplos
informados).
*/
#include <stdio.h>

long long soma_multiplos(long long, long long, long long [*]);

int main(void)
{
	long long q, k, i;

	printf(
		"q: número de somas\n"
		"k: número de múltiplos\n\n"
		"selecione [q] [k]: "
	);
	scanf("%lld %lld", &q, &k);

	long long qs[q];
	printf("selecione os números [valores de q]: ");
	for (i = 0; i < q; i++) {
		scanf("%lld", &qs[i]);
	}

	long long ks[k];
	printf("selecione os números [valores de k]: ");
	for (i = 0; i < k; i++) {
		scanf("%lld", &ks[i]);
	}



	puts("\n");
	for (i = 0; i < q; i++) {
		printf("soma %d: %lld\n", (i+1),
			soma_multiplos(
				qs[i],
				(sizeof(ks)/sizeof(ks[0])),
				ks
			)
		);
	}

	return 0;
}

long long soma_multiplos(long long q, long long k, long long ks[k]) {

	long long i, numeros[q], soma = 0;

	// inicializar o vetor numeros[] com zeros
	for (i = 0; i < q; i++) {
		numeros[i] = 0;
	}
	for (i = 0; i < k; i++) {
		for (long long j = 0; j < q; j++) {
			if ((j+1) % ks[i] == 0) {
				numeros[j] = 1;
			}
		}
	}

	for (i = 0; i < q; i++) {
		if (numeros[i] == 1)
			soma += i+1;
	}

	return soma;
}

