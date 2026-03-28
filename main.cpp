#include <iostream>
#include "lista_itinerario.h"
#include <string>

using namespace std;

int main () {

    ListaDuplamenteEncadeada minhaRota;

    minhaRota.inicio = NULL;
    minhaRota.fim = NULL;
    minhaRota.totalParadas = 0;

    insereFim(minhaRota, "Terminal Centro");
    insereFim(minhaRota, "Shopping");
    insereFim(minhaRota, "Univali");

    cout << "-- TESTE DE INSERÇÃO --" << endl;
    imprimirIda(minhaRota);
    imprimirVolta(minhaRota);

    cout << "-- TESTE DE REMOÇÃO --" << endl;
    removerPorNome(minhaRota, "Shopping");
    imprimirIda(minhaRota);
    
    return 0;
}