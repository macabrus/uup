#include<stdio.h>
int main(){
   char recenica[200];
   printf("Upisite znakovni niz > ");
   fgets(recenica,200,stdin);
   int samoglasnici[] = {0,0,0,0,0};
   int j = 0;
   while(recenica[j]!='\0'){
      //printf("%c\n",recenica[j]);
      if(recenica[j] == 'a' || recenica[j] == 'A'){samoglasnici[0]++;}
      if(recenica[j] == 'e' || recenica[j] == 'E'){samoglasnici[1]++;}
      if(recenica[j] == 'i' || recenica[j] == 'I'){samoglasnici[2]++;}
      if(recenica[j] == 'o' || recenica[j] == 'O'){samoglasnici[3]++;}
      if(recenica[j] == 'u' || recenica[j] == 'U'){samoglasnici[4]++;}
      j++;
   }
   int min = samoglasnici[0];
   for(int i = 0; i < 5; i++){
      if(samoglasnici[i] < min) min = samoglasnici[i];
   }
   char sg[] = {'A','E','I','O','U'};
   for(int i = 0; i < 5; i++){
      if(samoglasnici[i] == min) printf("**");
      printf("Samoglasnik %c se pojavio %d puta.",sg[i],samoglasnici[i]);
      if(samoglasnici[i] == min) printf("**\n");
      else printf("\n");


}}
