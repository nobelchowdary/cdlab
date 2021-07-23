#include <stdio.h>

void main(){
    int i=0, n, input[10];
    printf("Enter length of string");
    scanf("%d", &n);
    printf("Enter string");
    for ( i = 0; i < n; i++)
        scanf("%d", &input[i]);
    int st=0;
    i=0;
    do
    {
        switch (st)
        {
        case 0:
            if (input[i] == 0)
            st = 0;
            else
            st = 1;
            break;
        case 1:
            if (input[i] == 0)
            st = 2;
            else
            st = 3;
            break;
        case 2:
            if (input[i] == 0)
            st = 4;
            else
            st = 0;
            break;
        case 3:
            if (input[i] == 0)
            st = 1;
            else
            st = 2;
            break;
        case 4:
            if (input[i] == 0)
            st = 3;
            else
            st = 4;
            break;
        }
        i++;
    }while(i<n);
    if (st == 0)
        printf("Input Accepted");
    else
        printf("Input not accepted");
}