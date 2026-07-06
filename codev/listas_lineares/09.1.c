#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

typedef struct No {
        int E;
        No * Prox;
} No;

void RemoveMaiores(No * &L, int k) {
        /* insert your code here */

        // Dados uma lista linear L encadeada e um inteiro k,
        // elabore uma função que remova todos os elementos
        // maiores que k de L. [O(n)]

        if (L == NULL) // lista vazia
                return;

        // sem nó cabeça!
        No *u = NULL;  // último elemento

        for (No *p = L; p != NULL;) {
                // removendo o primeiro elemento
                if (p->E > k) {
                        if (u == NULL) {
                                No *aux = p;
                                L = p->Prox;
                                p = p->Prox;
                                free(aux);
                        }
                        else {
                                No *aux = p;
                                u->Prox = p->Prox;
                                p = p->Prox;
                                free(aux);
                        }
                        continue;
                } else {
                        u = p;
                        p = p->Prox;
                }
        }
}
