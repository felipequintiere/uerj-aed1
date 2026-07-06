#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

typedef struct No {
	int E;
	No * Prox;
} No;

No * inserir_final(No **inicio, No ** fim, int e) { // escrevi essa função auxiliar
	No *novo = (No *) malloc(sizeof(No));

	novo->E = e;
	novo->Prox = NULL;

	if (*inicio == NULL) { // se fim for o ponteiro para a lista
		*fim = novo;
		*inicio = novo;
	}
	else // se fim for um elemento da lista
		(*fim)->Prox = novo;

	return novo;
}


No * Concatenar(No * L1, No * L2) {
	/* insert your code here */

	// Dadas lista lineares encadeadas L1,L2 de respectivamente
	// n1,n2 inteiros, elabore uma função que retorne uma nova
	// lista linear encadeada que represente a concatenação de
	// L1 com L2 [O(n1+n2)].

	// sem nó cabeça
	No *inicio = NULL; // representa o início da lista L1+L2
	No *fim = NULL;

	No *p;
	for (p = L1; p != NULL; p = p->Prox) {
		fim = inserir_final(&inicio, &fim, p->E);
		// A função 'inserir_depois' retorna o endereço do
		// nó criado.
		//
		// Anteriormente, eu havia tentado o seguinte:
		// ```
		// 	(void) inserir_final(&inicio, &fim, p->E);
		// 	fim = fim->Prox;
		// ```
		// Essa forma resulta em um erro, pois a lista não tem
		// nó cabeça. Quando 'fim' for o ponteiro para a lista,
		// não faz sentido escrever 'fim->Prox'.
	}
	for (p = L2; p != NULL; p = p->Prox) {
		fim = inserir_final(&inicio, &fim, p->E);
	}

	return inicio;
}
