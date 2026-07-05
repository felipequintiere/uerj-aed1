#include <stdio.h>
#include <stdlib.h>

typedef struct No {
        int E;
        No * Prox;
} No;

int NumeroElementos(No * L) {
        /* insert your code here */

        //Dada uma lista linear encadeada de inteiros, elabore uma
        //função que compute o número de elementos. [O(n)]

        //if (L == NULL) // o for loop já trata esse caso
        //      return 0;

        int n;
        for (n = 0; L != NULL; L = L->Prox)
                ++n;

        return n;
}
// o exercício assume uma lista encadeada sem um campo contador
// de tamanho, dessa forma, é necessário percorrer nó por nó até
// o final (quando o ponteiro para o próximo nó é NULL)
