#ifndef CAMIONANTIGUO_H
#define CAMIONANTIGUO_H
#include "camion.h"

class CamionAntiguo : public Camion
{
public:
    CamionAntiguo();

    int getAnnoFabricacion() const;
    void setAnnoFabricacion(int value);

    int getCantidadReparaciones() const;
    void setCantidadReparaciones(int value);

private:
    int annoFabricacion;
    int cantidadReparaciones;
};

#endif // CAMIONANTIGUO_H
