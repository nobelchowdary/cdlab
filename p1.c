#include <stdio.h>
#include <conio.h>
void main(){
    int input[10], ch, i, n;
    printf("Enter lenght of input: ");
    scanf("%d", &n);
    printf("Enter input");
    for(i=0; i<n; i++)
    scanf("%d", &input[i]);
    ch=0;
    i=0;
    do{
        switch (ch)
        {
        case 0:
            if(input[i]==0)
            ch=1;
            else
            ch=0;
            break;
        case 1:
            if(input[i]==0)
            ch=1;
            else
            ch=0;
            break;
        }
    i++;
    }while (i<n);
if (ch == 1)
    printf("Enter number is even binary number");
else
    printf("Input is not even binary number");
getch();
}

