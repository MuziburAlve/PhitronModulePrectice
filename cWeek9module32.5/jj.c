
#include <stdio.h>

int sum_of_last_digits(int n) {
    if (n == 0) {
        return 0;
    } else {
        int x;
        scanf("%d", &x);
        return (x % 10) + sum_of_last_digits(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    int sum = sum_of_last_digits(n);
    printf("The total sum of last digits is %d\n", sum);
    return 0;
}
