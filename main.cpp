#include <iostream>
#include "lista_itinerario.h"
#include <string>

using namespace std;

int main () {

    ListaDuplamenteEncadeada minhaRota;

    minhaRota.inicio = NULL;
    minhaRota.fim = NULL;
    minhaRota.totalParadas = 0;

    insereInicio(minhaRota, "Terminal Centro");
    insereFim(minhaRota, "Shopping");
    insereFim(minhaRota, "Univali");
    insereFim(minhaRota, "Posto de Gasolina");

    cout << "-- TESTE DE INSERÇÃO --" << endl;
    imprimirIda(minhaRota);
    imprimirVolta(minhaRota);
    insereInicio(minhaRota,"Garagem");

    cout << "-- TESTE DE REMOÇÃO --" << endl;
    removerPorNome(minhaRota, "Shopping");
    imprimirIda(minhaRota);

    imprimeTotalParadas(minhaRota);
    
    return 0;
}