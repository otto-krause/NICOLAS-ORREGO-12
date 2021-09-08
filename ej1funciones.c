#include<stdio.h>
int numeros(int a,int b){
	printf("el valor es: %d",a);
	printf("\nel segundo valor es: %d",b);
}
int main(){
	int n1,n2;
	printf("ingrese un numero: ");
	scanf("%d",&n1);
	printf("ingrese otro numero: ");
	scanf("%d",&n2);
	
	numeros(n1,n2);
	
	
}
