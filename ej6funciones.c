#include<stdio.h>
int octaba(int a){
	int total;
	int b=8;
	total=a/b;
	return total;
}
int main(){
	int n1;
	printf("ingrese el numero: ");
	scanf("%d",&n1);
	int res= octaba(n1);
	printf("el resultado es: %d",res);
}
