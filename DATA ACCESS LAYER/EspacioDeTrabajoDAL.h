#ifndef ESPACIODETRABAJODAL_H
#define ESPACIODETRABAJODAL_H
#include <cstdio>
#include "EspacioDeTrabajoDTO.h"


class EspacioDeTrabajoDAL
{
public:
    bool eliminar (EspacioDeTrabajoDTO);
    //void PorcentajeOcupacionDiaria();
    //void CantidadReservasMensualesPorDepto();
    EspacioDeTrabajoDTO leer(int nroRegistro);
    bool leerTodos(EspacioDeTrabajoDTO registros[], int cantidad);
    bool agregar(EspacioDeTrabajoDTO registro);
    bool modificar(EspacioDeTrabajoDTO registro, int nroRegistro);
    int getCantidad();
    int buscar(int tipoEspacio);
};

#endif // ESPACIODETRABAJODTO_H
