#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

void RemoveMaiores(int L[], int &n, int k) {
        /* insert your code here */

        // PASSAR O NOVO VALOR DO NÚMERO DE ELEMENTOS PARA n (int &n)

        // Dados um inteiro n, uma lista linear L sequencial não-ordenada de
        // n inteiros, e um inteiro k, elabore uma função que remova todos os
        // elementos maiores que k de L. [O(n)]

	if (L == NULL)
		return;

        int *v = (int *) malloc(sizeof(int)*n);

        int n_e = 0; // número de elementos de v
        int i;
        for (i = 0; i < n; i++) {
                if (L[i] <= k) {
                        v[n_e++] = L[i];
                        // apenas são inseridos valores até a posição
                        // (n_e-1): [0, n_e)
                }
        }

        for (i = 0; i < n_e; i++) {
                L[i] = v[i];
        }
	free(v);

        n = n_e;
}
