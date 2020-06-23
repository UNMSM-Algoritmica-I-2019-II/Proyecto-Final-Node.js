
#include <stdio.h>
#include <stdlib.h>

void MostrarCuadrado(int n);
int main() {

	setbuf(stdout, NULL);

	int n;
	printf("Lado del cuadrado: ");
	scanf("%d", &n);

	MostrarCuadrado(n);

	return 0;
}

void MostrarCuadrado(int n){

	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}

}
