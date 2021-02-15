#include "trigono.h"
#include "Matric_operation.h"
#include "basic.h"
unsigned int calculator_operation = 0;

int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1.\basic operation\n2.matrix operation \n3. trigonometric operations\n4.Conversion \n5.exit\n ");
    printf("\n\tEnter your choice\n");
    scanf("%d", &calculator_operation);
        switch(calculator_operation)
    {
        case 1:
           basic_operations();
            break;
        case 2:
            Matrix_operations();
            break;
        case 3:
            Trigonometric_operation();
            break;
        case 4:
              Conversion();
            break;
        case 5: exit(0);
                  break;
        
    }
}

