#include <stdio.h>
#include <stdlib.h>


//Desafio 5

main(){
	
	int i, j, cont;
	
	
	printf("Digite a qtd de codigos de clientes que quer inserir: \n");
	scanf("%d", &cont);
	
	
	//os vetores são declarados após a coleta do valor de cont, para garantir que não haja erro na execução do código
	int codigos[cont];
	int codInvertidos[cont];
	
	
	//Enquanto cont não for -1, o programa irá coletar dados
	while(cont != -1){
		
		//Percorre o vetor, adicionando os valores no índice correspondente a iteração
		for (i = 0; i < cont; i ++){
				
			printf("\nInsira o codigo de cliente [%d]: \n", i + 1);		
			scanf("%d", &codigos[i]);
			
		}
		
		//Atribui a J o valor de cont -1
		j = cont - 1;
	
		//É feita a inversão dos índices alternando o valor do índice j para o índice i
		for(i = 0; i <= cont; i++){
		
			codInvertidos[i] = codigos[j];
		
			j--;
		
		}
		
		
		printf("\nCodigo dos clientes inseridos: \n");
		
		//Exibem-se os valores dos índices no vetor na sequência digitada
		for(i = 0; i < cont; i++){
	
			printf("Codigo[%d]: %d\n", i + 1, codigos[i]);
		
		}
		
		
		printf("\nCodigo dos clientes inseridos, com a posicao do indice invertido: \n");
		
		//Exibem-se os valores dos índices no vetor da sequência digitada invertida
		for(i = 0; i < cont; i++){
	
			printf("Codigo[%d]: %d\n", i + 1, codInvertidos[i]);
		
		}
		

		//Aqui é feita novamente a checagem com o usuário para parar ou continuar o programa
		printf("\nDigite a qtd de codigos de clientes quer inserir - ou digite -1 para sair: \n");
		scanf("%d", &cont);	
	
	}
	
	system("pause");
}
