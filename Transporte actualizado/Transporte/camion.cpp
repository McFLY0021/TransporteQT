#include "camion.h"

Camion::Camion()
{

}

QString Camion::getChapa() const
{
    return chapa;
}

void Camion::setChapa(const QString &value)
{
    chapa = value;
}

QString Camion::getMarca() const
{
    return marca;
}

void Camion::setMarca(const QString &value)
{
  marca = value;
}

void Camion::funcionPolimorfica()
{

}
