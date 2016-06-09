#include <iostream> 
#include <string>
#include <ctime>
using namespace std;

void imprimir_espacos(int total);
int main(int argc, char* args[])
{
	bool sair = false;
	string jog1;
	string jog2;
	int rodada1 = 0;
	int rodada2 = 0;
	int total_espacos = 50;
	
	
	cout << "Digite o nome do piloto 1:" << endl;
	getline(cin, jog1);
	cout << "Digite o nome do piloto 2:" << endl;
	getline(cin, jog2);

	
	while (sair == false)
	{

		srand((int)time(0));
		total_espacos = rand() % 3 + 1;
		rodada1 = rodada1 + total_espacos;

	                                                                 
		cout << jog1 << endl;
		imprimir_espacos(rodada1);
		cout << "   _  " << endl;;
		imprimir_espacos(rodada1);
		cout << " -o=o> " << endl;
		cout << "------------------------                                                   ---" << endl;

		srand((int)time(0));
		total_espacos = rand() % 3 + 1;
		rodada2 = rodada2 + total_espacos;

		cout << jog2 << endl;
		imprimir_espacos(rodada2);
		cout << "   _  " << endl;
		imprimir_espacos(rodada2);
		cout << " -o=o> " << endl;
		cout << "------------------------                                                   ---" << endl;


		if (rodada1 >= 50 || rodada2 >= 50)
		{
			sair = true;
		}

		else system("cls");
	}
	if (rodada1 >= 50)
		cout << jog1 << " Você ganhou" << endl;
	else if (rodada2 >= 50)
		cout << jog2 << " Você venceu" << endl;
	else
		cout << " EMPATARAM" << endl;	
	
	return 0;
}

void imprimir_espacos(int total)
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{ 
		cout << " ";
	}
}
