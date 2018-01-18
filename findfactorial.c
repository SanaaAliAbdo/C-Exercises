# include <stdio.h>

//declare a function that find the factorial of the number
int factorial (int num);

//============================
int main()
{
    	int Num1, tmp;

    	printf("ENTER the Nuber its factorial you want : ");
    	scanf("%d",&Num1);
    	tmp=Num1;
    	printf(" **************************************** \n ");
    	printf(" The factorial of %d is %d \n",tmp,factorial(Num1));
   
  
	return 0;
    
}
//==========================
int factorial(int num){
	int  retfactorial=1;
	while (num>0)
    	{
        	retfactorial *= num;
        	num = num - 1;
    	}
    	return retfactorial;
  
}
