/*
 *
 * Вычисление наибольшего общего
 * делителя (НОД) двух целых чисел.
 *
 */

 #include <stdio.h>

 int gcd(int a, int b);

 int main() {
    int a, b;

    scanf("%d%d", &a, &b);
    printf("GCD a and b: %d\n", gcd(a, b));

    return 0;
 }

 int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
 }
