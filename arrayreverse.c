#include <stdio.h>
#define ARRAY_SIZE 10
void reverse(int Array[ARRAY_SIZE]);

int main()
{
	int i, Array[ARRAY_SIZE];
	
	printf(" Enter elements into the Array :\n ");
	
	for (i=0; i<ARRAY_SIZE ; i++)
		
	{
		printf("Enter %2d elements : ",i);
		scanf("%d",&Array[i]);
		
	}
	printf("\n************************\n\n");
	
	reverse(Array);
	printf("************************\n\n");
	printf(" here is the new Array : \n ");
	
	
	for (i=0; i<ARRAY_SIZE ; i++)
	{	
		printf("%4d",Array[i]);
	}
	
	
	return 0;
}
//==========================
void reverse(int Array[ARRAY_SIZE]){
	int temp,i;
	for ( i=0; i<(ARRAY_SIZE/2) ; i++)
	{
		temp = Array[ARRAY_SIZE-1-i];
		Array[ARRAY_SIZE-1-i] = Array[i]; 
		Array[i] =temp;
	}
	
}
