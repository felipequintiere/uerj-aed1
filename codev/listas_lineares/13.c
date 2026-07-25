#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

void Inverter(int L[], int n) {
        /* insert your code here */

        // Dados um inteiro n, uma lista linear L sequencial não-ordenada de
        // n inteiros, elabore uma função que inverta a ordem entre os elementos
        // desta linear [O(n)].

        for (long i = 0; i < n/2; i++) {
                long aux = L[i];
                L[i] = L[n-1-i];
                L[n-1-i] = aux;
        }
}
