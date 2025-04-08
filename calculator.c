#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter an operator (+, -, *, /, ^): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &b);

    switch(op) {
    case '+': printf("Result: %.2lf\n", a + b); break;
    case '-': printf("Result: %.2lf\n", a - b); break;
    case '*': printf("Result: %.2lf\n", a * b); break;
    case '/': 
        if (b != 0) printf("Result: %.2lf\n", a / b);
        else printf("Cannot divide by zero.\n");
        break;
    case '^': printf("Result: %.2lf\n", pow(a, b)); break;
    case '%': 
        if ((int)b != 0) 
            printf("Result: %d\n", (int)a % (int)b); 
        else 
            printf("Cannot modulo by zero.\n"); 
        break;
    default: printf("Invalid operator\n");
}


    return 0;
}

