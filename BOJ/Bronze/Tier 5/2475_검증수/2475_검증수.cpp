// https://www.acmicpc.net/problem/2475

#include <stdio.h>
int main() {
    int sum = 0, A, i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &A);
        sum += A * A;
    }
    printf("%d", sum % 10);
}