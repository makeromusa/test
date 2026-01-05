#include <stdio.h>
float inputCommission();
float calculateCommision(float amount);
void displayCommission(float commission);
float commission,amount;

int main()
{
    float amount = inputCommission();
    float commission = calculateCommision(amount);
    displayCommission(commission);
    return 0;
}

float inputCommission()
{

    printf("Enter amount:");
    scanf("%f", &amount);
    return amount;
}

float calculateCommision(float amount)
{
  if(amount>=0 && amount<=10000)
  {
      commission = amount*0;
  }
  else if(amount>10000 && amount<=100000)
  {
      commission = amount*0.05;
  }
  else if(amount>100000 && amount<=500000)
  {
      commission = amount*0.1;
  }
  else if(amount>500000 && amount<=1000000)
  {
      commission = amount*0.15;
  }
  else
  {
      commission = amount*0.2;
  }
  return commission;
}
void displayCommission(float commission)
{
    printf("%.0f", commission);
}


