#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int matriz1 [3][3];
	int matriz2 [3][3];
	int vector[18];
	int filas=0;
	int columnas=0;
	int filas2=0;
	int columnas2=0;
	int auxiliar=0;
	int contador =0;
	
	
	for(filas=0; filas<3;filas++){
		for(columnas=0; columnas<3;columnas++){
			printf("ingrese el primer numero de matriz 1 [");
			printf("%d", filas);
			printf(" ]");
			printf(" [");
			printf("%d", columnas);
			printf(" ]\n");
			scanf("%d",&matriz1[filas][columnas]);
			
			}
		}
		
	for(filas=0; filas<3;filas++){
		for(columnas=0; columnas<3;columnas++){
			printf("ingrese el primer numero de matriz 2 [");
		
			printf("%d", filas);
			printf(" ]");
			printf(" [");
			printf("%d", columnas);
			printf(" ]\n");
			scanf("%d",&matriz2[filas][columnas]);
			
			}
		
		}
	for(filas=0; filas<3;filas++){
		for(columnas=0; columnas<3;columnas++){
			for(filas2=0; filas2<3;filas2++){
				for(columnas2=0; columnas2<3;columnas2++){
				
				if(matriz1[filas][columnas]<matriz1[filas2][columnas2]){
					auxiliar = matriz1[filas][columnas];
					matriz1[filas][columnas] = matriz1[filas2][columnas2];
					matriz1[filas2][columnas2] = auxiliar;
					
					
					}
				
			}
			
		}		
				
			}
			
		}	
	
		for(filas=0; filas<3;filas++){
		for(columnas=0; columnas<3;columnas++){
			for(filas2=0; filas2<3;filas2++){
				for(columnas2=0; columnas2<3;columnas2++){
				
				if(matriz2[filas][columnas]<matriz2[filas2][columnas2]){
					auxiliar = matriz2[filas][columnas];
					matriz2[filas][columnas] = matriz1[filas2][columnas2];
					matriz2[filas2][columnas2] = auxiliar;
					
					
					}
				
			}
			
		}		
				
			}
			
		}	
	
	
	
	


	contador=0;
	for(filas=0; filas<3;filas++){
		for(columnas=0; columnas<3;columnas++){
			vector[contador]= matriz1[filas][columnas];
			
			
			}
		
		}
	
	for(filas=0; filas<3;filas++){
		for(columnas=0; columnas<3;columnas++){
			vector[contador]= matriz2[filas][columnas];
			
			
			}
		
		}
		
		
	for(filas=0; filas<18;filas++){
		for(columnas=0; columnas<18;columnas++){
			if(vector[filas] <vector[columnas]){
					auxiliar = vector[filas];
					vector[filas]= vector[columnas];
					vector[columnas] = auxiliar;
					
					}
			}
			
			}
	
	return 0;
	}
