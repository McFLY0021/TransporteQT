#ifndef TRABAJADORADMIN_H
#define TRABAJADORADMIN_H
#include "trabajador.h"
#include <QString>

class TrabajadorAdmin : public Trabajador
{
public:
    TrabajadorAdmin();

    QString getCargo() const;
    void setCargo(const QString &value);

protected:
    int salario();
private:
    QString cargo;
};

#endif // TRABAJADORADMIN_H
