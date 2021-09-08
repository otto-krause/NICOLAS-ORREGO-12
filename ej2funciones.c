#include<stdio.h>
int perimetro(int a, int b){
	int p;
	p=2*a+2*b;
}
int area(int a, int b){
	int ar; 
	ar=a*b;
}
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	
    int ar2= area(a,b);
    int p2= perimetro(a,b);
	
printf("el area es: %d",ar2);
printf("\nel perimetro es: %d",p2);
}
