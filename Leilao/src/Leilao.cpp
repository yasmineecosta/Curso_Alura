#include "Leilao.hpp"

Leilao::Leilao(std::string descricao): descricao(descricao)
{

}

const std::vector<Lance>& Leilao::recuperaLanches() const
{
    return lances;
}

void Leilao::recebeLance(const Lance& lance)
{
    lances.push_back(lance);
}
