#include "Avaliador.hpp"

void Avaliador::avalia(Leilao leilao){
    std::vector<Lance> lances = leilao.recuperaLances();
    //Lance ultimoLance = lances.back();
    //maiorValor = ultimoLance.recuperaValor();
    for(Lance lance : lances){
        if(lance.recuperaValor() > maiorValor){
            maiorValor = lance.recuperaValor();
        }
    }
}

float Avaliador::recuperaMaiorValor() const{
    return maiorValor;
}
