#ifndef VIAJEINTERPROVINCIALES_H
#define VIAJEINTERPROVINCIALES_H
#include "viaje.h"
#include <QString>

class ViajeInterProvinciales : public Viaje
{
public://los viajes interprovinciales solo se hacen con camiones modernos...
    ViajeInterProvinciales();

    QString getFechaRegreso() const;
    void setFechaRegreso(const QString &value);

    int getCantidadProvincia() const;
    void setCantidadProvincia(int value);

private:
    QString fechaRegreso;
    int cantidadProvincia;
};

#endif // VIAJEINTERPROVINCIALES_H
