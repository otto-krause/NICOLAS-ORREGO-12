#include<stdio.h>
int total(int fuerza, int superficie){
	int presion;
	presion=fuerza/superficie;
}
int main(){
	int a,b;
	printf("ingrese la fuerza: ");
	scanf("%d",&a);
	printf("ingrese la superficie: ");
	scanf("%d",&b);
	
	int res=total(a,b);
	printf("el resultado es: %d",res);
}
