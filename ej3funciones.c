#include<stdio.h>
int cv(int hombres,int mujeres){
	int total,resultado,resultado2;
	total=hombres+mujeres;
    resultado= total*hombres/100;
	
}
int cv2(int hombres,int mujeres){
	int total,resultado,resultado2;
	total=hombres+mujeres;
    resultado= total*mujeres/100; 
	
}
int main(){
	int a,b;
	printf("ingrese los cv de hombres: ");
	scanf("%d",&a);
	printf("\ningrese el cv de las mujeres: ");
    scanf("%d",&b);
    
    int res1=cv(a,b);
    int res2=cv2(a,b);
    printf("el porcentaje de hombres es: %d",res1);
    printf("\nel porcentaje de mujeres es: %d",res2);
    
    
}
