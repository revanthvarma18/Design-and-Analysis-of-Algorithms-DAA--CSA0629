#include <stdio.h>

typedef struct {
    int weight;
    int profit;
} Item;

void knapsack(Item items[], int n, int capacity) {
    float ratio[n];
    for (int i = 0; i < n; i++) {
        ratio[i] = (float)items[i].profit / items[i].weight;
    }

    int totalProfit = 0;
    for (int i = 0; i < n; i++) {
        if (items[i].weight <= capacity) {
            capacity -= items[i].weight;
            totalProfit += items[i].profit;
        } else {
            totalProfit += (int)(items[i].profit * ((float)capacity / items[i].weight)));
            break;
        }
    }

    printf("Maximum profit: %d\n", totalProfit);
}

int main() {
    Item items[] = {{40, 80}, {30, 70}, {20, 50}, {30, 80}};
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 100;
    
    knapsack(items, n, capacity);
    return 0;
}

