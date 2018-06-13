#include <stdio.h>
int main()
{
	
   
   float S;
	S = 0;
	for(int i = 1; i<=100; i++)
		S+= (float) 1/i;
	

	printf("%.2f\n", S);
   
    return 0;
}

