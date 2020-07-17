#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("entra el primer numero: ");
    scanf("%lf", &num1);
    printf("entra el operador: ");
    scanf(" %c", &op);
    printf("entra el segundo numero: ");
    scanf("%lf", &num2);

if (op == '+'){
    printf("%f", num1 + num2);
}else if (op == '-'){
printf("%f", num1 - num2);
}else if (op == '*'){
printf("%f", num1 * num2);
}else if (op == '/'){
printf("%f", num1 / num2);
}

    return 0;
}
