#include <stdio.h>

int main() {
  char code;
  float gallons, amount_due;

  printf("Data codes:\n");
  printf("\n\t(H - Home)\n\t(C - Commercial)\n\t(I - Industrial)\n");

  printf("\nInput data code: ");
  scanf(" %c", &code);

  printf("\nInput number of water (in gallons) used: ");
  scanf("%f", &gallons);

  switch (code) {
  case 'H':
    amount_due = 250 + gallons * 0.002;
    break;
  case 'C':
    if (gallons <= 4000000) {
      amount_due = 5000;
    } else {
      amount_due = 5000 + (gallons - 4000000) * 0.002;
    }
    break;
  case 'I':
    if (gallons <= 4000000) {
      amount_due = 8000;
    } else if (gallons <= 10000000) {
      amount_due = 14000;
    } else {
      amount_due = 18000;
    }
    break;
  default:
    printf("Invalid code entered.\n");
    return 1; // Indicate error
  }

  printf("\n\nTOTAL COST IS %.2f\n", amount_due);

  return 0;
}
