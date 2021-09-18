#include<stdio.h>
int one(int a){
  printf("ingrese un numero: ");
  scanf("%d",&a);
  return a;
}
int two(int b){
  printf("ingrese el segundo numero: ");
  scanf("%d",&b);
  return b;
}
int main(){
  int a=0,b=0;
  a=one(a);
  b=two(b);

 printf("el primero es: %d",a);
 printf("\nel segundo es: %d\n",b);
}
