#include <stdio.h>
#include <stdlib.h>

void InsertItemAtLast(int A[], int* n, int key){
    if(*n==0){
        printf("Underflow!\n");
    }
    else{
        (*n)++;
        A = realloc(A,(*n)*sizeof(int));
        A[*n-1]=key;
    }
}
void InsertItemAtFirst(int A[], int* n, int key){
    if(*n==0){
        printf("Underflow!\n");
    }
    else{
        (*n)++;
        A = realloc(A, (*n)*sizeof(int));
        for(int i=(*n)-1; i>0; i--){
            A[i]=A[i-1];
        }
        A[0]=key;
    }
}
void InsertItemAtIndex(int A[], int* n, int ind, int key){
    if(ind<0){
        printf("Underflow!\n");
    }
    else if(ind>=*n){
        printf("Overflow!\n");
    }
    else{
        (*n)++;
        A = realloc(A, (*n)*sizeof(int));
        for (int i = (*n)-1; i > ind; i--)
        {
            A[i]=A[i-1];
        }        
        A[ind]=key;
    }
}
void DeleteItemFromLast(int A[], int *n){
    if(*n==0){
        printf("Underflow!\n");
    }
    else{
        (*n)--;
    }
}
void DeleteItemFromLFirst(int A[], int *n){
    if(*n==0){
        printf("Underflow!\n");
    }
    else{
        for(int i=0; i<*n-1; ++i){
            A[i]=A[i+1];
        }
        (*n)--;
    }
}
void DeleteItemAtIndex(int A[], int *n, int ind){
    if(ind<0){
        printf("Underflow!\n");
    }
    else if(ind>=*n){
        printf("Overflow!\n");
    }
    else
        for (int i = ind; i < *n-1; i++)
        {
            A[i]=A[i+1];
        }(*n)--;        
}
int main(){
    int n, key;
    // scanf("%d", &n);
    n=6;
    int *A = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; ++i){
        scanf("%d", &A[i]);
    }
    DeleteItemAtIndex(A, &n, 4);

    for(int i=0; i<n; ++i){
        printf("%d ", A[i]);
    }
    return 0;
}