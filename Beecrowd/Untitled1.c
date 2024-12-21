#include <stdio.h>
int main (){
int a,b,c;
printf("Enter the value of a,b & c : ");
scanf("%d%d%d",&a,&b,&c);
if((a>b) &&(a>c))
    printf("a is the biggest number");
if ((b>c)&&(b>a))
 printf("b is the biggest number");
if((c>a)&&(c>b))
    printf("c is the biggest number");
 return 0;
}
