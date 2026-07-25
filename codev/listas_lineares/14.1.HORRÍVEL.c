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

        for (; atual != NULL; atual = atual->Prox) {
                if (atual == p) {
                        if (anterior == NULL) { // remover o primeior nó
                                L = atual->Prox;
                                free(atual);
                                break;
                        } else {
                                anterior->Prox = atual->Prox;
                                free(atual);
                                break;
                        }
                } else {
                        anterior = atual;
                }
        }
}
// PÉSSIMO CÓDIGO!!!
