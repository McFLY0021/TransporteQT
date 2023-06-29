#ifndef CAMIONMODERNO_H
#define CAMIONMODERNO_H
#include "camion.h"

class CamionModerno : public Camion
{
public:
    CamionModerno();
    float getGastoKmxLitro() const;
    void setGastoKmxLitro(float value);

private:
    float gastoKmxLitro;
};

#endif // CAMIONMODERNO_H
