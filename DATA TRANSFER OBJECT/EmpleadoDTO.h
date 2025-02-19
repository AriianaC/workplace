#ifndef EMPLEADODTO_H
#define EMPLEADODTO_H

#include "PersonaDTO.h"

class EmpleadoDTO : public PersonaDTO
{
private:
    int _legajo;
    int _sector;
    bool _estado;

public:
    EmpleadoDTO();

    void setLegajo(int legajo);
    void setTipo(int tipo);
    void setSector(int sector);
    void setEstado(bool estado);

    int getLegajo();
    int getTipo();
    int getSector();
    bool getEstado();

    void cargar(int dni=0);
    void mostrar(int dni=0);
};

#endif // EMPLEADODTO_H
