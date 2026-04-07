/*
c. Escreva um programa que imprima uma tabela de multiplicação para números
até 12. O formato de saída deve ser como uma tabela com 12 colunas e 12
linhas, na qual a célula de linha i coluna j deve possuir o valor i*j.
*/
#include <stdio.h>

int main(void)
{
	// 12^2 = 144
	unsigned char tabela[12][12];

	for (int i=0; i<12; i++)
	{
		for (int j=0; j<12; j++)
		{
			tabela[i][j]=(i+1)*(j+1);
			printf("%03hhu ",tabela[i][j]);
		}
		printf("\n");
	}

	return 0;
}
