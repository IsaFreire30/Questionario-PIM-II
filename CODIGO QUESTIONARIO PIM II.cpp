#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
	int resposta=0;
	int otima=0, boa=0, regular=0, ruim=0, pessima=0;
	int star1=0, star2=0, star3=0, star4=0, star5=0;
	
	FILE *arq;
	
	printf("Ola! Este e um questionario de satisfacao para sabermos um pouquinho sobre o que achou de nosso museu!\n\n");
	
	do
	{
		printf("Como voce classificaria sua experiencia no museu?\n\n1 - Otima\n2 - Boa\n3 - Regular\n4 - Ruim\n5 - Pessima\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			otima++;
		}
			else if(resposta == 2)
			{
				boa++;
			}
				else if(resposta == 3)
				{
					regular++;
				}
					else if(resposta == 4)
					{
						ruim++;
					}
						else if(resposta == 5)
						{
							pessima++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	//Coleta dos dados;
		
	otima=0;
	boa=0;
	regular=0;
	ruim=0;
	pessima=0;

	do
	{
		printf("\nO que achou da escolha do tema de nossa exposicao?\n\n1 - Otima\n2 - Boa\n3 - Regular\n4 - Ruim\n5 - Pessima\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			otima++;
		}
			else if(resposta == 2)
			{
				boa++;
			}
				else if(resposta == 3)
				{
					regular++;
				}
					else if(resposta == 4)
					{
						ruim++;
					}
						else if(resposta == 5)
						{
							pessima++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}	
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	//Coleta dos dados;
	
	do
	{
		printf("\nQue nota daria para o espaco reservado para a exposicao?\n\n1 - 1 Estrela\n2 - 2 Estrelas\n3 - 3 Estrelas\n4 - 4 Estrelas\n5 - 5 Estrelas\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			star1++;
		}
			else if(resposta == 2)
			{
				star2++;
			}
				else if(resposta == 3)
				{
					star3++;
				}
					else if(resposta == 4)
					{
						star4++;
					}
						else if(resposta == 5)
						{
							star5++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	//Coleta dos dados;

	star1=0;
	star2=0;
	star3=0;
	star4=0;
	star5=0;	
	
	do
	{
		printf("\nQue nota daria para a qualidade de nossas obras fisicas (itens interativos, observaveis, etc.)?\n\n1 - 1 Estrela\n2 - 2 Estrelas\n3 - 3 Estrelas\n4 - 4 Estrelas\n5 - 5 Estrelas\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			star1++;
		}
			else if(resposta == 2)
			{
				star2++;
			}
				else if(resposta == 3)
				{
					star3++;
				}
					else if(resposta == 4)
					{
						star4++;
					}
						else if(resposta == 5)
						{
							star5++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	//Coleta dos dados;
	
	star1=0;
	star2=0;
	star3=0;
	star4=0;
	star5=0;
	
	do
	{
		printf("\nQue nota daria para a qualidade de nossas obras virtuais (imagens, videos, audios, etc.)?\n\n1 - 1 Estrela\n2 - 2 Estrelas\n3 - 3 Estrelas\n4 - 4 Estrelas\n5 - 5 Estrelas\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			star1++;
		}
			else if(resposta == 2)
			{
				star2++;
			}
				else if(resposta == 3)
				{
					star3++;
				}
					else if(resposta == 4)
					{
						star4++;
					}
						else if(resposta == 5)
						{
							star5++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	//Coleta dos dados;
	
	printf("\nAgradecemos pela sua opiniao! Ela sera usada para melhorar nossos servicos, para que possamos lhe fornecer atracoes cada vez melhores!\n\n.");
		
	printf("Digite Enter para continuar . . .");
	getchar();
	return 0;
}