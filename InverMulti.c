#include<stdio.h> 
#include <stdlib.h>

int main(int argc, char** args){
	if(argc < 4){
		printf("Se requieren mas argumentos\n");
		return -1;
	}
	int d = 1,b = atoi(args[1]) ,n = atoi(args[2]), repeticiones = atoi(args[3]);
	int t, l;
	int *arr = (int*) calloc(n, sizeof(int));
	while(d<n){
		t = (b*d)%n;
		if(t == 1){
			arr[d] = 1;
		}
		d++;				
	}
	for(int i = 0; i<n;i++)
		if(arr[i]){
			printf("D= %d\n",i);
			for(int j= 1; j<repeticiones;j++)
				printf("D= %d\n",(j*n)+i);
		}
	return 0;
}
