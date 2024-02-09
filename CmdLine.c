#include<stdio.h>
#include<stdlib.h>


int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf ( "Usage: %s <number1> <number2>",argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    char CH;

    printf ("\n\t A. ADDITION");
    printf ( "\n\t B. SUBTRACTION");
    printf ( "\n\t C. DIVISION");
    printf ( "\n\t D. MULTIPLICATION");

    printf ( "\n\t\t ENTER YOUR CHOICE : ");
    scanf ("%c", &CH);

    switch (CH) {
        case 'A':
            printf ( "n\t\t ADDITION IS : %d", a + b);
            break;
        case 'B':
            printf ( "\n\t\t SUBTRACTION IS : %d", a - b);
            break;
        case 'C':
            printf ( "\n\t\t DIVISION IS : %d", a / b);
            break;
        case 'D':
            printf ( "\n\t\t MULTIPLICATION IS : %d", a * b);
            break;
        default:
            printf ( "\n\t\t YOU ENTERED A WRONG CHOICE !");
            break;
    } 
    printf ( "\n\t\t YOU HAVE SUCCESSFULLY EXECUTED SWITCH CASE AND CMD LINE ARGUMENTS");
    return 0;
}
