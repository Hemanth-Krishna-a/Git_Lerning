#include <stdio.h>

void printData(const char *c){
    printf("%s\n",c);
}

int getDat(){
    printf("Enter the data ; ");
    int a;
    scanf("%d",&a);
    return a;
}

struct Node{
    int a;
    int b;
    int c;
};