#include <stdio.h>
int main() {

int i, j;

for (i = 1; i <= 3; i++) {
  for (j = 1; j <= 3; j++) {
    printf("%d ", i * j);
  }
  printf("\n");
}
    return 0;
}