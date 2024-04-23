#include <stdio.h>

int main(){
    int kilowatt_hours;
    float bill_amount, surtax, first_cost, second_cost;

    printf("Input the number of the kilowatt-hours: ");
    scanf("%d", &kilowatt_hours);

    if (kilowatt_hours <= 250) {
        bill_amount = kilowatt_hours * 7.5;
    } else {
        first_cost = 250 * 7.5;
        second_cost = (kilowatt_hours - 250) * 8.5;
        bill_amount = first_cost + second_cost;
    }

    surtax = bill_amount * 0.1;

    bill_amount += surtax;

    printf("\n%d killowatt-hours = %.2f\n", kilowatt_hours, bill_amount);
    
    return 0;
}
