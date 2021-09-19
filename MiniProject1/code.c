#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

int strlen(char* str){
    // char* ptr = str;
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

void strSum(char* res, char* str1, char *str2){
    
}

void fibonacci(int n){
    char str1[100], str2[100], res[100];
    if(n<=1){
        sprintf(res, "%d", n);
        // return str1;
    }
    else{
        for(int i=2; i<=n; ++i){
            sprintf(str1, "%d", n-1);
            sprintf(str2, "%d", n-2);
            strSum(res, str1, str2);
        }
    }
    
}

int main(){
    // int n;
    // scanf("%d", &n);

    // int value = fibonacci(n);
    // printf("%dth fibonacci number is: %llu", n, value);
    
    return 0;
}