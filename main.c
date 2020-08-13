#include <stdio.h>
#include <stdlib.h>

/* Função: aplicação que solicita um numero ao utilizador e apresenta o fatorial desse numero
   Autor:  Luís Filipe */

int main(int argc, char *argv[]) {
	
	//Variaveis	
	int numero, fatorial;
	
	//Solicitar o numero a ser fatorizado
	printf("Introduza o numero: ");
	scanf("%d", &numero);

	//Fatorial do numero	
	fatorial = 1;
	while (numero > 1)
	{
		fatorial = fatorial * numero;   
	    numero = numero - 1;                    
    }
    
    //Apresentação do fatorial do numero
	printf("O fatorial e: %d\n", fatorial); 
	
	   
}
