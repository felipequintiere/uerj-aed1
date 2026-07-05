#include <stdio.h>
#include <stdlib.h>

typedef struct No {
        int E;
        No * Prox;
} No;

int KUltimo(No * L, int k) {
        No * pKUlt = NULL;
        No * p = L->Prox;
        int n=0;
        while (p != L)  {
                n = n+1;
                if (n >= k) { //andar com o ponteiro do k-último
                        if (pKUlt == NULL) {
                                pKUlt = L->Prox;
                        } else {
                                pKUlt = pKUlt->Prox;
                        }
                }
                p = p->Prox;
        }
        if (pKUlt == NULL) {
                return -1;
        } else {
                return pKUlt->E;
        }
}

