#include <cstdio>

int step_function(int x) {
  int result = 0;
  if (x < 0) {
    result = -1;
  } else if (x > 0) {
    result = 1;
  }
  return result;
}

int main() {
  int num1 = 100;
  int num2 = 0;
  int num3 = -10;

  int step1 = step_function(num1);
  int step2 = step_function(num2);
  int step3 = step_function(num3);

  printf("Num1: %d, Step1: %d \n", num1, step1);
  printf("Num2: %d, Step2: %d \n", num2, step2);
  printf("Num3: %d, Step3: %d \n", num3, step3);
  return 0;
}