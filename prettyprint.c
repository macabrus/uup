#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void printarr(char* c, int size){
   for(int i = size; i >= 0; i--){
      printf("%c ",*c);
   }
}

void setarr(char* c, int size, char val){
   for(int i = 0; i < size; i++){
      *c = val;
   }
}

int main(){
   char* s = (char*) malloc(100*sizeof(char));
   setarr(s,100,'0');
   printarr(s,100);
   scanf("%s",&(s[0]));
   printarr(s,100);
   int total;
   for(int i = sizeof(s)/sizeof(char)-1; i >= 0; i--){
      total+= pow(2,(s[i]-'0'));
   }
   printf("%d",total);
   free(s);
}
