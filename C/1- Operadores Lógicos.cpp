#include <stdio.h>
 
int opOr(int a, int b); 
int opAnd(int a, int b);

 
int main() {
 	int a, b;
 	
 	printf("Digite dois números A e B: \n");
	scanf("%d%d",&a,&b);
 	 printf("%d", opAnd(a,b));
	 printf("%d", opOr(a,b));
 	
 	
 	
    return 0;
   
}


int opAnd(int a, int b) {
	int r = a & b, i = 0, j, q, vet[32];
	
	do {
		q = r / 2;
		vet[i] = r % 2;
		r = q;
		i++;
	} while(q != 1 && q > 0);
		vet[i] = r;
		printf("AND: ");
	for(j = i; j > 0; j--) {
		printf("%d", vet[j]);
	}	
	
	
	
}


int opOr(int a, int b) {
	int r = a | b,q, i = 0, vet[32], j;
	
		do {
			q = r / 2;
			vet[i] = r % 2;
			r = q;
			i++;
			} while (q != 1 && q > 0);
				vet[i] = r; 
				printf("\nOR: ");
			for (j = i; j >= 0; j--) { 
				printf("%d", vet[j]);
	}
	
	return 0;
}


int OpXor(int a, int b) {
	int r = a ^ b, q, vet[32], j;
	
	do {
		
	}
	
	
}


