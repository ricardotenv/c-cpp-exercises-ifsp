#include <stdio.h>

char name[100];
int salary;
float twenty_percent;
float result;

int main()
{
 printf("Digite o seu nome: > ");
    scanf("%100[^\n]s", name);
    printf("Digite seu salário: > ");
    scanf("%d", &salary);
    twenty_percent = (salary/100) * 20;
    result = salary + twenty_percent;
    
    printf("Seu salário reajustado é de: \n");
    printf("R$%.2f", result);

    return 0;
}