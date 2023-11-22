#include "othello.h"
#include <iostream>
#include <cmath>

Othello::Othello()
{
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
           Confirmar_U[i][j] = '-'; // Inicializa con un valor predeterminado

        }

    }
    Confirmar_U[3][3]='o';
    Confirmar_U[3][4]='x';
    Confirmar_U[4][4]='o';
    Confirmar_U[4][3]='x';

}

Othello::~Othello()
{}

void Othello::setUbicacion(int _Fila_int, int _Columna_int, bool _TiroComfB,bool _TiroComfN)
{

    Fila_int = _Fila_int;
    Columna_int = _Columna_int;
    TiroComfB = _TiroComfB;
    TiroComfN = _TiroComfN;
}

void Othello::setTipoJug(std::string _NombreJugador1, std::string _NombreJugador2, char _TipoFicha)
{
    NombreJugador1 = _NombreJugador1;
    NombreJugador2 = _NombreJugador2;
    TipoFicha = _TipoFicha;
}




void Othello::UbicarFicha()
{

    int Fila=Fila_int-1;
    int Columna=Columna_int-1;
    if(Confirmar_U[(Fila)][(Columna)]=='o'){
        std::cout << "ERROR. Poscicion ocupada por ficha" << std::endl;
        TiroComfB= false;
    }else if(Confirmar_U[(Fila)][(Columna)]=='x'){
        std::cout << "ERROR. Poscicion ocupada por ficha" << std::endl;
        TiroComfN= false;
    }else{
        Confirmar_U[(Fila)][(Columna)]=TipoFicha;
        TiroComfB= true;
        TiroComfN= true;
    }
    int ColumnaMas,ColumnaMenos,FilaMas,FilaMenos;
    ColumnaMas=Columna+1;
    ColumnaMenos=Columna-1;
    FilaMas=Fila+1;
    FilaMenos=Fila-1;

    bool Comp_op1=true, Comp_op2=true;
    if (TipoFicha=='o') {
        if(Columna!=8){
           int Recorrer=0;
           for (Recorrer = ColumnaMas; Recorrer <= 8; ++Recorrer) {
               if (Confirmar_U[Fila][Recorrer]=='-' && Comp_op1==true) {
                   Recorrer=8;
                   Comp_op1=false;
                   Comp_op2=false;
               } else if(Confirmar_U[Fila][Recorrer]=='o' && Comp_op2==true){
                    int Recorrer2=0;
                   for (Recorrer2 = ColumnaMas; Recorrer2 <= Recorrer; ++Recorrer2) {
                       Confirmar_U[Fila][Recorrer2]='o';
                   }
                   Recorrer=8;
                   Comp_op1=false;
                   Comp_op2=false;
               }else{

               }
           }
        }
        Comp_op1=true;
        Comp_op2=true;
        if(Columna!=0){
           int Recorrer=0;
           for (Recorrer = ColumnaMenos; Recorrer >= 0; --Recorrer) {
               if (Confirmar_U[Fila][Recorrer]=='-' && Comp_op1==true) {
                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               } else if(Confirmar_U[Fila][Recorrer]=='o' && Comp_op2==true){
                    int Recorrer2=0;
                   for (Recorrer2 = ColumnaMenos; Recorrer2 >= Recorrer; --Recorrer2) {
                       Confirmar_U[Fila][Recorrer2]='o';
                   }
                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               }else{

               }
           }
        }
        Comp_op1=true;
        Comp_op2=true;
        if(Fila!=8){
           int Recorrer=0;
           for (Recorrer = FilaMas; Recorrer < 8; ++Recorrer) {
               if (Confirmar_U[Recorrer][Columna]=='-' && Comp_op1==true) {
                   Recorrer=8;
                   Comp_op1=false;
                   Comp_op2=false;
               } else if(Confirmar_U[Recorrer][Columna]=='o' && Comp_op2==true){
                    int Recorrer2=0;
                   for (Recorrer2 = FilaMas; Recorrer2 <= Recorrer; ++Recorrer2) {
                       Confirmar_U[Recorrer2][Columna]='o';
                   }
                   Recorrer=8;
                   Comp_op1=false;
                   Comp_op2=false;
               }else{

               }
           }
        }
        Comp_op1=true;
        Comp_op2=true;
        if(Fila!=0){
           int Recorrer=0;
           for (Recorrer = FilaMenos; Recorrer > 0; --Recorrer) {
               if (Confirmar_U[Recorrer][Columna]=='-' && Comp_op1==true) {
                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               } else if(Confirmar_U[Recorrer][Columna]=='o' && Comp_op2==true){
                   int Recorrer2=0;
                   for (Recorrer2 = FilaMenos; Recorrer2 >= Recorrer; --Recorrer2) {

                       Confirmar_U[Recorrer2][Columna]='o';

                   }

                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               }else{

               }
           }
        }
    }
    Comp_op1=true;
    Comp_op2=true;
    if (TipoFicha=='x') {

        if(Columna!=8){
           int Recorrer=0;
           for (Recorrer = ColumnaMas; Recorrer <= 8; ++Recorrer) {
               if (Confirmar_U[Fila][Recorrer]=='-' && Comp_op1==true) {
                   Recorrer=8;
                   Comp_op1=false;
                   Comp_op2=false;
               } else if(Confirmar_U[Fila][Recorrer]=='x' && Comp_op2==true){
                    int Recorrer2=0;
                   for (Recorrer2 = ColumnaMas; Recorrer2 <= Recorrer; ++Recorrer2) {
                       Confirmar_U[Fila][Recorrer2]='x';
                   }
                   Recorrer=8;
                   Comp_op1=false;
                   Comp_op2=false;
               }else{

               }
           }
        }
        Comp_op1=true;
        Comp_op2=true;
        if(Columna!=0){
           int Recorrer=0;
           for (Recorrer = ColumnaMenos; Recorrer >= 0; --Recorrer) {
               if (Confirmar_U[Fila][Recorrer]=='-' && Comp_op1==true) {
                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               } else if(Confirmar_U[Fila][Recorrer]=='x' && Comp_op2==true){
                    int Recorrer2=0;
                   for (Recorrer2 = ColumnaMenos; Recorrer2 >= Recorrer; --Recorrer2) {
                       Confirmar_U[Fila][Recorrer2]='x';
                   }
                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               }else{

               }
           }
        }
        Comp_op1=true;
        Comp_op2=true;
        if(Fila!=8){
           int Recorrer=0;
           for (Recorrer = FilaMas; Recorrer < 8; ++Recorrer) {
               if (Confirmar_U[Recorrer][Columna]=='-' && Comp_op1==true) {
                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               } else if(Confirmar_U[Recorrer][Columna]=='x' && Comp_op2==true){
                    int Recorrer2=0;
                   for (Recorrer2 = FilaMas; Recorrer2 <= Recorrer; ++Recorrer2) {
                       Confirmar_U[Recorrer2][Columna]='x';
                   }
                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               }else{

               }
           }
        }
        Comp_op1=true;
        Comp_op2=true;
        if(Fila!=0){
           int Recorrer=0;
           for (Recorrer = FilaMenos; Recorrer > 0; --Recorrer) {
               if (Confirmar_U[Recorrer][Columna]=='-' && Comp_op1==true) {
                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               } else if(Confirmar_U[Recorrer][Columna]=='x' && Comp_op2==true){
                    int Recorrer2=0;
                   for (Recorrer2=FilaMenos; Recorrer2 >= Recorrer; --Recorrer2) {
                        Confirmar_U[Recorrer2][Columna]='x';
                   }
                   Recorrer=0;
                   Comp_op1=false;
                   Comp_op2=false;
               }else{

               }
           }
        }

    }



    int Compl_o=0,Compl_x=0,esp=64;
    //Imprimir matriz
    for (int Fila_1 = 0; Fila_1 < 8; ++Fila_1) {
        for (int Columna_1 = 0; Columna_1 < 8; ++Columna_1) {
           if (Confirmar_U[Fila_1][Columna_1]=='o') {
               ++Compl_o;
           }else if (Confirmar_U[Fila_1][Columna_1]=='x'){
               ++Compl_x;
           }
           if ((Compl_o+Compl_x)==esp) {
               if(Compl_o > Compl_x){
                   std::cout << "Se acabo el juego. Elganador es " << NombreJugador1 << std::endl;
                   exit(EXIT_FAILURE);
               }else{
                   std::cout << "Se acabo el juego. Elganador es " << NombreJugador2 << std::endl;
                   exit(EXIT_FAILURE);
               }

           }else{
             std::cout << Confirmar_U[Fila_1][Columna_1] << ' ';
           }
        }

        std::cout << std::endl;
    }
}

bool Othello::getTiroComfB()
{
    return TiroComfB;
}

bool Othello::getTiroComfN()
{
    return TiroComfN;
}
