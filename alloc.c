#include<stdio.h>
#include<stdlib.h>

struct twoints{
   int a;
   int b;
};

int main(){
   struct twoints* p = (struct twoints*) malloc(100*sizeof(struct twoints));
   (*(p+2)).a = 6;
   free(p);
   int a;
   a = 5;
   printf("%d",a);
}
