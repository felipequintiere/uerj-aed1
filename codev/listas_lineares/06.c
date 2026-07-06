#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

int * Concatenar(int L1[], int n1, int L2[], int n2) {
        /* insert your code here */

        // Dados inteiros n1, n2, e lista lineares L1,L2 sequenciais
        // não-ordenadas de respectivamente n1,n2 inteiros, elabore
        // uma função que retorne uma nova lista linear sequencial
        // que represente a concatenação de L1 com L2 [O(n1+n2)].

        int *L = (int *) malloc(sizeof(int)*(n1+n2));

        int i;
        for (i = 0; i < n1; i++)
                L[i] = L1[i];

        for (i = 0; i < n2; i++)
                L[n1+i] = L2[i]; // índice

        return L;
}

