#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1000

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
/* Funci�n para la lectura del archivo que contendr� el AFD. */
void openFile() {

	FILE *fichero ; // Se declara un nuevo archivo.
	char *archivo = "automata_finito_determinista.txt" ; // Apuntador de caracteres que almacena la informaci�n del archivo.
	char texto ; // Variable de caracteres.
	
	fichero = fopen( archivo, "r" ) ; // Se le solicita al sistema que lea el archivo declarado en un apuntador.
	
	if( fichero == NULL ) { // Si la informaci�n del archivo es nula, se env�a un mensaje de error.
		perror( "No existe informacion dentro del archivo... \n" ) ;
	}
	
	else {
		
		while( feof( fichero ) == 0 ) { // Mientras no sea el final del archivo, se env�a la informaci�n a una vaiable para su lectura en CMD.
			
			texto = fgetc( fichero ) ;
			printf( "%c", texto ) ;
			
		}
		
	}
	
	fclose( fichero ) ; // Cierre del archivo por parte del sistema.
	getch() ;

}

void enterChains( int *cadena ) {
	
	int n ;
	printf( "Ingrese el tamanio de la cadena: " ) ;
	scanf( "%d", &n ) ;
	
	cadena = malloc( n * sizeof(int) ) ;
	
	printf( "Ingrese una cadena de %d caracteres con valores de 0 o 1: \n", n ) ;
	
	int i ;
	if( cadena != NULL ) {
		
		for( i = 0 ; i < n ; i++ ) {
			scanf( "%d" , &cadena ) ;
		}
		
	}
	
	else {
	
		perror( "Error en la creacion de la cadena... \n" ) ;
		systen( "PAUSE" ) ;
		printf( "Vuelva a ingresar una cadena: \n" ) ;
		enterChains( cadena ) ;
	
	}
	
	
}

void readChains() {
	
	char *estado ;
	int estadoDeAceptacion ;
	bool aceptacionDeEstado ;
	int *cadena, *alfabeto ;
	
} 

void main(int argc, char *argv[]) {
	
	char *estado ;
	int estadoDeAceptacion ;
	bool aceptacionDeEstado ;
	int *cadena, *alfabeto ;
	
	openFile() ; // Se manda a llamar a la funci�n que permite la lectura del archivo.
	enterChains( cadena ) ;

	int tamanioDeCadena = sizeof( cadena ) / sizeof( cadena[0] ) ;
		
	if( tamanioDeCadena >= 3 ) {
		
		
		
	}	
		
	else {
		
		perror( "Error en el tamanio de la cadena ingresada... \n" ) ;
		printf( "\n\nIngrese nuevamente una cadena: " ) ;
		enterChains( cadena ) ;

	}

}
