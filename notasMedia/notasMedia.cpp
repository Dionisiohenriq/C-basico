#include <stdio.h>
#include <stdlib.h>
#define n 4 // definida a variável n com valor 4, que será utilizada para a contagem dos índices do vetor


//desafio 4

main(){
	
	//Declaração do vetor e variáveis globais
	float notas[n];
	float media = 0;
	char nomeAluno[10];
	int cont = 1;
	int i;
	
	//Enquanto o usuário não digitar '-1' o laço fará a coleta dos dados, cálculos e exibição da média
	while(cont != -1){
			
		//solicita o nome do aluno cujas notas serão inseridas no programa, na instância corrente	
		printf("Insira o nome do aluno: \n");
		scanf("%s", &nomeAluno);
		
	
		// laço para armazenar as notas do aluno nos índices do vetor 'notas[i]'
		for(i = 1; i <= n; i++){
			
			//solicita ao usuário a inserção das notas, armazenando-as no vetor com o auxílio do laço for	
			printf("Insira a %d nota do aluno %s \n", i, nomeAluno);
			scanf("%f", &notas[i]);
			
			//Armazena o valor de cada indice do vetor, somando na variável media, para calcular a média fora do laço while
			media += notas[i];
			
		}	
		// faz a divisão da média fora do laço for, pois é só necessário dividir por 4 uma vez
		media /= 4;
		
		//Exibe o cálculo da média
		printf("A media do aluno %s: %.2f \n", nomeAluno, media);
		
		//O usuário digitará -1 se não quiser mais inserir dados
		printf("\nDigite qualquer tecla e pressione Enter para inserir dados ou -1 e Enter para sair: ");
		scanf("%d", &cont);	
		
		//A variável média é zerada para garantir que os dados sejam exibidos corretamente no proximo looping
		media = 0;
	}
	
	system("pause");
			
	
}
