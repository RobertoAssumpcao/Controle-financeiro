/*********************Cabe�alho**********************

Empresa:			UNISUAM
Curso:				Ciencia da Computacao
Disciplina:			Programacao
Projeto:			Controle financeiro
Autor:				Roberto de Paiva Assumpcao e Antonio
Data de criacao:	26/07/2019
Versao:				1.5

Descri��o:
Um programa que calcula media da fatura, faz juros compostos e simples e faz controle financeiro. Salvando tudo em arquivo.
***************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <locale.h>
#include<string.h>
#include <iostream>
#include<time.h>
using namespace std;


struct cadastro{
    char login[200];
    char nome[200];
    char senha[8];
    
    
};
char /*1*/aluguel[8]={'A','l','u','g','u','e','l','\0'};
		char /*2*/agua[5]={'A','g','u','a','\0'};
		char /*3*/telefone[10]={'T','e','l','e','f','o','n','e','\0'};
		char /*4*/energia[8]={'E','n','e','r','g','i','a','\0'};
		char /*5*/planoS[15]={'P','l','a','n','o',' ','d','e',' ','S','a','ú','d','e','\0'};
		char /*6*/alimentar[12]={'A','l','i','m','e','n','t','a','ç','ã','o','\0'};
		char /*7*/internet[9]={'I','n','t','e','r','n','e','t','\0'};
		char /*8*/carro[6]={'C','a','r','r','o','\0'};
		char /*9*/salaob[16]={'S','a','l','ã','o',' ','d','e',' ','B','e','l','e','z','a','\0'};
		char /*10*/cursoI[17]={'C','u','r','s','o',' ','d','e',' ','I','d','i','o','m','a','s','\0'};
		char /*11*/academia[9]={'A','c','a','d','e','m','i','a','\0'};
		char /*12*/roupaM[16]={'R','o','u','p','a','s',' ','d','e',' ','m','o','d','a','s','\0'};
		char /*13*/mercado[13]={'S','u','p','e','r','m','e','r','c','a','d','o','\0'};
		char /*14*/tv[10]={'T','V',' ','a',' ','c','a','b','o','\0'};
		char /*15*/telefoneF[14]={'T','e','l','e','f','o','n','e',' ','f','i','x','o','\0'};
		char /*16*/lanche[14]={'C','h','á',' ','e',' ','l','a','n','c','h','e','s','\0'};
		char /*17*/cinema[7]={'C','i','n','e','m','a','\0'};
		/*Parte de txt*/
		char txt1[12]={'A','l','u','g','u','e','l','.','t','x','t','\0'};
		char txt2[9]={'A','g','u','a','.','t','x','t','\0'};
		char txt3[13]={'T','e','l','e','f','o','n','e','.','t','x','t','\0'};
		char txt4[12]={'E','n','e','r','g','i','a','.','t','x','t','\0'};
		char txt5[19]={'P','l','a','n','o',' ','d','e',' ','S','a','ú','d','e','.','t','x','t','\0'};
		char txt6[16]={'A','l','i','m','e','n','t','a','ç','ã','o','.','t','x','t','\0'};
		char txt7[13]={'I','n','t','e','r','n','e','t','.','t','x','t','\0'};
		char txt8[10]={'C','a','r','r','o','.','t','x','t','\0'};
		char txt9[20]={'S','a','l','ã','o',' ','d','e',' ','B','e','l','e','z','a','.','t','x','t','\0'};
		char txt10[21]={'C','u','r','s','o',' ','d','e',' ','I','d','i','o','m','a','s','.','t','x','t','\0'};
		char txt11[13]={'A','c','a','d','e','m','i','a','.','t','x','t','\0'};
		char txt12[20]={'R','o','u','p','a','s',' ','d','e',' ','m','o','d','a','s','.','t','x','t','\0'};
		char txt13[17]={'S','u','p','e','r','m','e','r','c','a','d','o','.','t','x','t','\0'};
		char txt14[14]={'T','V',' ','a',' ','c','a','b','o','.','t','x','t','\0'};
		char txt15[18]={'T','e','l','e','f','o','n','e',' ','f','i','x','o','.','t','x','t','\0'};
		char txt16[18]={'C','h','á',' ','e',' ','l','a','n','c','h','e','s','.','t','x','t','\0'};
		char txt17[11]={'C','i','n','e','m','a','.','t','x','t','\0'};
		/*.......*/
	
	void criartodosA(){
	
	
	FILE *file;
	file=fopen(txt1,"a+");
	fclose(file);
	file=fopen(txt2,"a+");
	fclose(file);
	file=fopen(txt3,"a+");
		fclose(file);
	file=fopen(txt4,"a+");
		fclose(file);
	file=fopen(txt5,"a+");
	fclose(file);
	file=fopen(txt6,"a+");
		fclose(file);
	file=fopen(txt7,"a+");
	fclose(file);
	file=fopen(txt8,"a+");
		fclose(file);
	file=fopen(txt9,"a+");
		fclose(file);
	file=fopen(txt10,"a+");
	fclose(file);
	file=fopen(txt11,"a+");
		fclose(file);
	file=fopen(txt12,"a+");
	fclose(file);
	file=fopen(txt13,"a+");
	fclose(file);
    file=fopen(txt14,"a+");
	fclose(file);
	file=fopen(txt15,"a+");
		fclose(file);
	file=fopen(txt16,"a+");
	fclose(file);
	file=fopen(txt17,"a+");
	fclose(file);
}

