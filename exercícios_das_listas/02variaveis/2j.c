/*
 * Escreva um programa que compute, dado um inteiro n, o valor da expressão:
 * 	\begin{align*}
 * 	\sum \frac{(-1)^{k+1}}{2k-1}  :  k = 1...10^n
 * 	\end{align*}
 */
	// equivale a \frac{\pi}{4}
#include <stdio.h>

// se k for ímpar, se reduz a:
// 	frac{1}{2(k)-1}
// se k for par, se reduz a:
// 	frac{-1}{2(k)-1}
// 	
int main(void)
{
	long long k, limite = 1, i;
	double soma = 0.0;

	printf("insira um número [k]: ");	
	scanf("%lld", &k);

	for (i = 0; i < k; i++) {
		limite *= 10;
	}

	for (i = 1; i <= limite; i++) {
		if (i % 2 == 1) { // se i for ímpar
			printf("%lld: %f\n", i, ( soma += 1/(2*(double)i - 1) ) );
		} else {
			printf("%lld: %f\n", i, ( soma -= 1/(2*(double)i - 1) ) );
		}
	}

	return 0;
}
