#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "verif.h"


void denied(){
	system("cls");
	system("msg *  ****ALERT ACCESS DENIED****");
	printf("\a\a\a\a\a\a\a");
}
void permitido(){
	printf("Acesso permitido.");
	system("cls");
	system("shutdown -a");
}
void negado(){
	int j = 0;
	while(j < 2){
		printf("\a");
		system("msg *  ****ALERT ACCESS DENIED****");
		system("msg *  ****GET OUT OF MY PC****");
		system("msg *  ****INVASOR****");
		system("msg *  ****OOOOOOUT****");
	};
}
void linha(int a){
	for(int i = 1; i<a; i++){
		printf("*");
	};
}
char conversa(){
	system("cls");
	linha(81);
	linha(81);
	printf("\n                              Ola mestre                              \n");
	
}
void continua(){
	system("start atalho.bat");

}
void verifica(char x){
	switch (x){
		case 'S':
			printf("\n\nOk, um momento por favor.....\n");
			system("Pause");
			continua();
			break;
		case 's': 
			printf("\n\nOk, um momento por favor.....\n");
			system("Pause");
			continua();
			break;
		case 'N': 
			printf("\n\nO que deseja fazer, Senhor?\n");
			break;
		case 'n':
		 	printf("\n\nO que deseja fazer, Senhor?\n");
			break;
	};

}

//======================================================================================================================================================================================
//======================================================================================================================================================================================

int main(void){
	char senha[30]="biribirbir", x[20], res;
	int i=0;

	system("shutdown -r -t 50");


	while(i < 3){
		
		printf("Tentativa numero %d!!\n", i+1);

		printf("Digite a senha, Mestre: ");scanf("%s", x);
		
		if(strcmp(senha, x)==0){
			permitido();// função de acesso permitido.
			i--;
			break;
		}else{
			denied();// função de acesso negado.
			i++;
		};
	
 	};
 	if(i == 3){
		negado();
	};
	
	conversa();//inicializa o dialogo
	fflush(stdin);
	printf("                 Voce deseja iniciar sua navegacao padrao??[S/N] ");res = getchar();
	verifica(res);//verifica a resposta
	return 0;	
}
