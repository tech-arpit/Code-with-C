#include <stdio.h>

int main() {
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;
    scanf("%d %d %d %d %d %d", &budget, &numGuests, &foodCostPerGuest, &decorationCost, &musicCost, &extraExpenses);

    // Calculate total costs
    int totalFoodCost = numGuests * foodCostPerGuest;
    int totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses;

    // Check if conditions are met
    if (totalCost > budget || numGuests < 6 || numGuests > 50) {
        printf("Celebration Denied\n");
    } else if ((decorationCost < 0.3 * budget || totalFoodCost < 0.5 * budget) && (numGuests <= 25 || musicCost > 0)) {
        printf("Celebration Approved\n");
    } else {
        printf("Celebration Denied\n");
    }

    return 0;
}
