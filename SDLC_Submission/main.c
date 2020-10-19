#include <calculator_operations.h>
#include <math.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, SQUARE, POWER, PRIME, GREATER, SMALLER, FACTORIAL, MODULUS, SQUAREROOT, SIN, COS, TAN, CMTOM, MTOCM, MTOKM, KMTOM, INCHTOCM, CMTOINCH, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
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
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square\n6. Power\n7. Prime\n8. Greater\n.9 Smaller\n10. Factorial\n11. Modulus\n12. SquareRoot\n13. Sin\n14. Cos\n15. Tan\n16. CMTOM\n17. MTOCM\n18. MTOKM\n19. KMTOM\n20. INCHTOCM\n21. CMTOINCH\n22. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
         case SQUARE:
            printf("\n\t Square of %d is %d \nEnter to continue", 
            calculator_operand1, 
            square(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
         case POWER:
            printf("\n\t%d ^ %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            power(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
         case PRIME:
            printf("\n\t %d is a prime number if %d is 1 \nEnter to continue", 
            calculator_operand1, 
            prime(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
         case GREATER:
            printf("\n\t Greater of %d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            greater(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case SMALLER:
            printf("\n\t SMALLER of %d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            smaller(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case FACTORIAL:
            printf("\n\t the factorial of %d is %d  \nEnter to continue", 
            calculator_operand1, 
            factorial(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case MODULUS:
            printf("\n\t Modulus of %d and %d is %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            modulus(calculator_operand1, calculator_operand2));
          case SQUAREROOT:
            printf("\n\t square root of %d is %d  \nEnter to continue", 
            calculator_operand1, 
            squareroot(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case SIN:
            printf("\n\t sine of %d is %f  \nEnter to continue", 
            calculator_operand1, 
            sinvalue(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case COS:
            printf("\n\t cos of %d is  %f  \nEnter to continue", 
            calculator_operand1, 
            cosvalue(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case TAN:
            printf("\n\t tan of %d is %f  \nEnter to continue", 
            calculator_operand1, 
            tanvalue(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case MTOCM:
            printf("\n\t %f in cm is %f  \nEnter to continue", 
            calculator_operand1, 
            metertocenti(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case CMTOM:
            printf("\n\t %f in m is %f  \nEnter to continue", 
            calculator_operand1, 
            centitometer(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case MTOKM:
            printf("\n\t %f in km is %f  \nEnter to continue", 
            calculator_operand1, 
            metertokm(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case KMTOM:
            printf("\n\t %f in m is %f  \nEnter to continue", 
            calculator_operand1, 
            kmtometer(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case INCHTOCM:
            printf("\n\t %f in cm is %f  \nEnter to continue", 
            calculator_operand1, 
            inchtocenti(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case CMTOINCH:
            printf("\n\t %f in inch is %f  \nEnter to continue", 
            calculator_operand1, 
            centitoinch(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case 22:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
