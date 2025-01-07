#include<stdio.h>

void inPhanTu ( int*mang , int kichthuoc){
    for (int i = 0 ; i < kichthuoc ; i++)
        printf("Phan tu thu %d : %d\n", i+1 , *(mang +i));
}
int main (){
    int mang[]={1,11,2008,45,435,3673,435,7547,234};
    int kichthuoc = sizeof(mang)/sizeof(mang[0]);
    inPhanTu(mang,kichthuoc);
    return 0;
}
