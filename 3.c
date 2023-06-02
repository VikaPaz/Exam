#include <stdio.h>

int main() {
    int max1 = 0; 
    int max2 = 0;
    int num;
    scanf("%d", &num);
    int flag = 0;

    while (num != 0) {
        if (num % 2 == 0) {
            if (flag == 0) {
                max1 = num;
                max2 = num;
            }
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }
        scanf("%d", &num);
    }
    printf("%d\n", max2);
    return 0;
}
