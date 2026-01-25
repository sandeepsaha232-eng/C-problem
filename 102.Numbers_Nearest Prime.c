#include <stdio.h>

int main() {
    int n, flag, prime = 2, copy = 2;
    scanf("%d", &n);

    while (prime <= n) {
        flag = 0;
        for (int i = 2; i * i <= prime; i++) {
            if (prime % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            copy = prime;
        }
        prime++;
    }

    printf("%d", copy);
    return 0;
}