#include<stdio.h>
int suma(int a,int t){
	for(int i=0;i<5;i++){
	scanf("%d",&a);
	t+=a;
	}
	return t;
}
int main(){
	int a=0,t=0;
	printf("ingrese 5 resistencias: ");
	int res=suma(a,t);
	printf("el resultado es: %d\n",res);
}
