#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

typedef struct No {
        int E;
        No * Prox;
} No;

void Insere(No * &L, int e) {
        No * novo = (No *) malloc(sizeof(No));
        novo->E = e; novo->Prox = L; L = novo;
}

No * SemRepeticoes(No * L) {
        /* insert your code here */

        // Dado uma lista linear L encadeada, elabore uma função que
        // retorne uma nova lista encadeada com os valores de L sem
        // repetições. [O(n^2)]
	
	if (L == NULL)
		return NULL;

        No *nova_lista= NULL;

        No *p, *q;
        for (p = L; p != NULL; p = p->Prox) {
                bool r = false; // se repete

                for (q = p->Prox; q != NULL; q = q->Prox ) {
                        if (p->E == q->E) {
                                r = true;
                                break;
                        }
                }

                if (!r) {
                        Insere(nova_lista, p->E);
                }
                // NOTA: a função Insere() põe o nó antes do primeiro
                // nó da lista, fazendo com que o nó inserido torne-se
                // o primeiro nó da tabela
        }

        return nova_lista;
}

