/*
 * aula dia 14.cpp
 *
 *  Created on: 14 de abr. de 2023
 *      Author: Isabela Mageste
 */
#include <iostream>
#include <string.h>
using namespace std;

/* Uma classe serve como um "carimbo", em que podemos montar uma estrutura
 * que irá se repitir ao longo do código e que envolve uma "entidade" receber o
 * valor de várias variáveis. (semelhante a matéria de BD ) :)
 */

//criando a classe
class Estudante {
public:
	// valores que podem ser acessados por qualquer parte do programa
	string nome;
	int matricula;
	float rendaMensalFamiliar;

private:
	// valores "escondidos" do resto do programa que nao podem ser acessados
	float igd = 1.234;

public:
	// funcoes que irao permitir que o resto do codigo tenha acesso aos valores privados
	int getIgd() {
		return igd * rendaMensalFamiliar;
	}
};

int main() {
	//preenchendo um objeto (eu acho)
	Estudante estudante1;
	estudante1.nome = "Jovem Cefetiano";
	estudante1.matricula = 123456;
	estudante1.rendaMensalFamiliar = 3250.50;
	estudante1.getIgd();

	//atencao pra um erro meu na linha seguinte: esqueci de colocar () e tava dando erro, mais atencao na proxima vez!
	cout << "Nome: " << estudante1.nome << "\nMatriula: " << estudante1.matricula << "\nIgd: " << estudante1.getIgd() << endl;
}
/*versao 1 : so tem a  funcao getIgd, funciona e retornou um valor estranho , mas eu acabei de perceber que foi por que
 * eu nao dei valor pra variavel rendaMensalFamiliar.
 * depois de colocar um valor para ela, correu tudo de acordo com os conformes :)
 */
