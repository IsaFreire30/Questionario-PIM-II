#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
	int resposta, pos;
	int exp_notas[4], tema_notas[4], esp_notas[4], fis_notas[4], virtu_notas[4];
	int exp_otima, exp_boa, exp_regular, exp_ruim, exp_pessima;
	int tema_otima, tema_boa, tema_regular, tema_ruim, tema_pessima;
	int esp_star1, esp_star2, esp_star3, esp_star4, esp_star5;
	int fis_star1, fis_star2, fis_star3, fis_star4, fis_star5;
	int virtu_star1, virtu_star2, virtu_star3, virtu_star4, virtu_star5;
	
	FILE *arq;
	
	//pergunta 1 INICIO
	arq = fopen("info_questionario_exp.txt", "r+");
	
	if(arq == NULL)
	{
		printf("Erro ao abrir o arquivo. Finalizando o programa . . .");
		return 1;
	}
	
	fscanf(arq, "Otima,Boa,Regular,Ruim,Pessima\n");
	
	for(pos=0; pos<5; pos++)
	{
		fscanf(arq, "%d,", & exp_notas[pos]);
	}
	
	fscanf(arq, "\n\n");
	
	exp_otima = exp_notas[0];
	exp_boa = exp_notas[1];
	exp_regular = exp_notas[2];
	exp_ruim = exp_notas[3];
	exp_pessima = exp_notas[4];
	
	printf("Ola! Este e um questionario de satisfacao para sabermos um pouquinho sobre o que achou de nosso museu!\n\n");
	
	do
	{
		printf("Como voce classificaria sua experiencia no museu?\n\n1 - Otima\n2 - Boa\n3 - Regular\n4 - Ruim\n5 - Pessima\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			exp_otima++;
		}
			else if(resposta == 2)
			{
				exp_boa++;
			}
				else if(resposta == 3)
				{
					exp_regular++;
				}
					else if(resposta == 4)
					{
						exp_ruim++;
					}
						else if(resposta == 5)
						{
							exp_pessima++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	
	exp_notas[0] = exp_otima;
    exp_notas[1] = exp_boa;
    exp_notas[2] = exp_regular;
    exp_notas[3] = exp_ruim;
    exp_notas[4] = exp_pessima;
	
	rewind(arq);
	fprintf(arq, "Otima,Boa,Regular,Ruim,Pessima\n");
	fprintf(arq, "%d,%d,%d,%d,%d,\n\n", exp_notas[0], exp_notas[1], exp_notas[2], exp_notas[3], exp_notas[4]);
	
	fclose(arq);
	//pergunta 1 FIM
	
	//pergunta 2 INICIO
	arq = fopen("info_questionario_tema.txt", "r+");
	
	if(arq == NULL)
	{
		printf("Erro ao abrir o arquivo. Finalizando o programa . . .");
		return 1;
	}
	
	fscanf(arq, "Otima,Boa,Regular,Ruim,Pessima\n");
	
	for(pos=0; pos<5; pos++)
	{
		fscanf(arq, "%d,", & tema_notas[pos]);
	}
	
	fscanf(arq, "\n\n");
	
	tema_otima = tema_notas[0];
	tema_boa = tema_notas[1];
	tema_regular = tema_notas[2];
	tema_ruim = tema_notas[3];
	tema_pessima = tema_notas[4];
	
	do
	{
		printf("\nO que achou da escolha do tema de nossa exposicao?\n\n1 - Otima\n2 - Boa\n3 - Regular\n4 - Ruim\n5 - Pessima\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			tema_otima++;
		}
			else if(resposta == 2)
			{
				tema_boa++;
			}
				else if(resposta == 3)
				{
					tema_regular++;
				}
					else if(resposta == 4)
					{
						tema_ruim++;
					}
						else if(resposta == 5)
						{
							tema_pessima++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}	
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	
	tema_notas[0] = tema_otima;
    tema_notas[1] = tema_boa;
    tema_notas[2] = tema_regular;
    tema_notas[3] = tema_ruim;
    tema_notas[4] = tema_pessima;
	
	rewind(arq);
	fprintf(arq, "Otima,Boa,Regular,Ruim,Pessima\n");
	fprintf(arq, "%d,%d,%d,%d,%d,\n\n", tema_notas[0], tema_notas[1], tema_notas[2], tema_notas[3], tema_notas[4]);
	
	fclose(arq);
	//pergunta 2 FIM
	
	//pergunta 3 INICIO
	arq = fopen("info_questionario_esp.txt", "r+");
	
	if(arq == NULL)
	{
		printf("Erro ao abrir o arquivo. Finalizando o programa . . .");
		return 1;
	}
	
	fscanf(arq, "1estrela,2estrelas,3estrelas,4estrelas,5estrelas\n");
	
	for(pos=0; pos<5; pos++)
	{
		fscanf(arq, "%d,", & esp_notas[pos]);
	}
	
	fscanf(arq, "\n\n");
	
	esp_star1 = esp_notas[0];
	esp_star2 = esp_notas[1];
	esp_star3 = esp_notas[2];
	esp_star4 = esp_notas[3];
	esp_star5 = esp_notas[4];
	
	do
	{
		printf("\nQue nota daria para o espaco reservado para a exposicao?\n\n1 - 1 Estrela\n2 - 2 Estrelas\n3 - 3 Estrelas\n4 - 4 Estrelas\n5 - 5 Estrelas\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			esp_star1++;
		}
			else if(resposta == 2)
			{
				esp_star2++;
			}
				else if(resposta == 3)
				{
					esp_star3++;
				}
					else if(resposta == 4)
					{
						esp_star4++;
					}
						else if(resposta == 5)
						{
							esp_star5++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	
	esp_notas[0] = esp_star1;
    esp_notas[1] = esp_star2;
    esp_notas[2] = esp_star3;
    esp_notas[3] = esp_star4;
    esp_notas[4] = esp_star5;
	
	rewind(arq);
	fprintf(arq, "1estrela,2estrelas,3estrelas,4estrelas,5estrelas\n");
	fprintf(arq, "%d,%d,%d,%d,%d,\n\n", esp_notas[0], esp_notas[1], esp_notas[2], esp_notas[3], esp_notas[4]);
	
	fclose(arq);
	//pergunta 3 FIM
	
	//pergunta 4 INICIO
	arq = fopen("info_questionario_fis.txt", "r+");
	
	if(arq == NULL)
	{
		printf("Erro ao abrir o arquivo. Finalizando o programa . . .");
		return 1;
	}
	
	fscanf(arq, "1estrela,2estrelas,3estrelas,4estrelas,5estrelas\n");
	
	for(pos=0; pos<5; pos++)
	{
		fscanf(arq, "%d,", & fis_notas[pos]);
	}
	
	fscanf(arq, "\n\n");
	
	fis_star1 = fis_notas[0];
	fis_star2 = fis_notas[1];
	fis_star3 = fis_notas[2];
	fis_star4 = fis_notas[3];
	fis_star5 = fis_notas[4];
	
	do
	{
		printf("\nQue nota daria para a qualidade de nossas obras fisicas (itens interativos, observaveis, etc.)?\n\n1 - 1 Estrela\n2 - 2 Estrelas\n3 - 3 Estrelas\n4 - 4 Estrelas\n5 - 5 Estrelas\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			fis_star1++;
		}
			else if(resposta == 2)
			{
				fis_star2++;
			}
				else if(resposta == 3)
				{
					fis_star3++;
				}
					else if(resposta == 4)
					{
						fis_star4++;
					}
						else if(resposta == 5)
						{
							fis_star5++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	
	fis_notas[0] = fis_star1;
    fis_notas[1] = fis_star2;
    fis_notas[2] = fis_star3;
    fis_notas[3] = fis_star4;
    fis_notas[4] = fis_star5;
	
	rewind(arq);
	fprintf(arq, "1estrela,2estrelas,3estrelas,4estrelas,5estrelas\n");
	fprintf(arq, "%d,%d,%d,%d,%d,\n\n", fis_notas[0], fis_notas[1], fis_notas[2], fis_notas[3], fis_notas[4]);
	
	fclose(arq);
	//pergunta 4 FIM
	
	//pergunta 5 INICIO
	arq = fopen("info_questionario_virtu.txt", "r+");
	
	if(arq == NULL)
	{
		printf("Erro ao abrir o arquivo. Finalizando o programa . . .");
		return 1;
	}
	
	fscanf(arq, "1estrela,2estrelas,3estrelas,4estrelas,5estrelas\n");
	
	for(pos=0; pos<5; pos++)
	{
		fscanf(arq, "%d,", & virtu_notas[pos]);
	}
	
	fscanf(arq, "\n\n");
	
	virtu_star1 = virtu_notas[0];
	virtu_star2 = virtu_notas[1];
	virtu_star3 = virtu_notas[2];
	virtu_star4 = virtu_notas[3];
	virtu_star5 = virtu_notas[4];
	
	do
	{
		printf("\nQue nota daria para a qualidade de nossas obras virtuais (imagens, videos, audios, etc.)?\n\n1 - 1 Estrela\n2 - 2 Estrelas\n3 - 3 Estrelas\n4 - 4 Estrelas\n5 - 5 Estrelas\n\nResposta: ");
		scanf("%d", & resposta);
		
		if(resposta == 1)
		{
			virtu_star1++;
		}
			else if(resposta == 2)
			{
				virtu_star2++;
			}
				else if(resposta == 3)
				{
					virtu_star3++;
				}
					else if(resposta == 4)
					{
						virtu_star4++;
					}
						else if(resposta == 5)
						{
							virtu_star5++;
						}
		else
		{
			printf("Voce digitou um comando invalido. Tente novamente.\n\n");
		}
	} while(resposta != 1 && resposta !=2 && resposta != 3 && resposta != 4 && resposta != 5);
	
	virtu_notas[0] = virtu_star1;
    virtu_notas[1] = virtu_star2;
    virtu_notas[2] = virtu_star3;
    virtu_notas[3] = virtu_star4;
    virtu_notas[4] = virtu_star5;
	
	rewind(arq);
	fprintf(arq, "1estrela,2estrelas,3estrelas,4estrelas,5estrelas\n");
	fprintf(arq, "%d,%d,%d,%d,%d,\n\n", virtu_notas[0], virtu_notas[1], virtu_notas[2], virtu_notas[3], virtu_notas[4]);
	
	fclose(arq);
	//pergunta 5 FIM
	
	printf("\nAgradecemos pela sua opiniao! Ela sera usada para melhorar nossos servicos, para que possamos lhe fornecer atracoes cada vez melhores!\n\n");

	printf("Digite Enter para continuar . . .");
	getchar();
	return 0;
}