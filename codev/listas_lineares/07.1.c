#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

typedef struct No {
        int E;
        No * Prox;
} No;

No * criar_no(int e) { // escrevi essa função auxiliar
        No *novo = (No *) malloc(sizeof(No));
        novo->E = e;
        novo->Prox = NULL;

        return novo;
}


No * Concatenar(No * L1, No * L2) {
        /* insert your code here */

        // Dadas lista lineares encadeadas L1,L2 de respectivamente
        // n1,n2 inteiros, elabore uma função que retorne uma nova
        // lista linear encadeada que represente a concatenação de
        // L1 com L2 [O(n1+n2)].

        // sem nó cabeça
        No * l_inicio = NULL;
        No * l_final = l_inicio;

        No *p;
        for (p = L1; p != NULL; p = p->Prox) {
                No *novo = criar_no(p->E);

                if (l_inicio == NULL) // se for a primeira iteração
                        l_inicio = l_final = novo;
                else {
                        l_final->Prox = novo;
                        l_final = l_final->Prox;
                }
        }

        for (p = L2; p != NULL; p = p->Prox) {
                No *novo = criar_no(p->E);

                if (l_inicio == NULL) // se L1 estiver vazia
                        l_inicio = l_final = novo;
                else {
                        l_final->Prox = novo;
                        l_final = l_final->Prox;
                }
        }

        return l_inicio;
}

