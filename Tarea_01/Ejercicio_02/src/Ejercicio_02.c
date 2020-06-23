#include <stdio.h>
#include <stdlib.h>

int main() {

	setbuf(stdout, NULL);
	int i,j;
	int v[100];


	for(i=0;i<100;i++){
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}

	for(i=0;i<100;i++){
		for(j=i+1;j<100;j++){
			if(v[i]+ v[j] == 50){
				printf("\n %d y %d", v[i], v[j]);
			}
		}
	}

	return 0;
}
