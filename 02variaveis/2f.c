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

	printf("selecione um limite [n]: ");
	scanf("%lld", &n);
	printf("selecione quantos números [k]: ");
	scanf("%lld", &k);

	long long v[k];

	printf("selecione os números: ");
	for (int i=0; i<k; i++)
	{
		scanf("%lld",&v[i]);
	}

	// é necessário remover os valores duplicados

	for (int i=0; i<k; i++)
	{
		long long indice = (n - (n % v[i])) / v[i];
		soma +=  indice * (indice+1) / 2 * v[i];
	}

	printf(
		"a soma dos múltiplos dos %d números, múltiplos esses que são menores que %d\n"
		"é: %lld\n",k,n,soma
	);

	return 0;
}
