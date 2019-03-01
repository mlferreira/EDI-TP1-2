/**********************************************************************/
/*                                                                    */
/*                        Estrutura de Dados I                        */
/*                         Trabalho Pratico 1                         */
/*                                                                    */
/*                             Exercicio 2                            */
/*                               2016-1                               */
/*                                                                    */
/*                        Melina Lopes Ferreira                       */
/*                              15.2.4002                             */
/*                                                                    */
/**********************************************************************/


#include <iostream>
using namespace std;


void imprimir(int** labirinto, int nLinhas, int nColunas);
bool acharSaida(int** labirinto, int xA, int yA, int nLinhas, int nColunas);


int main(){
	
	int xA, yA, nLinhas, nColunas;
	int ** labirinto;
	
	cin >> nLinhas >> nColunas;
	
	labirinto = new int*[nLinhas];
	for(int i=0; i<nLinhas; i++){
		labirinto[i] = new int[nColunas];
	}
	
	for(int i=0; i<nLinhas; i++){
		for(int j=0; j<nColunas; j++){
			cin >> labirinto[i][j];
		}
	}
	
	cin >> xA >> yA;
	labirinto[yA][xA] = 5;
	
	imprimir(labirinto, nLinhas, nColunas);
	
	
	if (acharSaida(labirinto, xA, yA, nLinhas, nColunas))
        imprimir(labirinto, nLinhas, nColunas);
    else
        cout << "Nao ha solucao" << endl;
    
		
	return 0;
}
	

bool acharSaida(int** labirinto, int xA, int yA, int nLinhas, int nColunas){
	
    // "marca" onde está/já andou com o numero 5 na matriz
    labirinto[yA][xA] = 5;

    // achou a saida
    if ((xA == nLinhas-1) || (xA == 0) || (yA == nColunas-1) || (yA == 0)){
        return true;
    }
	
	//tenta ir pra direita
	else if ((labirinto[yA][xA+1] == 1) && acharSaida(labirinto, xA+1, yA, nLinhas, nColunas)){
        return true;
    }
	//tenta ir pra esquerda
    else if ((labirinto[yA][xA-1] == 1) && acharSaida(labirinto, xA-1, yA, nLinhas, nColunas)){
        return true;
    }
    //tenta ir pra cima
    else if ((labirinto[yA+1][xA] == 1) && acharSaida(labirinto, xA, yA+1, nLinhas, nColunas)){
        return true;
    }
	//tenta ir pra baixo
    else if ((labirinto[yA-1][xA] == 1) && acharSaida(labirinto, xA, yA-1, nLinhas, nColunas)){
        return true;
    }
	else{ // "desmarca" onde tinha passado (pq nao é solução)
			labirinto[yA][xA] = 1;
			return false;
	}	
}

void imprimir(int** labirinto, int nLinhas, int nColunas){
    for(int i=0; i<nLinhas; i++){
		for(int j=0; j<nColunas; j++){
			if(labirinto[i][j] == 0)
        		cout << "|||";
			else if(labirinto[i][j] == 1)
        		cout << "   ";
			else if(labirinto[i][j] == 5)
        		cout << " X ";
		}
		cout << endl;
    }
	cout << endl;
}