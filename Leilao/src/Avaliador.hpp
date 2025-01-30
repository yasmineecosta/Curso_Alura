#ifndef Avaliador_hpp
#define Avaliador_hpp
#include "Leilao.hpp"

class Avaliador{
private:
    float maiorValor;
public:
    void avalia(Leilao leilao);
    float recuperaMaiorValor() const;
};
#endif // Avaliador_hpp
