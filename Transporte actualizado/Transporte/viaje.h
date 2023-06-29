#ifndef VIAJE_H
#define VIAJE_H
#include <QDateTime>
#include "camion.h"

class Viaje
{
public:
    Viaje();
    float getCargaTransportada() const;
    void setCargaTransportada(float value);

    float getKmRecorrido() const;
    void setKmRecorrido(float value);

    QDateTime getFechaInicio() const;
    void setFechaInicio(const QDateTime &value);

    QDateTime getFechaFin() const;
    void setFechaFin(const QDateTime &value);

    Camion getCamion() const;
    void setCamion(const Camion &value);

protected:
    QDateTime fechaInicio;
    QDateTime fechaFin;
    double cargaTransportada;
    double kmRecorrido;
    Camion camion;
};

#endif // VIAJE_H
