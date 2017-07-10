#include <stdio.h>
#define PI 3.1416  // CONSTANTE PI

float area_circulo(float r); // prototipo de funcion area circulo
float longitud_circun(float r); //  prototipo de  funcion  longitud
float volumen_esfera(float r);

void main(){

float radio , area, longitud , vol;

printf("\n Introduza el radio del circulo: ");
scanf("%f",&radio);

area = area_circulo(radio); //Llamada a funcion 

printf("\nEl area del circulo  es: %.3f ",area);

longitud = longitud_circun(radio); //Llamada a funcion
printf("\nLa longitud de la circunferencia es: %.3f ",longitud);


vol =  volumen_esfera(radio);
printf("\nEl volumen de la esfera es: %.3f",vol);




}


float  area_circulo(float r)
{
  float area = PI * r * r;
  return(area);
}


float longitud_circun(float r){

float longitud =  2 * PI  * r;
return(longitud);
}


float volumen_esfera(float r){

float volumen  = (4*PI*r*r*r)/3;
return(volumen);
}


