#include <stdio.h>

int main()
{
    int age;
    float price;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter grade: ");
    scanf(" %c", &grade);
    
    printf("\nGrade = %c\n", grade);
    printf("Age = %d\n", age);
    printf("Price = %.2f\n", price);
    

    return 0;
}
