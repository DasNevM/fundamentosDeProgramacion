#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void buscapareja1 (int n, int *a, int *b);
void buscapareja2 (int n, int *a, int *b);
bool pitagoricos (int h, int c1, int c2);

int main() {
	int hipo, cmenor, cmayor;
	
	printf("Introduce hipo");
	scanf("%d", &hipo);
	while (hipo!=0) {
		buscapareja1 (hipo, cmenor, cmayor);
			if (pitagoricos(hipo, cmenor, cmayor)){
				printf("%d", hipo);
				printf("%d", cmayor);
				printf("%d", cmenor);		
			}
		printf("Introduce hipo");
		scanf("%d", &hipo);
	}	
}
	
	void buscapareja1 (int n, int *a, int *b){
	bool encontrado;
	*a=1;
	*b=1;
	encontrado=false;
	while (*a<n & !encontrado){
		buscapareja2 (n,*a,*b);
		encontrado=pitagoricos(n,*a,*b);
			if (!encontrado){
				*a=*a+1;
			}
		}
	}
	
	void buscapareja2 (int n, int *a, int *b){
	bool encontrado;
	*b=1;
	encontrado=false;
	while (*b<n & !encontrado)	{
		encontrado=pitagoricos(n,*a,*b);
			if (!encontrado){
				*b=*b+1;
			}
		}
	}
	
	bool pitagoricos (int h, int c1, int c2){
		return h*h==c1*c1 + c2*c2;	
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
