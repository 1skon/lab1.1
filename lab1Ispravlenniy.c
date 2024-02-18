#include <stdio.h>

int NODFinder(int a, int b) {
    int min;
    if (a < b) {
        min = a;
    } else if (a > b) {
        min = b;
    } else {
        min = a;
    }
    printf("a=%d b=%d: ", a, b);
    for (int i = 1; i <= min; ++i) {
        if (a % i == 0 && b % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int get_positive_int (int *value) {
    int n;
    while ((n = scanf("%d", value)) != 1 || *value <= 0) {
        if (n == EOF)
            return EOF;

        printf("Введите НАТУРАЛЬНОЕ число!\n");
        scanf("%*c");
    }
    return 1;
}

int main() {
    int a, b;

    printf("Введите первое натуральное число: ");
    if (get_positive_int(&a) == EOF) {
        return 1;
    }

    printf("Введите второе натуральное число: ");
    if (get_positive_int(&b) == EOF) {
        return 1;
    }

    MinimumFinder(a, b);

    return 0;
}
