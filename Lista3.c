-- #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado() {
  srand(time(NULL)); 
  return (rand() % 6) + 1; 
}
int main() {
  int i, num, contagem[6] = {0}; 
  for (i = 0; i < 1000000; i++) { 
    num = Dado(); 
    contagem[num-1]++; 
  }
  for (i = 0; i < 6; i++) {
    printf("%d: %d\n", i+1, contagem[i]);
  }
  return 0;
}
