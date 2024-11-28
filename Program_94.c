#include <stdio.h>
#include <string.h>

int main(){
    char ch[]="SVNITJAVA";
    strrev(ch);
    char* chr=ch;
    int len=sizeof(ch);
    while(*chr!='\0'){
        printf("%c\t",*chr);
        chr++;
    }
    return 0;
}