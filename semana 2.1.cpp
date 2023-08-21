#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	//para almacenar las filas y columnas
	int columna=5;
	int fila=5;
	
    //declarar la matriz
	int mat[columna][fila];
	
	//solicitar datos
	for(int i=0;i<columna;i++){
		for(int j=0;j<fila;j++){
			cout<<"ingrese un numero para almacenar en la posicion "<<i+1<<","<<j+1<<" :";
			cin>>mat[i][j];
		}
	}
	
	//suma de filas
	int maxsuma=0, filamaxima=0;
	
	for(int k=0;k<columna;k++){
		int sumafila=0;
		
	    for(int l=0;l<fila;l++){
			sumafila=sumafila+mat[k][l];
		}
		if(sumafila>maxsuma){
			maxsuma=sumafila;
			filamaxima=k;
		}
	}
	
	//imprimir
	cout<<"\nImprimiendo matriz...\n";
	for(int i=0;i<columna;i++){
		for(int j=0;j<fila;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n"; //salto de linea para las filas
	}
	
	cout<<"la fila "<<filamaxima+1<<" tiene una suma de "<<maxsuma;
	
	
	//0, positivos y negativos
	int ceros=0, positivos=0, negativos=0;
	
	for(int m=0;m<columna;m++){
		for(int n=0;n<fila;n++){
			if(mat[m][n]==0){
				ceros++;
				
			} else if(mat[m][n]>0){
				positivos++;
					
			} else{
				negativos++;
			}
		}
	}
	
	cout<<" "<<endl;
	cout<<"la cantidad de ceros es: "<<ceros<<endl;
	cout<<"la cantidad de numeros positivos es: "<<positivos<<endl;
	cout<<"la cantidad de numeros negativos es: "<<negativos<<endl;
	
    return 0;
	getch();	
}