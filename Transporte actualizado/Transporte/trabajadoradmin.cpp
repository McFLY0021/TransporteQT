#include "trabajadoradmin.h"

TrabajadorAdmin::TrabajadorAdmin() : Trabajador()
{

}

int TrabajadorAdmin::salario()
{
    return Trabajador::salario() + 200;
}

QString TrabajadorAdmin::getCargo() const
{
    return cargo;
}

void TrabajadorAdmin::setCargo(const QString &value)
{
    cargo = value;
}

