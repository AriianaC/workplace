//#include "InvitadoDAL.h"
//#include <cstdio>
//#include "InvitadoDTO.h"
//#include "FUNCIONES_ADMIN.h"
//#include "FUNCIONES_FRONT.h"
//#include "FUNCIONES_USER.h"
//#include "PersonaDTO.h"
//#include <iostream>
//using namespace std;
//
//
//const char RUTA_INVITADO [] = "Invitado.data";
//
//
//
//void InvitadoDAL::guardar(InvitadoDTO invitado)
//{
//    FILE* p;
//    p = fopen(RUTA_INVITADO,"ab");
//
//    if (p == nullptr)
//    {
//        cout<<"Error al abrir el archivo" <<endl;
//        exit(1552);
//    }
//    else
//    {
//        fwrite(&invitado, sizeof(InvitadoDTO), 1, p);
//        fclose(p);
//    }
//}
//bool InvitadoDAL::agregar (InvitadoDTO dto)
//{
//    bool agregar = false;
//    FILE *p;
//    p = fopen(RUTA_INVITADO,"ab");
//    if (p!=NULL)
//    {
//        fwrite(&dto, sizeof (InvitadoDTO),1,p);
//        fclose (p);
//        agregar = true;
//    }
//    return agregar;
//}
//
//bool InvitadoDAL::modificar(InvitadoDTO dto)
//{
//    InvitadoDTO aux;
//    bool modificar = false;
//    FILE *p;
//    p = fopen(RUTA_INVITADO,"rb+");
//    if (p!=NULL)
//    {
//        while(fread(&dto, sizeof (InvitadoDTO),1,p))
//        {
//            if(dto.getDni()==aux.getDni())
//            {
//                fseek(p,sizeof dto*(-1),SEEK_CUR);
//                fwrite(&dto, sizeof (InvitadoDTO),1,p);
//                fclose (p);
//                modificar = true;
//            }
//        }
//    }
//}
//void InvitadoDAL::leerInvitados(InvitadoDTO invitados[], int cant)
//{
//    FILE* p;
//    p= fopen(RUTA_INVITADO,"rb");
//
//    if(p==nullptr)
//    {
//        return;
//    }
//
//    fread(invitados, sizeof(InvitadoDTO),cant,p);
//    fclose(p);
//}
//
//int InvitadoDAL::cantidadInvitados()
//{
//    FILE *p;
//    int cantidad=0;
//    p=fopen(RUTA_INVITADO,"rb");
//
//    if (p==nullptr)
//    {
//        return 0;
//    }
//
//    fseek(p,0,SEEK_END);
//    cantidad=ftell(p)/sizeof(InvitadoDTO);
//    fclose (p);
//
//    return cantidad;
//}

