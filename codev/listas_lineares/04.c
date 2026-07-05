#include <stdio.h>
#include <stdlib.h>

typedef struct No {
        int E;
        No * Prox;
} No;

int KUltimo(No * L, int k) {
        /* insert your code here */

        // Dada uma lista linear encadeada circular de inteiros,
        // com nó cabeça, e um inteiro k, elabore uma função que
        // compute o k-último elemento, ou retorne -1 caso esse
        // elemento não esteja definido. O k-último elemento de
        // uma lista é o último quando k=1, é o penúltimo quando
        // k=2, o antepenúltimo quando k=3, e assim por diante. [O(n)]

        if (L == NULL) // lista vazia
                return -1;

        // contar o número de elementos
        int c = 0; // desconsiderando o nó cabeça
        No* p = L;
        for (;p->Prox != L; p = p->Prox)
                c++;  // NOTA: o nó cabeça DEVE SER DESPREZADO

        // retornar -1 se o elemento não estiver definido
        if (k > c)
                return -1;

        // econtrar o k-último
        p = L; // p e L representam o ponteiro para o nó cabeça
        for (int i = 0; i < (c-k)+1; i++) {
                p = p->Prox;
        }

        return p->E;
}

