#include <stdio.h>
#include <stdlib.h>

typedef struct No {
        int E;
        No * Prox;
} No;

int Ultimo(No * L) {
        /* insert your code here */

        // Dada uma lista linear encadeada circular de inteiros,
        // elabore uma função que compute o último elemento, ou
        // retorne -1 caso a lista não tenha elementos. [O(n)]

        if (L == NULL)
                return -1;

        // se a lista tiver apenas um elemento
        if (L->Prox == L)       // desnecessário porque esse caso
                return L->E;    // é tratado no while loop

        No *p = L;
        while (p->Prox != L) {
                p = p->Prox;

        }

        return p->E;
}


