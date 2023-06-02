#include <stdio.h>
#include <stdlib.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    int dx = abs(start.x - finish.x);  
    int dy = abs(start.y - finish.y);   
    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        return 1;  
    } else {
        return 0;
    }
}

int main() {
    struct Coord start, finish;
    scanf("%d %d", &start.x, &start.y);
    scanf("%d %d", &finish.x, &finish.y);

    int result = canGet(start, finish);
    if (result == 1) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
