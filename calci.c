#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    char choice;
    printf("+.Addition\n");
    printf("-.Subtraction\n");
    printf("*.Multiplication\n");
    printf("/.Division\n");
    /*printf("\nEnter values to be added:");*/
    scanf("%d %d",&a,&b);
    /*printf("Enter operation:");*/
    scanf("  %c",&choice);
    switch(choice)
        {
            case '+':
            printf("\nsum is %d\n",a+b);
            break;
            case '-':
            printf("\ndifference is %d\n",a-b);
            break;
            case '*':
            printf("\nMultiplication is %d\n",a*b);
            break;
            case '/':
            if(b==0)
            printf("Error");
            else
            printf("\nQuotient is %d\n",a/b);
            break;
            default:
            printf("\nInvalid operation\n");
            break;
        
    }
    return 0;
    }
    
