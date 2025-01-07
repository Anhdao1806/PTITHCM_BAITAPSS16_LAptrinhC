#include<stdio.h>

int tinhTong (int*a , int *b){
    return *a + *b;
}
int main (){
    int a = 10 , b = 100 ;
    int tong = tinhTong(&a,&b);
    printf ("Tong cua so %d va %d la %d\n",a,b,tong);
    return 0;
}

