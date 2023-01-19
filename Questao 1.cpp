#include<stdio.h>

void inverte( int vetor[], int n){
    int aux[n];
    int index;

    for(index = 0; index < n; index++){
        aux[index] = vetor[index];
    }
     for(index = 0; index < n; index++){
     vetor[index] = aux [n-1- index];
     }
}

int main(){
	int vetor[5] = {1,2,3,4,5};
	inverte (vetor, 5);
	int cont;
	for( cont = 0; cont < 5; cont++){
		printf("%d\t", vetor[cont]);
	}
}
