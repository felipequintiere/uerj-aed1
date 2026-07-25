/*
d.Escreva um programa que peça ao usuário um número n e imprima a soma
dos números 1 a n.
*/

#include <stdio.h>

int main(void)
{
	unsigned long long n;
	printf("insira um número: ");		
	scanf("%llu", &n);		
	printf("a soma de 1 a %llu é: %llu\n", n, n*(n+1)/2);		

	return 0;
}
