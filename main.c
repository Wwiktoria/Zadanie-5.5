#include <stdio.h>

int main(void) {
  int a[100], i, j, t, pom;    

  printf("Podaj wielkość tablicy: ");
  scanf("%d",&t);
  
    for(i=0; i<t; i++){
    printf("Podaj liczbe: ");
    scanf("%d", &a[i]);
    }

  for(j=t-1;j>0;--j){
    for(i=0; i<j; ++i){
      if(a[i]>a[i+1]){
        pom=a[i];
        a[i]=a[i+1];
        a[i+1]=pom;}
      }
      }
  printf("\nPosortowane:\n");  
    for(i=0; i<t; i++){
      printf("%d\n", a[i]);
      }
      
  
  return 0;
}