#include <stdio.h>
#include <string.h>

int main() {
  const float COM_BELOW_10 = 0.02;
  const float COM_BELOW_25 = 0.05;
  const float COM_BELOW_50 = 0.1;
  const float COM_BELOW_75 = 0.13;
  const float COM_BELOW_100 = 0.15;
  const float COM_ATLEAST_100 = 0.25;

  char name[50];
  float sales, commission;

  printf("Enter salesman's name: ");
  fgets(name, 50, stdin);
  name[strcspn(name, "\n")] = '\0';

  printf("\nInput his Total Sales for the Month: ");
  scanf("%f", &sales);

  if (sales > 0 && sales < 10000) {
    commission = sales * COM_BELOW_10;
  } else if (sales >= 10000 && sales < 25000) {
    commission = sales * COM_BELOW_25;
  } else if (sales >= 25000 && sales < 50000) {
    commission = sales * COM_BELOW_50;
  } else if (sales >= 50000 && sales < 75000) {
    commission = sales * COM_BELOW_75;
  } else if (sales >= 75 && sales > 100000) {
    commission = sales * COM_BELOW_100;
  } else if (sales >= 100000) {
    commission = sales * COM_ATLEAST_100;
  } else {
    commission = 0;
  };

  printf("\n\n\tTOTAL COMMISSION is %.2f", commission);
  return 0;
}

  
