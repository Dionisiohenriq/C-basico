#include <stdio.h>
#include <stdlib.h>
#define n 4 // definida a vari�vel n com valor 4, que ser� utilizada para a contagem dos �ndices do vetor


//desafio 4

main(){
	
	//Declara��o do vetor e vari�veis globais
	float notas[n];
	float media = 0;
	char nomeAluno[10];
	int cont = 1;
	int i;
	
	//Enquanto o usu�rio n�o digitar '-1' o la�o far� a coleta dos dados, c�lculos e exibi��o da m�dia
	while(cont != -1){
			
		//solicita o nome do aluno cujas notas ser�o inseridas no programa, na inst�ncia corrente	
		printf("Insira o nome do aluno: \n");
		scanf("%s", &nomeAluno);
		
	
		// la�o para armazenar as notas do aluno nos �ndices do vetor 'notas[i]'
		for(i = 1; i <= n; i++){
			
			//solicita ao usu�rio a inser��o das notas, armazenando-as no vetor com o aux�lio do la�o for	
			printf("Insira a %d nota do aluno %s \n", i, nomeAluno);
			scanf("%f", &notas[i]);
			
			//Armazena o valor de cada indice do vetor, somando na vari�vel media, para calcular a m�dia fora do la�o while
			media += notas[i];
			
		}	
		// faz a divis�o da m�dia fora do la�o for, pois � s� necess�rio dividir por 4 uma vez
		media /= 4;
		
		//Exibe o c�lculo da m�dia
		printf("A media do aluno %s: %.2f \n", nomeAluno, media);
		
		//O usu�rio digitar� -1 se n�o quiser mais inserir dados
		printf("\nDigite qualquer tecla e pressione Enter para inserir dados ou -1 e Enter para sair: ");
		scanf("%d", &cont);	
		
		//A vari�vel m�dia � zerada para garantir que os dados sejam exibidos corretamente no proximo looping
		media = 0;
	}
	
	system("pause");
			
	
}
