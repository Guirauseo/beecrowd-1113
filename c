#include <stdio.h>
 
 int main() {
 int n, i=0, termo1=0, termo2=1, atual;
 scanf("%d",&n);
 if(n<=0 && n>=46)
{
 printf("digite um numero de 1 a 45\n");
 return 1;
}
printf("%d %d",termo1,termo2);
 while(i<n-2)
 {
 
 atual = termo1 + termo2;
 printf(" %d", atual);
 termo1 = termo2;
 termo2 = atual;
 i++;
 }
 
 printf("\n");
    return 0;
}
