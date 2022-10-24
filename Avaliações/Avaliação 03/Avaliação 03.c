#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  float a,b,c,delta,x1,x2;

  printf("Digite o valor de a : ");
  scanf("%f", &a);
  printf("Digite o valor de b : ");
  scanf("%f", &b);
  printf("Digite o valor de c : ");
  scanf("%f", &c);
  
  delta = (b*b) -4*a*c;
  printf("O valor de delta eh: %.2f \n" , delta);

  if(delta == 0){
    x1 = (-b + (sqrt(delta))) / (2*a);
    x2 = (-b - (sqrt(delta))) / (2*a);
    printf("O valor de x1: %.2f \n", x1);
    printf("O valor de x2: %.2f \n", x2);
  } else{
    if(delta > 0){
    x1 = (-b + (sqrt(delta))) / (2*a);
    x2 = (-b - (sqrt(delta))) / (2*a);
    printf("O valor de x1: %.2f \n", x1);
    printf("O valor de x2: %.2f \n", x2);
  } else{
      if(delta<0){
        printf("Raizes Imaginarias");
      }
  }
    }
return 0;
  }
