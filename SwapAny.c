#include <stdio.h>
#include <stdlib.h>

void swap_any(void * p_var1,void * p_var2,size_t size);

int main(int argc,char ** argv){
    
    int a=3,b=4;
    printf("Before Swap: a is %d, b is %d\n",a,b);
    swap_any(&a,&b,sizeof(a));
    printf("After Swap: a is %d, b is %d\n",a,b);
    return EXIT_SUCCESS;
}
//------------
void swap_any(void * p_var1,void * p_var2,size_t size){
    
    void * temp=malloc(size);
    memcpy(temp, p_var1, size);
    memcpy(p_var1, p_var2, size);
    memcpy(p_var2,temp, size);
    
}

