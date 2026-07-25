#include <stdio.h>
#include <stdlib.h>

typedef struct No {
        int E;
        No * Prox;
} No;

void Remove(No * &L, No * p) {
        /* insert your code here */

        // Dados uma lista encadeada L e um ponteiro p para um nó de L,
        // remover o nó p. [O(N)]

        if (L == NULL)
                return;

        No *anterior = NULL;
        No *atual = L;

        // assumindo que p será encontrado
        // caminhar pela lista e encontrar p
        for (; atual != p; atual = atual->Prox) {
                anterior = atual;
        }

        if (anterior == NULL) { // remover o primeiro elemento da lista
                L = atual->Prox;
        } else {
                anterior->Prox = atual->Prox;
        }

        free(atual);
}

