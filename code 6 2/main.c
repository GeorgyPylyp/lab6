#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
  int n;
  int m;
  const int  Low=-100, High=200;
  printf ("Введіть n=");
  scanf("%d",&n);
  printf ("Введіть m=");
  scanf("%d",&m);
  int a [n][m];
  srand(time(0));
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
  a[i][j] = Low + rand() % High;
  printf("%d\t", a[i][j]);}
  printf("\n");
}
int ap = 1;
int ar = -1;
for (int i = 0; i < n; i++) {
int p = 1;
for (int j = 0; j < m; j++) {
p *= a[i][j];
}
if (p < ap) {
ap = p;
ar = i;
 }
}
if (ar != -1) {
for (int i = ar; i < n  ; i++) {
for (int j = 0; j < m; j++) {
a[i][j] = a[i + 1][j];
  }
 }
n--; 
}
printf("\nОновлена матриця:\n");
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
printf("%d\t", a[i][j]);
    }
printf("\n");
  }
  return 0;
}