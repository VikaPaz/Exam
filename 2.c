#include <stdio.h>


float sumFoo(int n) {
    int num = n;
    if (num == 0) {
        return 0;
    }
    if (num == 1) {
        return 1;
    }
    return 1/degree(num-1) + 1/degree(num);
}

int degree(int n) {
    int num = n;
    int count = n;
    int x = n;
    while (count != 0)
    {
        num *= x;
        count = count - 1;
    }
    return num;
}

int main() {
    int n;
    scanf("%d", n);
    printf("%d", sumFoo(n));
    return 0;
}