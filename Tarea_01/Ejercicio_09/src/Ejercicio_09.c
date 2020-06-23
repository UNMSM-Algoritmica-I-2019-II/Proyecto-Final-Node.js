#include <stdio.h>
#include <stdlib.h>

int main() {

	setbuf(stdout, NULL);

	int m[10][10];
	int r;
	int i,j;
	int prod=1;


	printf("Ingrese numero de filas y columnas: ");
	scanf("%d", &r);

	for(i=0;i<r;i++){
		for(j=0;j<r;j++){

			printf("Escriba la m[%d x %d] = ",i+1,j+1);
			scanf("%d", &m[i][j]);
			}
	}

	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			if(i == j-1){
				prod = m[i][j]*prod;
			}
		}
	}

	printf("El producto es: %d ", prod);

	return 0;
}
