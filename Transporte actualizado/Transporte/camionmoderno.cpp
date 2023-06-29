#include "camionmoderno.h"

CamionModerno::CamionModerno() : Camion()
{

}

float CamionModerno::getGastoKmxLitro() const
{
    return gastoKmxLitro;
}

void CamionModerno::setGastoKmxLitro(float value)
{
    gastoKmxLitro = value;
}
