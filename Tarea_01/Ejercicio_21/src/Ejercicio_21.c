#include <stdio.h>
#include <stdlib.h>

void llenarA(int a[3][3],int , int );
void llenarB(int b[3][3],int , int );
void xA(int a[3][3], int A[3][3], int , int );
void xB(int b[3][3], int B[3][3], int , int );
void sumaM(int a[3][3],int b[3][3], int s[3][3], int , int );
void mostrarM(int s[3][3], int, int );

int main() {

	setbuf(stdout, NULL);

	int a[3][3], b[3][3], s[3][3], A[3][3], B[3][3];
	int f,c;

	printf("Ingrese numero de filas: ");
	scanf("%d", &f);

	printf("Ingrese numero de columnas: ");
	scanf("%d", &c);

	llenarA(a, f, c);
	llenarB(b, f, c);

	xA(a, A, f, c);
	xB(b, B, f, c);

	sumaM(A, B, s, f, c);
	mostrarM(s, f, c);

	return 0;
}

void llenarA(int a[3][3], int f, int c){

	int i,j;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("Escriba la a[%d x %d] = ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
}

void llenarB(int b[3][3],int f, int c){

	int i,j;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("Escriba la b[%d x %d] = ",i+1,j+1);
			scanf("%d", &b[i][j]);
		}
}
}

void xA(int a[3][3], int A[3][3], int f, int c){

	int i,j;
	int x=2;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			A[i][j]= x*a[i][j];
		}
	}
}

void xB(int b[3][3],int B[3][3], int f, int c){

	int i,j;
	int y=3;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			B[i][j]= y*b[i][j];
		}
	}
}

void sumaM(int A[3][3],int B[3][3], int s[3][3], int f, int c){
	int i,j;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			s[i][j] = A[i][j] + B[i][j];
		}
	}
}

void mostrarM(int s[3][3], int f, int c){
	int i,j;
	printf("\n La matriz resultante es: ");
	for(i=0;i<f;i++){
		printf("\n");
		for(j=0;j<c;j++){
			printf("\t %d", s[i][j]);
		}
	}
}
