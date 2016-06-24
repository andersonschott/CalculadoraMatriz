/*
define um tipo strutura pra matriz q contem linhas colunas e um ponteiro pra ponteiro
*/
typedef struct{
 	int linhas;
	int colunas;
	float **valores;
}matriz;

/*
descricao: Recebe valores da tela e preenche a matriz
parametros: 
retorno: a matriz preenchida
*/
matriz* recebeTeclado();

/*
descricao: Imprime os valores da matriz na tela
parametros: 
retorno: impressao dos valores da matriz
*/
void visualizaMatriz(matriz *m);

/*
descricao: aloca uma matriz na memoria
parametros: o numero de linhas e colunas da matriz a ser alocada
retorno: a matriz alocada
*/
matriz *alocaMatriz(int linhas,int colunas);

/*
descricao: desaloca uma matriz da memoria
parametros: matriz a ser desalocada
retorno: void
*/
void desalocaMatriz(matriz *m);

/*
descricao: funcao responsavel pela multiplicação de uma matriz por um numero real inteiro
parametros: apontador p/ a matriz que sera multiplicada e um multiplicador do tipo float
retorno: retorna a matriz multiplicada por k
*/
matriz *multiplicaEscalar(matriz *m,int k);

/*
descricao: funcao responsavel pela tranposiÃ§ao de uma matriz
parametros: apontador p/ a matriz q sera transposta
retorno: a matriz transposta
*/
matriz *transpor(matriz *m);

/*
descricao:funcao que multiplica 2 matrizes
parametros:as matrizes que serao multiplicadas
retorno:matriz resultado da multuplicacao
*/
matriz *multiplicaMatriz(matriz* m1, matriz* m2);

/*
descricao:funcao que calcula a a exponenciação da matriz
parametros:matriz que será exponenciada
retorno:matriz exponenciada
*/
matriz *elevaMatriz(matriz *m, float potencia);

/*
descricao:funcao que verifica a igualdade entre matrizes
parametros:matrizes que serão comparadas
retorno:True / False
*/
char *igualdade(matriz *m1, matriz *m2);


