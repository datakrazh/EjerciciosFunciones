#include <stdio.h>

int suma(int a, int b);

int main(){
    int num1, num2;
    printf("Introducir dos numeros a sumar\n");
    scanf("%d %d",&num1,&num2);
    int sum=suma(num1,num2);
    printf("La suma es: %d\n",sum);
    return 0;
}

int suma(int a, int b){
    int add=a+b;
    return add;
}
