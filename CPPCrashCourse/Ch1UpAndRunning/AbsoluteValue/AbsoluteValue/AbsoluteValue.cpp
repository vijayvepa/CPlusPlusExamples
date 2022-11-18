#include <cstdio>

int absolute_value(int x) {
    if (x < 0) {
        return x * -1;
    }

    return x;
}

int main() {
    int num1 = 100;
    int num2 = 0;
    int num3 = -10;

    int abs1 = absolute_value(num1);
    int abs2 = absolute_value(num2);
    int abs3 = absolute_value(num3);

    printf("Num1: %d, Abs1: %d \n", num1, abs1);
    printf("Num2: %d, Abs2: %d \n", num2, abs2);
    printf("Num3: %d, Abs3: %d \n", num3, abs3);
    
    return 0;
}