#include<stdio.h>

int main(){
	int vector [10], i, j ,aux,k;
	for(i=0;i<=9;i++){
		scanf("%d", &vector[i]);
	}
	for (i=0;i<=9;i++){
	for (j=0;j<=9;j++){
		if (vector[j]<vector[j+1]){
			aux=vector[j];
			vector[j]=vector[j+1];
			vector[j+1]=aux;
		}
	}
	}
	for(k=1;k<=10;k++){
		printf("%d ", vector[k]);
	}
	return(0);
}
