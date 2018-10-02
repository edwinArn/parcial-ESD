#include <stdio.h>

int main (){
	int filas,columnas,fila,columna,pcol=0,pfila=0;
	
	printf("ingrese el tamaño de las filas\n");
	scanf("%d",&filas);
	printf("ingrese el tamaño de las filas\n");
	scanf("%d",&columnas);
	int matriz[filas][columnas];
	
	//ingresa la matriz
	for(fila=0;fila<filas;fila++){
		for(columna=0;columna<columnas;columna++){
			printf("ingrese el valor en la  casilla %dx%d\n",fila,columna);
			scanf("%d",&matriz[fila][columna]);
		}
	}
	
	//muestra la matriz
	for(fila=0;fila<filas;fila++){
		for(columna=0;columna<columnas;columna++){
			printf("\t%d",matriz[fila][columna]);
		}
		printf("\n");
	}
	
	
	//busca le punto silla
	for(fila=0;fila<filas;fila++){
		pcol=0;pfila=fila;
		for(columna=0;columna<columnas;columna++){ 
			if(matriz[fila][columna]<matriz[fila][pcol]){
				pcol=columna; //el punto de lcolumna donde el valor es el menor en esa fila
			}
		}
	
		for(int fil=0;fil<filas;fil++){
			if(matriz[fil][pcol]>matriz[fila][pcol]){
				pfila=fil;//el punto de la fila donde el valor es mayor en acolumnadonde se encuentra el punto de lacolumna
			}
		}
		if (pfila==fila){ //si el punto fila es  == a fila ese es el punto silla
			printf("%dx%d  =  %d\n",pcol,pfila,matriz[pfila][pcol]);
		}
	}
			
	return 0;
}
