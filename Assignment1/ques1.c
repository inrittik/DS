/*Question: Write a C compiler to check whether a given number is a 
valid floating point number or not. Write for all possible all test cases.*/

#include <stdio.h>

int strlen(char* str){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

int isValidFloat(char* num){
    for(int i=0; i<strlen(num); ++i){
        if(num[i]=='.'){
            if(num[i+1]=='\0'){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    char num[20];
    scanf("%[^\n]%*c", num);

    if(isValidFloat(num)==1){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }
    return 0;
}
