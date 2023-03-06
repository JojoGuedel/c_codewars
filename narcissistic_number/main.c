#include <math.h>
#include <stdio.h>
#include <stdbool.h>

bool narcissistic(int num)
{
    int len = (int)log10(num) + 1;
    int n = 0;

    for (int i = 0; i < len; i++) {
        n += pow((num % (int)pow(10, i+1)) / (int)pow(10, i), len);
    }

    return n == num;
}

int main() {
    printf("%i", narcissistic(7));
}