#include<stdio.h>
int main(){
   int n;
   printf("Upisite broj redaka/stupaca matrice > ");
   scanf("%d",&n);
   printf("Upisite %dx%d clanova > \n",n,n);
   int arr[n][n];
   int realmax;
   for(int i = 0; i < n; i++)
      for(int j = 0; j < n; j++){
         int currentmax;
         scanf("%d",&currentmax);
         if ((i == 0 || j == 0 || i == n-1 || j == n-1) && currentmax > realmax) realmax = currentmax;
      }
   printf("Najveca vrijednost u rubovima je: %d",realmax);
}
