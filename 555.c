
#include<stdio.h>

int main(){
   int a = 0;
   while (a < 5 || a > 55){
      printf("Unesite broj iz intervala [5,55] > ");
      scanf("%d",&a);
   }
   int arr[a], i;
   printf("Upisite cijele brojeve (%d) > ",a);
   for (i = 0; i < a; i++){
      scanf("%d ",&arr[i]);
   }
   printf("\nRecip: ");
   for (i = a-1; i >= 0; i--){
      printf("%.4f ",1.f/(float)arr[i]);
   }
   printf("\nUlaz: ");
   for(i = 0; i < a; i++){
      printf("%d ",arr[i]);
   }
   printf("\n");

}






