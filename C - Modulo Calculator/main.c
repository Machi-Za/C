#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,vo=1;
    char op;
    printf("==========================\n");
    printf("Operator = + , - , * , / \n");
    printf("Example  = 5+2 [enter]\n");
    printf("==========================\n");
    printf("Type Here : ");
    scanf("%i %c %i",&a,&op,&b);

    switch (op)
    {
        case '+':c = a + b;break;
        case '-':c = a - b;break;
        case '*':c = a * b;break;
        case '/':c = a / b;d=a%b;break;
        default:vo=0;
    }
    if (vo)
    {
        if(op=='/')
        {
            printf("%i %c %i = %i sisa %i\n",a,op,b,c,d);
        }
        else
        {
            printf("%i %c %i = %i\n",a,op,b,c);
        }
    }
    else
    {
        printf("Syntax Error!!!\n");
    }
    printf("==========================\n");
}
