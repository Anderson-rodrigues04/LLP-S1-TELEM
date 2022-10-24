#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char str[25] = "subi no onibus";
  char c;
  int i, tam = strlen(str) ;
  for (i=0; i< tam/2; i++) {
    c= str[i];
    str[i] = str[tam-1-i];
    str[tam-1-i] = c;
  }
  printf("str = %s\n", str);
  
return 0;
}
