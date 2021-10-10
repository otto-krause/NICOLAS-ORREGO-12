#include<stdio.h>
float octaba(float a){
	float total;
	int b=8;
	total=a/b;
	return total;
}
int main(){
	float n1;
	printf("ingrese el numero: ");
	scanf("%d",&n1);
	float res= octaba(n1);
	printf("el resultado es: %f",res);
}
