#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);

    if (n % 7 == 0 || n % 7 == 2) {
        printf("CY");
    } else {
        printf("SK");
    }

    return 0;
}
