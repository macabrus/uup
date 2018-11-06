#include<stdio.h>
#include<math.h>

int main(){
   int m,n;
   printf("Unesite m i n > ");
   scanf("%d %d",&m,&n);
   int arr[m][n];
   printf("Upisite %d x %d clanova matrice > \n\n",m,n);
   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
         scanf("%d",&arr[i][j]);
      }
   }
   printf("\nRezultat:\n");
   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
         printf("%8.2f ",sqrt((float)arr[i][j]));
      }
      printf("\n");
   }
}


