#include <stdio.h>

int main(){
    char c;
    int val;
    printf ("Enter a character of your choice (uppercase or lowercase)");
    scanf("%c",&c);
    val = ("%d",c);
    if (val>=65&&val<=90)
    {
        printf("%c is uppercase",c);
    }
    else if (val>=97&&val<=122)
    {
        printf("%c is lowercase",c);
    }
    else 
    {
        printf("ASCII value of %c is %d",c,c);
    }
    return 0;
}