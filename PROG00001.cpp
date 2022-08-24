#include <stdio.h>
#include <windows.h>
#include <conio.h>
	
//Função gotoxy
 void gotoxy(int x, int y){
		
	COORD coord;
	coord.X= x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);	
}

int main(){
	
	system("mode con:cols=30 lines=12");
	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);
	
	int sim, salvar, sair, menu, configuracao;
	
	system("cls");
	system("title menu");
	system("color FF");
	
	printf(" ||========================||\n");
	printf(" ||  Menu | Configuracao   ||\n");
	printf(" ||========================||\n");
	
	printf("Escolha umas das opcoes da menu que voce deseja:");
	scanf("%d", &menu);
	printf("\n");
	
	printf("\033[0;32m");
	printf("\033[40m");
	printf("\033[4;37m");
	
	switch(menu){
		for(menu = 0; menu < 4; menu++){
			
				case 1:
				printf("Para salvar a tela\n");
			    printf("Deseja salvar??");
				scanf("%d", &salvar, &sim);
				break;		
			
			case 2:
				printf("Para mudar a cor da tela\n");
				printf("Deseja mudar a cor da tela??");
				scanf("%d", &configuracao);
				system("color 1F");
				break;
	
		    case 3:
		    	printf("Para sair da tela\n");
				printf("Deseja sair??");
				scanf("%d", &sair);
				break;
					  					
		for(sair = 0; sair < 4; sair++){
				case 4:
				printf("Para encerrar a programa\n");
				printf("O programa se encerra!!\n", sair);
				printf("|========================|\n");
				break;		
				
			}						
		}
	}	
	printf("Pronto. Agora tem as informacoes que o usuario deseja fazer.\n");
	system("pause");
	return 0;
	
}
