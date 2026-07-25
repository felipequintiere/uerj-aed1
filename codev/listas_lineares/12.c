#include <stdio.h>
#include <stdlib.h>

typedef struct No {
        int E;
        No * Prox;
} No;

void Insere(No * &L, int e) {
        No * novo = (No *) malloc(sizeof(No));
        novo->E = e; novo->Prox = L; L = novo;
}

No * Inverte(No * L) {
        /* insert your code here */

        // Dado uma lista linear L encadeada, elabore uma função que
        // retorne uma outra lista linear encadeada com os elementos
        // de L em ordem inversa. [O(n)]

        No *nova_lista = NULL;

        // basta ler a lista dada e inserir o elemento atual no ínicio
        // da nova lista
        for (No *p = L; p != NULL; p = p->Prox) {
                Insere(nova_lista, p->E);
                // eu estava usando &nova_lista, pois considerei como
                // `void Insere(No **L, int e) {...}`
        }

        return nova_lista;
}
