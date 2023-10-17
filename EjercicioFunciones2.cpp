#include <stdio.h>

float perimetroFigura(float numero)
{
    float perimetro;
    perimetro = 4 * numero;
    return perimetro;
}

float areaFigura(float numero)
{
	float area;
    area=numero*numero;
    return area;
}

int main() {
    float lado;
    printf("Lado de un cuadrado: ");
    scanf("%f", &lado);
    
    float perimetro=perimetroFigura(lado);
    float area=areaFigura(lado);
    
    printf("Perimetro: %f\n", perimetro);
    printf("Area: %f\n", area);
    
    return 0;
}

