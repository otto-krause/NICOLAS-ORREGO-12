#include<stdio.h>
int regreso(int a, int b){
if(a>b){
  return 1;
 }
 else if(a<b){
   return 2;
 }
 else{
   return 3;
 }
}
int main(){
  int n1,n2;
  printf("ingrese dos numeros: ");
  scanf("%d %d",&n1,&n2);

  int res=regreso(n1,n2);

  if(res==1){
    printf("el primer numero es mayor al segundo\n");
  }
  else if(res==2){
    printf("el segundo numero es mayor al primero\n");
  }
  else if(res==3){
    printf("los numeros son iguales\n");
  }
}
