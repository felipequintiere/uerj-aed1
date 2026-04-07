/*
a. Elabore um algoritmo que peça ao usuário o nome dele e o cumprimente
usando tal nome.
*/
#include <stdio.h>
#define NAME_LEN 20

int main(void)
{
	char nome[NAME_LEN+1];
	char fmt[NAME_LEN+1];

	printf("Insira o seu nome: ");
	sprintf(fmt, "%%%ds", NAME_LEN-1);
	scanf(fmt,nome);

	printf("Olá, %s!\n", nome);
/* man 3 sscanf
       s      Matches  a  sequence of non-white-space characters; the
              next pointer must be a pointer to the  initial  element
              of  a  character  array that is long enough to hold the
              input sequence and the terminating  null  byte  ('\0'),
              which  is  added automatically.  The input string stops
              at white space or at the maximum field width, whichever
              occurs first.
*/

/*
se você fizer:

	char nome[10];
	scanf("%10s", nome);

resultará em um erro, porque:

	ele pode tentar escrever 10 caracteres
		\0
	total = 11 bytes, mas o array só tem 10
*/

	return 0;
}