int testa(char *nm, char *se){
    FILE *farq;
    cadastro usuario;
   farq = fopen("arqsenhas.arq", "r");      // Abre o arquivo para leitura
   if(farq == NULL){
     printf( "Erro na abertura do arquivo");
     exit(1);
   }
   while(!feof(farq)){
     fread(&usuario, 109, 1, farq); // lê a c
     if (strcmp(usuario.login,nm)) {
       if(strcmp(usuario.senha,se)) {
           return 0;
       }
     }
                
   }
  return -1; 
}
struct variavel{
	int guarda[18];
	int i=0;
	int resposta;
	float contatudo;
	int continuar;
	int z=0;
	int voltar;
	};
	    float Rgastos[17];
void mandaparaARQ(float tudo){
	    FILE *file;
	    char pegarconteudo[60];
	
	file=fopen("VALORTOTAL.txt","a+");
	if(file==NULL){
		printf("\n Erro.");
		getchar();
		exit(0);
	}
	
	fprintf(file,"%.2f\t",tudo);
	fclose(file);
	file=fopen("VALORTOTAL.txt","r");
	fgets(pegarconteudo,60,file);
	printf("\n\n Valor Total\t\t%s",pegarconteudo);
	fclose(file);
	    	
		}
void totalarq(){
	FILE *file;
	char pegarconteudo[60];
	file=fopen("VALORTOTAL.txt","r");
	fgets(pegarconteudo,60,file);
	printf("\n\n Valor Total\t\t%s",pegarconteudo);
	fclose(file);
	
	
}
	void snome(struct variavel y,int cont,int Ler){
		char valor[60];
	    
        FILE *file;
        if(Ler==1){
		
		if(y.guarda[cont]==1){
			file=fopen(txt1,"a+");
		printf("\n  Digite o valor gasto de %s:",aluguel);
		scanf("%f",&Rgastos[cont]);
		fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
			if(y.guarda[cont]==2){
				file=fopen(txt2,"a+");
		printf("\n  Digite o valor gasto de %s:",agua);
				scanf("%f",&Rgastos[cont]);
	fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
			if(y.guarda[cont]==3){
				file=fopen(txt3,"a+");
		printf("\n  Digite o valor gasto de %s:",telefone);
				scanf("%f",&Rgastos[cont]);
	fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
		if(y.guarda[cont]==4){
			file=fopen(txt4,"a+");
		printf("\n  Digite o valor gasto de %s:",energia);
				scanf("%f",&Rgastos[cont]);
			fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==5){
					file=fopen(txt5,"a+");
		printf("\n  Digite o valor gasto de %s:",planoS);
				scanf("%f",&Rgastos[cont]);
			fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==6){
					file=fopen(txt6,"a+");
		printf("\n  Digite o valor gasto de %s:",alimentar);
				scanf("%f",&Rgastos[cont]);
		fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==7){
					file=fopen(txt7,"a+");
		printf("\n  Digite o valor gasto de %s:",internet);
				scanf("%f",&Rgastos[cont]);
		fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==8){
					file=fopen(txt8,"a+");
		printf("\n  Digite o valor gasto de %s:",carro);
				scanf("%f",&Rgastos[cont]);
			fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==9){
					file=fopen(txt9,"a+");
		printf("\n  Digite o valor gasto de %s:",salaob);
				scanf("%f",&Rgastos[cont]);
			fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==10){
					file=fopen(txt10,"a+");
		printf("\n  Digite o valor gasto de %s:",cursoI);
				scanf("%f",&Rgastos[cont]);
			fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==11){
					file=fopen(txt11,"a+");
		printf("\n  Digite o valor gasto de %s:",academia);
				scanf("%f",&Rgastos[cont]);
			fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==12){
					file=fopen(txt12,"a+");
		printf("\n  Digite o valor gasto de %s:",roupaM);
				scanf("%f",&Rgastos[cont]);
			fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
		if(y.guarda[cont]==13){
			file=fopen(txt13,"a+");
		printf("\n  Digite o valor gasto de %s:",mercado);
				scanf("%f",&Rgastos[cont]);
			fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==14){
					file=fopen(txt14,"a+");
		printf("\n  Digite o valor gasto de %s:",tv);
				scanf("%f",&Rgastos[cont]);
		fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==15){
					file=fopen(txt15,"a+");
		printf("\n  Digite o valor gasto de %s:",telefoneF);
				scanf("%f",&Rgastos[cont]);
			fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
				if(y.guarda[cont]==16){
					file=fopen(txt16,"a+");
		printf("\n  Digite o valor gasto de %s:",lanche);
				scanf("%f",&Rgastos[cont]);
		fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);
		}else{
		if(y.guarda[cont]==17){
			file=fopen(txt17,"a+");
		printf("\n  Digite o valor gasto de %s:",cinema);
				scanf("%f",&Rgastos[cont]);
		fprintf(file,"%.2f\t",Rgastos[cont]);
		fclose(file);

		}}}}}}}}}}}}}}}}	}
}else{
	if(y.guarda[cont]==1){
                    file=fopen(txt1,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",aluguel,valor);
		fclose(file);
	}else{
		if(y.guarda[cont]==2){
				file=fopen(txt2,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t\t%s",agua,valor);
		fclose(file);
		}else{
			if(y.guarda[cont]==3){
				file=fopen(txt3,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",telefone,valor);
		fclose(file);
		}else{
		if(y.guarda[cont]==4){
			file=fopen(txt4,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",energia,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==5){
					file=fopen(txt5,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",planoS,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==6){
					file=fopen(txt6,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t%s",alimentar,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==7){
					file=fopen(txt7,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",internet,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==8){
					file=fopen(txt8,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t\t%s",carro,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==9){
					file=fopen(txt9,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s%s",salaob,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==10){
					file=fopen(txt10,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s%s",cursoI,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==11){
					file=fopen(txt11,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t%s",academia,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==12){
					file=fopen(txt12,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",roupaM,valor);
		fclose(file);
		}else{
		if(y.guarda[cont]==13){
			file=fopen(txt13,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",mercado,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==14){
					file=fopen(txt14,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",tv,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==15){
					file=fopen(txt15,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t%s",telefoneF,valor);
		fclose(file);
		}else{
				if(y.guarda[cont]==16){
					file=fopen(txt16,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
          fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",lanche,valor);
		fclose(file);
		}else{
		if(y.guarda[cont]==17){
			file=fopen(txt17,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",cinema,valor);
		fclose(file);

		}}}}}}}}}}}}}}}}
		
	}

}
}
void retornoA(int cont){
	int guarda[17];
	int i;
	
	
	for(i=0;i<17;i++){
   	guarda[i]=i+1;
   	
   }
   printf("%d",guarda[5]);

	char valor[60];
	FILE *file;
	if(guarda[cont]==1){
                    file=fopen(txt1,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",aluguel,valor);
		fclose(file);
	}else{
		if(guarda[cont]==2){
				file=fopen(txt2,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t\t%s",agua,valor);
		fclose(file);
		}else{
			if(guarda[cont]==3){
				file=fopen(txt3,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",telefone,valor);
		fclose(file);
		}else{
		if(guarda[cont]==4){
			file=fopen(txt4,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",energia,valor);
		fclose(file);
		}else{
				if(guarda[cont]==5){
					file=fopen(txt5,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",planoS,valor);
		fclose(file);
		}else{
				if(guarda[cont]==6){
					file=fopen(txt6,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",alimentar,valor);
		fclose(file);
		}else{
				if(guarda[cont]==7){
					file=fopen(txt7,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",internet,valor);
		fclose(file);
		}else{
				if(guarda[cont]==8){
					file=fopen(txt8,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t\t%s",carro,valor);
		fclose(file);
		}else{
				if(guarda[cont]==9){
					file=fopen(txt9,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t%s",salaob,valor);
		fclose(file);
		}else{
				if(guarda[cont]==10){
					file=fopen(txt10,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t%s",cursoI,valor);
		fclose(file);
		}else{
				if(guarda[cont]==11){
					file=fopen(txt11,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",academia,valor);
		fclose(file);
		}else{
				if(guarda[cont]==12){
					file=fopen(txt12,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t%s",roupaM,valor);
		fclose(file);
		}else{
		if(guarda[cont]==13){
			file=fopen(txt13,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",mercado,valor);
		fclose(file);
		}else{
				if(guarda[cont]==14){
					file=fopen(txt14,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",tv,valor);
		fclose(file);
		}else{
				if(guarda[cont]==15){
					file=fopen(txt15,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",telefoneF,valor);
		fclose(file);
		}else{
				if(guarda[cont]==16){
					file=fopen(txt16,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t%s",lanche,valor);
		fclose(file);
		}else{
		if(guarda[cont]==17){
			file=fopen(txt17,"r");
                    	if(file==NULL){
			printf("\n O arquivo não existe");
		} 
            fgets(valor,60,file);

		
		printf("\n\n %s\t\t\t%s",cinema,valor);
		fclose(file);

		}}}}}}}}}}}}}}}}
		
	}
	
	
}

int main(void){

	setlocale(LC_ALL, "Portuguese");
	struct variavel x;
	int guarda[17];
		int confirmA;
	int opcao;
   cadastro usuario;
   char confirma[8]; 
   FILE *farq;
   int i;time_t mytime;
mytime = time(NULL);
  
   criartodosA();
      
   farq = fopen("arqsenhas.arq", "ab");
   if (farq == NULL)   // <---- Testa se o arquivo foi aberto corretamente.
    {
    printf("Problemas na CRIACAO do arquivo\n");
    system("pause");
       fclose(farq);
    return -1;
    } 
   do{
   	printf(ctime(&mytime));
   	printf("\n\n");
    printf("\t\t\t   ___________________________");
    printf("\n\t\t\t |        Escolha              |\t");
    printf("\n\t\t\t | 1- Para Criar um conta.     |");
    printf("\n\t\t\t | 2- Para Entra com o Login.  |");
    printf("\n\t\t\t   ___________________________");
    printf("\n \t\t\t Resposta:");
    scanf("%d",&opcao);
    system("cls");
    
	
    if(opcao==1){
	
	do{
			printf(ctime(&mytime));
   printf("\n\nDigite o nome do usuario\n");
   fflush(stdin);
   gets(usuario.login);
   usuario.nome[strlen(usuario.login)]='\0';
   printf("\n\nDigite a senha do usuario\n");
   fflush(stdin);
   gets(usuario.senha);
   printf("\n\nRedigite a senha do usuario\n");
   fflush(stdin);
   gets(confirma);
   if (strcmp(usuario.senha,confirma)==0){
       fwrite(&usuario, 408, 1, farq); // grava a cadeia texto no arquivo
       cout << "\n\nCadastro feito com sucesso \n\n"<<endl;
       confirmA=1;
   }  else {
   	confirmA=0;
        printf("\n\nSenha não coincide\n\n");
   } 
   
   system("pause");
   system("cls");
   }while(confirmA!=1);
   
   

}




	char login_sucesso;
	if(opcao==2){
		do{
				printf(ctime(&mytime));
			printf("\n\n");
		printf("\t_________________________");
		printf( "\n\t|Digite seu Login      |\n\t|");
		fflush(stdin);
		gets(usuario.login);
		printf("\t|");
		printf( "\n\t|Digite sua Senha      |\n\t|  ");
		fflush(stdin);
		gets(usuario.senha);
		printf("\t_________________________");
		if (testa(usuario.login,usuario.senha) == 0){
            printf("\n Login Realizado com sucesso!\n\n");
			login_sucesso=true;
        }
        else{
          	printf("Login invalido tente novamente !\n\n");
        }    	
	
		
	}while( !login_sucesso);
	system("pause");   
	system("cls");                // grava o vetor vet no arquivo
   fclose(farq);




   do{
	printf(ctime(&mytime));
	printf("\t\t_______________________________________");	
	printf("\n\t\t|                Digite               | ");
	printf("\n\t\t|1-Para cadastrar conteudo            |");
    printf("\n\t\t|2-Consultar gastos Total passado.    |");
    printf("\n\t\t_______________________________________");
	printf("\n\t\tResposta:");
	scanf("%d",&x.resposta);
	system("cls");
	
	
	if(x.resposta==1){
    	printf(ctime(&mytime));
	printf("\n\t.Gastos essencias para incluir.");
	printf("\n\t1.\tAluguel");
	printf("\n\t2.\tÁgual");
	printf("\n\t3.\tTelefone");
	printf("\n\t4.\tEnergia");
	printf("\n\t5.\tPlano de Saúde");
	printf("\n\t6.\tAlimentação");
	printf("\n\t7.\tInternet");
	printf("\n\t8.\tCarro");
	printf("\n\t9.\tSalão de Beleza");
    printf("\n\t10.\tCurso de Idiomas");
    printf("\n\t11.\tAcademia");
   	printf("\n\t12.\tRoupas de modas");
   	printf("\n\t13.\tSupermercado");
    printf("\n\t14.\tTV a cabo");
   	printf("\n\t15.\tTelefone fixo");
   	printf("\n\t16.\tChá e lanches");
   	printf("\n\t17.\tCinema");
	printf("\n\t Aperte enter para cada numero para confirma.\n");
	printf("\n\t Para finalizar a escolha 'DIGITE 0'.\n");
	do{
		x.i++;
		printf("\n\t.");
		scanf("%d",&x.guarda[x.i-1]);

		}while(x.guarda[x.i-1]!=0);
		system("cls");

	  	for(x.z=0;x.z<x.i;x.z++){
		  snome(x,x.z,1);
         x.contatudo +=Rgastos[x.z];
		}
		
		
	
		system("cls");
		printf("\n\t\t\t1ºMES\t2ºMES\t3ºMES");
		for(x.z=0;x.z<x.i-1;x.z++){

		 snome(x,x.z,2);
		}
mandaparaARQ(x.contatudo);
printf("\n\n");
system("pause");
system("cls");
}else{
	if(x.resposta==2){
		printf(ctime(&mytime));
		
		printf("\n\t\t\t1ºMES\t2ºMES\t3ºMES");
		for(x.z=0;x.z<17;x.z++){

		 retornoA(x.z);
		}
totalarq();
printf("\n\n");
system("pause");
system("cls");





	}
}
printf("\n Deseja contiunar? \n 1.Sim\n 2.Não\n Resposta:");
scanf("%d",&x.continuar);
system("cls");
}while(x.continuar!=2);
}
printf("\nPara voltar 'Digite 0'.\n Resposta: ");
   scanf("%d",&x.voltar);
   system("cls");
}while(x.voltar!=1);



	getch();
return 0;
}