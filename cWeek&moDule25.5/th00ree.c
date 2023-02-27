
#include <stdio.h>
#include <string.h>
#include <math.h>

void calculate_cost_and_check_power_of_two(char *s) {
    int cost = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        cost += (int) s[i] - 'a' + 1;
    }
    int is_power_of_two = (cost & (cost - 1)) == 0;
    if (is_power_of_two) {
        int n = log2(cost);
        printf("YES\ncost = 2^%d\n", n);
    } else {
        printf("NO\n");
    }
}

int main() {
    char s[100];
    scanf("%s", s);
    calculate_cost_and_check_power_of_two(s);
    return 0;
}
