#include <stdio.h>
#include <stdlib.h>

void llenarA(int a[10][10],int , int );
void llenarB(int b[10][10],int , int );
void mostrarA(int (*)[10],int , int );
void mostrarB(int (*)[10],int , int );

int main() {

	setbuf(stdout, NULL);

	int a[10][10], b[10][10] ;
	int f,c;

	printf("Ingrese numero de filas: ");
	scanf("%d", &f);

	printf("Ingrese numero de columnas: ");
	scanf("%d", &c);

	llenarA(a, f, c);
	llenarB(b, f, c);

	mostrarA(a, f, c);
	mostrarB(b, f, c);


	return 0;
}

void llenarA(int a[10][10], int f, int c){

	int i,j;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("Escriba la a[%d x %d] = ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
}

void llenarB(int b[10][10],int f, int c){

	int i,j;

	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("Escriba la b[%d x %d] = ",i+1,j+1);
			scanf("%d", &b[i][j]);
		}
}
}

void mostrarA(int (*a)[10], int f, int c){

	int i,j;

	printf("\n Los elementos de la matriz A son: ");
	for(i=0;i<f;i++){

		printf("\n");
		for(j=0;j<c;j++){
			printf("\t %d",*(*(a+i)+j));
		}
}
}

void mostrarB(int (*b)[10], int f, int c){

	int i,j;

	printf("\n Los elementos de la matriz B son: ");
	for(i=0;i<f;i++){

		printf("\n");
		for(j=0;j<c;j++){
			printf("\t %d",*(*(b+i)+j));
		}
}
}
