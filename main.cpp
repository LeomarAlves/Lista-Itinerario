#include <iostream>
#include "lista_itinerario.h"
#include <string>

using namespace std;

int main () {

    ListaDuplamenteEncadeada minhaRota;

    minhaRota.inicio = NULL;
    minhaRota.fim = NULL;
    minhaRota.totalParadas = 0;

    int opcao;
    string nomeBusca, novoNome;

    do
    {
        cout << "\n--- MENU DO ONIBUS ---" << endl;
        cout << "1. Inserir parada no fim" << endl;
        cout << "2. Inserir parada no inicio" << endl;
        cout << "3. Remover parada" << endl;
        cout << "4. Buscar parada (parcial)" << endl;
        cout << "5. Mostrar rota (Ida e Volta)" << endl;
        cout << "6. Total de paradas" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        

    } while (opcao != 0);
    
    
    return 0;
}