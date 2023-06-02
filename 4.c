#include <stdio.h>

int count(char str[], char letter) {
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (str[i] == letter) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str[100];
    char letter;
    fgets(str, sizeof(str), stdin);
    scanf("%c", &letter);
    int result = count(str, letter);
    printf("%d\n", result);
    return 0;
}
