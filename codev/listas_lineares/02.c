#include <stdio.h>
#include <stdlib.h>

#define MAX(x,y)  ((x) > (y) ? (x) : (y))

typedef struct No {
        int E;
        No * Prox;
} No;


int Maior(No * L) {
        /* insert your code here */

        // Dada uma lista linear encadeada de inteiros, elabore uma
        // função que compute o maior elemento. Assuma que haja ao
        // menos um elemento na lista. [O(n)]

        if (L == NULL)  // o enunciado remove esse caso
                return -1;

        int m = L->E;

        while (L != NULL) {
                m = MAX(m, L->E);
                L = L->Prox;
        }
        return m;
}

