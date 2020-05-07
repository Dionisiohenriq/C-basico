#include <stdio.h>
#include <stdlib.h>


//Desafio 5

main(){
	
	int i, j, cont;
	
	
	printf("Digite a qtd de codigos de clientes que quer inserir: \n");
	scanf("%d", &cont);
	
	
	//os vetores s�o declarados ap�s a coleta do valor de cont, para garantir que n�o haja erro na execu��o do c�digo
	int codigos[cont];
	int codInvertidos[cont];
	
	
	//Enquanto cont n�o for -1, o programa ir� coletar dados
	while(cont != -1){
		
		//Percorre o vetor, adicionando os valores no �ndice correspondente a itera��o
		for (i = 0; i < cont; i ++){
				
			printf("\nInsira o codigo de cliente [%d]: \n", i + 1);		
			scanf("%d", &codigos[i]);
			
		}
		
		//Atribui a J o valor de cont -1
		j = cont - 1;
	
		//� feita a invers�o dos �ndices alternando o valor do �ndice j para o �ndice i
		for(i = 0; i <= cont; i++){
		
			codInvertidos[i] = codigos[j];
		
			j--;
		
		}
		
		
		printf("\nCodigo dos clientes inseridos: \n");
		
		//Exibem-se os valores dos �ndices no vetor na sequ�ncia digitada
		for(i = 0; i < cont; i++){
	
			printf("Codigo[%d]: %d\n", i + 1, codigos[i]);
		
		}
		
		
		printf("\nCodigo dos clientes inseridos, com a posicao do indice invertido: \n");
		
		//Exibem-se os valores dos �ndices no vetor da sequ�ncia digitada invertida
		for(i = 0; i < cont; i++){
	
			printf("Codigo[%d]: %d\n", i + 1, codInvertidos[i]);
		
		}
		

		//Aqui � feita novamente a checagem com o usu�rio para parar ou continuar o programa
		printf("\nDigite a qtd de codigos de clientes quer inserir - ou digite -1 para sair: \n");
		scanf("%d", &cont);	
	
	}
	
	system("pause");
}
