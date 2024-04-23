#include <stdio.h>
#include <ctype.h>

#define BASE_COST 28.99
#define PER_WORD_COST 2.50
#define SPECIAL_SERVICE_CHARGE 5.00

int main() {
    char name[100];
    int num_words;
    char delivery_type;
    double total_cost;

    printf("Enter customer's name: ");
    fgets(name, sizeof(name), stdin);

    printf("Input number of words used in the telegram: ");
    scanf("%d", &num_words);

    while (getchar() != '\n');

    printf("Input type of delivery (S-Special) or (N-None): ");
    scanf("%c", &delivery_type);

    if (num_words <= 12) {
        total_cost = BASE_COST;
    } else {
        total_cost = BASE_COST + (num_words - 12) * PER_WORD_COST;
    }

    if (tolower(delivery_type) == 's') {
        total_cost += SPECIAL_SERVICE_CHARGE;
    }

    printf("\nTotal is %.2f\n", total_cost);

    return 0;
}

