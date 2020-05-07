#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef	struct Funcionario {
		
		int registro;
		float salario;
		char nome[30];
	}Henrique;

void mostrarFuncionario(struct Funcionario x){
		
		printf("%d", x.registro);
		printf("%f", x.salario);
		puts(x.nome);
}

void lerFuncionario(Henrique *ptr){
	
	
	scanf("%d", &ptr->registro);
	scanf("%f", &ptr->salario);
	scanf("%s", ptr->nome);	
}


main(){
	
	struct Funcionario y = {2000, 200.00, "José"};
	
	mostrarFuncionario(y);
	lerFuncionario(&y);
	mostrarFuncionario(y);
	
}
