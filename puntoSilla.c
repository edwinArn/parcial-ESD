#include <stdio.h>

int main (){
	int filas,columnas,fila,columna,pcol=0,pfila=0,pfila2=0;
	
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
	
	//busca el menor de la fila
	
	for(fila=0;fila<filas;fila++){
		for(columna=0;columna<columnas;columna++){
			if(matriz[fila][columna]<matriz[pfila][pcol]){
				pcol=columna;
				pfila=fila;
				printf("%dx%d  =  %d\n",pfila,pcol,matriz[pfila][pcol]);
			}
		}
	
		for(int fil=0;fil<filas;fil++){
			if(matriz[fil][pcol]>matriz[pfila][pcol]){
				pfila2=fila;
				printf("%dx%d  =  %d\n",pfila,pcol,matriz[pfila][pcol]);
			}
		}
		if (pfila==pfila2){
			printf("%dx%d  =  %d\n",pfila,pcol,matriz[pfila][pcol]);
		}
		
	}
	
	
	
	
			
		/*	for(columna=0;columna<columnas;columna++){
				if (matriz[0][columna]<punto){
					punto=matriz[fila][columna];
					pcol=columna;
				}
			}
			
			punt2=matriz[cont][pcol];
		
			for(fila=0;fila<filas;fila++){
				if (matriz[fila][pcol]>punto){
					punt2=matriz[fila][pcol];	
				}
			}
		
			if(punto==punt2){
				printf("punto de silla es : \n");
				printf("%dx%d  =  %d ",cont,pcol,punto);
			}*/
			
	return 0;
}
