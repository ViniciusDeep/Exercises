 #include <stdio.h>
 
   int main() {
 
	int n1,n2,n3,n4,n5;
	int cont;
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	
	cont = 0;

	if (n1 % 2 == 0) {
		cont ++;
		
	}
	
	if (n2 %2 == 0) {
		cont ++;
		
	}
	
	if (n3 %2 == 0) {
		cont ++;
		
	}
	
	if (n4 %2 == 0) {
		cont ++;
		
	}
	
	if (n5 %2 == 0) {
		cont ++;
		
	}
	
	printf("%d valores pares\n",cont);
	
	return 0;
 }
