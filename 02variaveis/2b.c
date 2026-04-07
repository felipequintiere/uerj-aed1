/*
b. Modifique o programa anterior de modo que apenas os usuários Ana e João
sejam cumprimentados de forma especial; para os demais, um cumprimento
genérico deve ser dado.
*/
#include <stdio.h>
#include <string.h>
#define NAME_LEN 20

int main(void)
{
	char nome[NAME_LEN+1];
	char fmt[NAME_LEN+1];

	printf("Insira o seu nome: ");
	sprintf(fmt, "%%%ds", NAME_LEN-1);
	scanf(fmt,nome);

	if (strcmp("Ana",nome) == 0 || strcmp("João",nome) == 0)
		printf("Olá, %s!\n", nome);
	else
		printf("Olá!\n");

	return 0;
}
