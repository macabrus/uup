#include<stdio.h>
int main(){
   int a;
   printf("Upisite prirodni broj x iz intervala [5,20] > ");
   scanf("%d",&a);
   if(a < 5 || a > 20){
      printf("Neispravan broj!");
   }
   else for(float i = 0.0; i <= (float)(a+1)/10; i=i+0.1){
      printf(" %.2f",i);
   }
}
