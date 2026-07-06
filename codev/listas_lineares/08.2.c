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

        for (int i = 0; i < n;) {
                if (L[i] > k) {
                        L[i] = L[n-1];
                        --n;
                        // ou simplesmente 'L[i] = L[--n];'
                } else
                        ++i;
        }
}

