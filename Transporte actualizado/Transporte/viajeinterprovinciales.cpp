#include "viajeinterprovinciales.h"

ViajeInterProvinciales::ViajeInterProvinciales()
{

}

QString ViajeInterProvinciales::getFechaRegreso() const
{
    return fechaRegreso;
}

void ViajeInterProvinciales::setFechaRegreso(const QString &value)
{
    fechaRegreso = value;
}

int ViajeInterProvinciales::getCantidadProvincia() const
{
    return cantidadProvincia;
}

void ViajeInterProvinciales::setCantidadProvincia(int value)
{
    cantidadProvincia = value;
}
