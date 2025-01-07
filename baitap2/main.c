#include<stdio.h>

int doiGiaTri( int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp ;
    return 1;
}
int main (){
    int a = 100 , b = 1000;
    doiGiaTri(&a , &b);
    printf ("Gia tri sau khi doi:\na = %d \nb = %d\n",a,b);
    return 0;
    
}
