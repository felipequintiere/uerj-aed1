#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome[5];
	int idade;
} Aluno;

typedef struct No
{
	int turma;
	Aluno *aluno;
	struct No *prox;
} No;

int main(void)
{
	Aluno alunos[3];
	No n1, n2, n3, n4, *L;

	L = &n1;
	n1.turma = 1;
	n1.aluno = &alunos[0];
	strcpy(alunos[0].nome,"JOÃO");
	alunos[0].idade = 5;
	n1.prox = &n2;

	n2.aluno = &alunos[1];
	n2.turma = 1;
	strcpy(alunos[1].nome,"LÉO");
	alunos[1].idade = 8;
	n2.prox = &n3;

	n3.turma = 2;
	n3.aluno = &alunos[1];
	n3.prox = &n4;

	n4.turma = 2;
	n4.aluno = &alunos[2];
	n4.prox = NULL;
}

// nota:
// poderia ter usado o strncpy
/*
	alunos[0].nome = "JOÃO";
	02_exer_prova.c: In function ‘main’:
	02_exer_prova.c:26:24: error: assignment to expression with array type
	   26 |         alunos[0].nome = "JOÃO";
		  |                        ^
*/

