#include <stdio.h>
#include<string.h>

int main(){
    char c[]="Hello World Welcome to C language";
    int count=0,count_spaces=0;
    char* chr=c;
    while(*chr!='\0'){
        count++;
        chr++;
    }
    chr=c;
     while(*chr!='\0'){
        if(*chr==' '){
            count_spaces++;
        }
        chr++;
    }

    printf("Count including spaces = %d",count);
    printf("\nCount excluding spaces = %d",count-count_spaces);



    return 0;
}