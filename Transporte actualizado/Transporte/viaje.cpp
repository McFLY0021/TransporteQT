#include "viaje.h"

Viaje::Viaje()
{

}

float Viaje::getCargaTransportada() const
{
    return cargaTransportada;
}

void Viaje::setCargaTransportada(float value)
{
    cargaTransportada = value;
}

float Viaje::getKmRecorrido() const
{
    return kmRecorrido;
}

void Viaje::setKmRecorrido(float value)
{
    kmRecorrido = value;
}

QDateTime Viaje::getFechaInicio() const
{
    return fechaInicio;
}

void Viaje::setFechaInicio(const QDateTime &value)
{
    fechaInicio = value;
}

QDateTime Viaje::getFechaFin() const
{
    return fechaFin;
}

void Viaje::setFechaFin(const QDateTime &value)
{
    fechaFin = value;
}

Camion Viaje::getCamion() const
{
    return camion;
}

void Viaje::setCamion(const Camion &value)
{
    camion = value;
}
