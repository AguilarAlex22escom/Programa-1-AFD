#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1000

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
/* Funci�n para la lectura del archivo que contendr� el AFD. */
void openFile() {
	
	FILE *fichero ;
	char *nombreDeArchivo = "automata_finito_determinista.txt" ;
	fichero = fopen( nombreDeArchivo, "r" ) ;
	
	if( fichero == NULL ) {
		printf( "Error en la lectura del archivo, mejor banate..." ) ;
		fclose( fichero ) ;
	}
	
	char linea[20] ;
	fgets( linea, 20 - 1, fichero ) ;
	char *token = strtok( linea, " " ) ;
	int filas = atoi( token ) ;
	token = strtok( NULL, " " ) ;
	
//	FILE *fichero ; // Se declara un nuevo archivo.
//	char *archivo = "automata_finito_determinista.txt" ; // Apuntador de caracteres que almacena la informaci�n del archivo.
//	char texto ; // Variable de caracteres.
//	
//	fichero = fopen( archivo, "r" ) ; // Se le solicita al sistema que lea el archivo declarado en un apuntador.
//	
//	if( fichero == NULL ) { // Si la informaci�n del archivo es nula, se env�a un mensaje de error.
//		perror( "No existe informaci�n dentro del archivo..." ) ;
//	}
//	
//	else {
//		
//		while( feof( fichero ) == 0 ) { // Mientras no sea el final del archivo, se env�a la informaci�n a una vaiable para su lectura en CMD.
//			
//			texto = fgetc( fichero ) ;
//			printf( "%c", texto ) ;
//			
//		}
//		
//	}
//	
//	fclose( fichero ) ; // Cierre del archivo por parte del sistema.
//	getch() ;

}

/* void readChains() {
	
	int position, 
	
	if(  ) {
		
		
		
	}
	
} */

void main(int argc, char *argv[]) {
	
	openFile() ; // Se manda a llamar a la funci�n que permite la lectura del archivo.

}
