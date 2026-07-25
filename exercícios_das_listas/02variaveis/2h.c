/*
Escreva um programa que imprime todos os números primos até certo número
n solicitado ao usuário.
*/
#include <stdio.h>
#include <stdbool.h>

_Bool eh_primo(long long);

_Bool eh_primo(long long n) {
	long long i;

	if (n == 0 || n == 1)
		return false;

	// quando n = 2, esse loop é ignorado
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main(void)
{
	long long n, i;

	printf("insira um número [n]: ");	
	scanf("%lld", &n);

	for (i = 1; i <= n; i++) {
		if (eh_primo(i)) {
			printf("%lld é primo\n", i);
		}
	}

	return 0;
}
