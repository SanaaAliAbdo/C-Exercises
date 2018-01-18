#include <stdio.h>

void bitup(int *num,int bit);
void bits_up(int *num,int frombit,int tobit);

int main(){
    int num=1;   
    bits_up(&num,1,2);
    printf("%d\n",num);   
}
//=================
//help function
void bitup(int * num,int bit){
    (*num) |= (1<<bit);
}
//===============
void bits_up(int *num,int frombit,int tobit){
    int i;
    for(i=frombit;i<=tobit;i++)
        bitup(num,i);
}


