#include "camionantiguo.h"

CamionAntiguo::CamionAntiguo() :Camion()
{

}

int CamionAntiguo::getAnnoFabricacion() const
{
    return annoFabricacion;
}

void CamionAntiguo::setAnnoFabricacion(int value)
{
    annoFabricacion = value;
}

int CamionAntiguo::getCantidadReparaciones() const
{
    return cantidadReparaciones;
}

void CamionAntiguo::setCantidadReparaciones(int value)
{
    cantidadReparaciones = value;
}
