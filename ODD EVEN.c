#include<stdio.h>
int main (){
int a, b, c, d, e, x, n, sum;

printf("Enter the start amount value : ");
scanf("%d", &a);
printf("Enter the end amount value : ");
scanf("%d", &x);

printf("This are even value \n");
for(n=a; n<=x; n++){
                   if(n % 2 == 0){
                                  printf("%d\n",n);
                                 }
                   }

printf("This are odd value \n");
for(n=a; n<=x; n++){
                   if(n % 2 == 1){
                                  printf("%d\n",n);
                                 }
                   }
return 0;
}


