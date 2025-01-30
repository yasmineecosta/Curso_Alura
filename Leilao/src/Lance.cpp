#include "Lance.hpp"

Lance::Lance(Usuario usuario, floar valor):
    usuario(usuario), valor(valor)
    {

    }

float Lance::recuperaValor() const
{
    return valor;
}
