#include <stdio.h>
#include <stdlib.h>

typedef struct No {
        int E;
        No * Ant;
        No * Prox;
} No;

void Remove(No * &L, No * p) {
        /* insert your code here */

        // Dados uma lista duplamente encadeada L e um ponteiro p para
        // um nó de L, remover o nó p. [O(1)]
        /*
                if (L == p) {
                        L = p->Prox;
                }
                if (p->Ant != NULL) {
                        p->Ant->Prox = p->Prox;
                }
                if (p->Prox != NULL) {
                        p->Prox->Ant = p->Ant;
                }
                free(p);
        */

        // ----------------------------------------
        if (L == p) // ao remover o nó que L está apontando
                L = p->Prox;
        // nota

        if (p->Ant != NULL) {
                p->Ant->Prox = p->Prox;
        }
        if (p->Prox != NULL)
                p->Prox->Ant = p->Ant;

        free(p);
}

