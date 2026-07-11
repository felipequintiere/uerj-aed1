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

No * Soma2a2(No * L) {
        /* insert your code here */

        // Dado uma lista linear L encadeada, elabore uma função que
        // retorne uma nova lista linear encadeada com todos os valores
        // da lista original somados dois a dois. [O(n^2)]
        //
        // Ex: se L->1->5->4->10, então o retorno deve ser uma
        // lista encadeada R->6->5->11->9->15->14.

	if (L == NULL)
		return NULL;

        No *nova_lista = NULL;

        No *q;
        for (No *p = L; p != NULL; p = p->Prox)
                for(q = p->Prox; q != NULL; q = q->Prox)
                        Insere(nova_lista, (p->E + q->E));

        return nova_lista;
}
