#ifndef CAMION_H
#define CAMION_H
#include <QString>

class Camion
{
public:
    Camion();

    QString getChapa() const;
    void setChapa(const QString &value);

    QString getMarca() const;
    void setMarca(const QString &value);

    virtual void funcionPolimorfica();

protected:
    QString chapa;
    QString marca;
};

#endif // CAMION_H
