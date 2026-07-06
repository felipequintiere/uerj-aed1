#include <stdio.h>
#include <stdlib.h>

typedef struct No {
        int E;
        No * Ant;
        No * Prox;
} No;

int KUltimo(No * L, int k) {
        /* insert your code here */

        // Dada uma lista linear encadeada circular de inteiros,
        // duplamente encadeada, e um inteiro k, elabore uma função que
        // compute o k-último elemento, ou retorne -1 caso esse
        // elemento não esteja definido. O k-último elemento de
        // uma lista é o último quando k=1, é o penúltimo quando
        // k=2, o antepenúltimo quando k=3, e assim por diante. [O(k)]

	// ESSA QUESTÃO NÃO USA NÓ CABEÇA

        if (L == NULL)
                return -1;

        // encontrar o k último
        No *p = L;
        int i = 0;
        while (i < k) {
                p = p->Ant;
                i++;

                // tratar o caso de voltar ao início
                if (p == L && i < k) {
                       return -1;
                }
                // se p aponta para L (o primeiro elemento) e i for
                // menor do que k, o loop daria uma volta; por outro
                // lado, se p aponta para L e i é igual a k, implica
                // dizer que o k-último elemento é o primeiro
        }

        return p->E;
}
