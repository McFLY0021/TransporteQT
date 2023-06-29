#include "trabajador.h"

Trabajador::Trabajador()
{

}

QString Trabajador::getNombre() const
{
    return nombre;
}

void Trabajador::setNombre(const QString &value)
{
    nombre = value;
}

int Trabajador::salario()
{
    return salarioB*cantidadDias;
}

int Trabajador::getCantidadDias() const
{
    return cantidadDias;
}

void Trabajador::setCantidadDias(int value)
{
    cantidadDias = value;
}

float Trabajador::getSalarioB() const
{
    return salarioB;
}

void Trabajador::setSalarioB(float value)
{
    salarioB = value;
}

int Trabajador::getAnnoExperiencia() const
{
    return annoExperiencia;
}

void Trabajador::setAnnoExperiencia(int value)
{
    annoExperiencia = value;
}

QString Trabajador::getNivelEscolar() const
{
    return nivelEscolar;
}

void Trabajador::setNivelEscolar(const QString &value)
{
    nivelEscolar = value;
}

QString Trabajador::getDireccion() const
{
    return direccion;
}

void Trabajador::setDireccion(const QString &value)
{
    direccion = value;
}

QString Trabajador::getTelefono() const
{
    return telefono;
}

void Trabajador::setTelefono(const QString &value)
{
    telefono = value;
}

QString Trabajador::getCI() const
{
    return CI;
}

void Trabajador::setCI(const QString &value)
{
    CI = value;
}
