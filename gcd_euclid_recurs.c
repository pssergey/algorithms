/*
 *
 * Алгоритм Евклида. Чтобы вычислить наибольший общий делитель двух
 * неотрицательных целых чисел p и q, нужно сделать следующее.
 * Если q равно 0, берем в качестве ответа p. Если не равно 0, разделим
 * p на q c вычислением остатка r. Ответом является наибольший общий
 * делитель q и r.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int gcd(int p, int q);

int main() {
    int p, q;

    scanf("%d%d", &p, &q);
    printf("GCD a and b: %d\n", gcd(p, q));

    system("PAUSE");

    return 0;
}

int gcd(int p, int q) {
    if (q == 0) return p;
    int r = p % q;
    return gcd(q, r);
}

