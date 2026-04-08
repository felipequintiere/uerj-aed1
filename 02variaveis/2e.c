/*
e. Modificar o programa anterior de modo que apenas múltiplos de 3 ou 5 sejam
considerados na soma. Por exemplo, se n=17, o somatório deve considerar
apenas os números 3,5,6,9,10,12,15.
*/
#include <stdio.h>

int main(void)
{
	long long soma = 0;

	long long n;
	printf("escolha um número: ");
	scanf("%lld",&n);

	// o maior múltiplo de 3 menor que n é (n-resto_div_3)
	// o maior múltiplo de 5 menor que n é (n-resto_div_5)
	
	/*
	 * P(1): 3.1
	 * P(2): 3.1 + 3.2
	 * P(3): 3.1 + 3.2 + 3.3
	 * ...
	 * P(k): 3.1 + 3.2 +3.3 + ... + 3.(k-1) + 3.k
	*/

	// \(\sum_{i=1}^k (3.i) = 3.\sum{i=1}^k(i)\)
	// = 3 . \frac{n(n+1)}{2}

	
	// basta então dividr (n-resto_div_3) por 3 para encontrar
	// o limite superior do somatório

	// RACIOCÍNIO ANÁLOGO PARA OS MÚLTIPLOS DE 5

	long long indice3 = (n - (n % 3) ) / 3;
	long long indice5 = (n - (n % 5) ) / 5;

	// para os múltiplos de 3
	soma += (indice3*(indice3+1)/2)*3; 

	// para os múltiplos de 5
	soma += (indice5*(indice5+1)/2)*5;
	

	// PORÉM, É NECESSÁRIO EXCLUIR OS VALORES QUE SÃO CONTABILIZADOS
	// MAIS DE UMA VEZ, NESSE CASO, OS MÚLTIPLOS DE 15:
	long long indice15 = (n - (n % 15) ) / 15;
	soma -= (indice15*(indice15+1)/2)*15;

	printf("a soma dos múltiplos de 3 e 5 menores ou iguais a %lld é %lld\n",n,soma);

	return 0;
}
