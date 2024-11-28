#include <stdio.h>

int main(){
    int count=0;
    char ch[]="Welcome to world of c language";
    char* chr=ch;
    while(*chr!='\0'){
        if(*chr==' '){
            count++;
        }
        chr++;
    }
    printf("The number of words in given string is %d ",count+1);

    return 0;
}