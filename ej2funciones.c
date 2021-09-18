#include<stdio.h>
int perimetro(int a,int b){
  int p;
  p=2*a+2*b;
  return p;
}
int area(int a,int b){
  int ar;
  ar=a*b;
  return ar;
}
int main(){
 int a,b;
 scanf("%d",&a);
 scanf("%d",&b);

 int res1=perimetro(a,b);
 int res2=area(a,b);

 printf("el perimetro es: %d\n",res1);
 printf("el area es: %d\n",res2);
}
