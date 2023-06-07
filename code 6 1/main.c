#include <stdio.h>
int main() {
  int n;
  int m;
  printf ("Введіть n=");
  scanf("%d",&n);
  printf ("Введіть m=");
  scanf("%d",&m);
  int a [n][m];
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
  printf("Введіть елемент a[%d][%d]: ", i, j);
  scanf("%d", &a[i][j]);
 }
}
 printf("\n  масив:\n");
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
  printf("%d\t", a[i][j]);}
  printf("\n");
}
  int max=0;
  int maxi=0;
  int maxj=0;
  int max2=0;
  int max2i=0;
  int max2j=0;
for (int i=0;i<n;i++){
for (int j=0;j<m;j++){
if(a[i] [j]> max){
 max2=max;
 max2i=maxi;
 max2j=maxj;
 max=a[i][j];
 maxi=i;
 maxj=j;
}
else if (a[i][j] > max2){
max2 = a[i][j];
max2i=i;
max2j=j;
  }
 }
}
a[maxi][maxj]=0;
a[max2i][max2j]=0;
printf("\nзмінений  масив:\n");
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
printf("%d\t", a[i][j]);
 }
printf("\n");
}
return 0;
}
