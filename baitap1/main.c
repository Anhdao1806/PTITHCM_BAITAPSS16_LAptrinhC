#include<stdio.h>

int main(){
    int bien = 10 ;
    int *contro = &bien;
    printf ("Gia tri cua bien cach 1 :%d\n", bien);
    printf ("Dia chi cua bien cach 1 :%p\n", &bien);
    printf ("Gia tri cua bien cach 2 :%d\n", *contro);
    printf ("Dia chi cua bien cach 2 :%p\n", contro);
    return 0;
}
