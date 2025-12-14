#include<stdio.h>
#include<math.h>

int main(){
    int op, n3, n4;
    float n1, n2;
     
    do{
        printf("\n***************************************\n\nA Simple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n\n");

        printf("\nWhat Operation are we doing?\nChoose(1-7): ");
        scanf("%d",&op);

        switch(op){
            case 1: 
                printf("Enter first number: ");
                scanf("%f", &n1);
                printf("Enter second number: ");
                scanf("%f", &n2);

                // printf("**SUM**: %.2f\n", n1+n2);
                printf("\033[1;32m**SUM**: %.2f\033[0m\n", n1+n2); // Green text    
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%f", &n1);
                printf("Enter second number: ");
                scanf("%f", &n2);

                printf("\033[1;32m**DIFFERENCE**: %.2f\033[0m\n", n1-n2);
                    break;

            case 3:
                printf("Enter first number: ");
                scanf("%f", &n1);
                printf("Enter second number: ");
                scanf("%f", &n2);

                printf("\033[1;32m**PRODUCT**: %.2f\033[0m\n", n1*n2);
                    break;

            case 4:
                printf("Enter numerator/dividend: ");
                scanf("%f", &n1);
                printf("Enter denominator/divisor: ");
                scanf("%f", &n2);

                if(n2==0){
                    printf("Invalid argument for Division.\n");
                }
                else{
                printf("\033[1;32m**QUOTIENT**: %.2f\033[0m\n", n1/n2);
                }
                    break;

            case 5:
                printf("Enter dividend: ");
                scanf("%d", &n3);
                printf("Enter divisor: ");
                scanf("%d", &n4);

                if(n4==0){
                    printf("Invalid argument for Modulus.\n");
                }
                else{
                    printf("\033[1;32m**REMAINDER**: %d\033[0m\n", n3 % n4);
                }
                    break;

            case 6:
                printf("Enter base number: ");
                scanf("%f", &n1);
                printf("Enter power: ");
                scanf("%f", &n2);

                printf("\033[1;32m**ANSWER**: %.2f\033[0m\n", pow(n1,n2));
                    break;

            case 7: 
                printf("Exiting...\n\n\n");
                    break;

            default:
                printf("Enter Valid Operation!!\n\n"); 
                    break;

        }
    }while(op!=7);

    printf("\nPeace out...\n");
    printf("Developed by: David_K_Singh.\n\n"); 
    return 0;
}