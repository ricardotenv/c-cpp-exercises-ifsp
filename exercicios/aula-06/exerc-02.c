#include <stdio.h>

int worked_days;

int main()
{
    
    printf("Informe os dias trabalhados: > ");
    scanf("%d", &worked_days);
    
    int total_value_of_days_worked = worked_days * 20;
    float eight_percent_of_salary = ((float)total_value_of_days_worked / 100) * 8;
    float total_value_with_discount = total_value_of_days_worked - eight_percent_of_salary;
    
    printf("Salário líquido: R$%.2f", total_value_with_discount);
    
    return 0;
}