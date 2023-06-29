#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <QString>

class Trabajador
{
public:
    Trabajador();


    QString getNombre() const;
    void setNombre(const QString &value);

    QString getCI() const;
    void setCI(const QString &value);

    QString getTelefono() const;
    void setTelefono(const QString &value);

    QString getDireccion() const;
    void setDireccion(const QString &value);

    QString getNivelEscolar() const;
    void setNivelEscolar(const QString &value);

    int getAnnoExperiencia() const;
    void setAnnoExperiencia(int value);

    float getSalarioB() const;
    void setSalarioB(float value);

    int getCantidadDias() const;
    void setCantidadDias(int value);

protected:
    virtual int salario();
    QString nombre;
    QString CI;
    QString telefono;
    QString direccion;
    QString nivelEscolar;
    int annoExperiencia;
    float salarioB;
    int cantidadDias;
};

#endif // TRABAJADOR_H
