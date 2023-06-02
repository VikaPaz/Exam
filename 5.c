#include <stdio.h>

struct PC {
    char* name;
    int price;
	int RAM;
};

struct PC* cheapestPC(struct PC data[], int n) {
    struct PC* cheapest = &data[0];
    for (int i = 1; i < n; i++) {
        if (data[i].price < cheapest->price ||
            (data[i].price == cheapest->price && data[i].RAM < cheapest->RAM)) {
            cheapest = &data[i];
        }
    }
    return cheapest;
}

int main() {
    struct PC data[] = {
        {"q", 1000, 8},
        {"w",800, 16},
        {"e", 1200, 4},
        {"r", 900, 8},
    };
    int n = 4;
    struct PC* result = cheapestPC(data, n);
    printf("Name - %s, Price - %d, RAM - %d\n",result->name, result->price, result->RAM);
    return 0;
}
