#include <iostream>
#include <cstdlib>
#include "othello.h"
#include "Funcional.cpp"

int CharToInt(char,char,bool,bool);


void menu(){
    std::cout << "------------Bienvenido a Othello-------------" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << std::endl;
    }
    std::cout << "Bienvenidos Jugadores Porfavor ingresar sus nombres. " << std::endl;
    std::cout << "El primero juega con blancas, el segundo con negras" << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::cout << std::endl;
    }

    std::string NomJug1,NomJug2;

    std::cout << "Nombre del Jugador 1(Juega con blancas): ";
    std::cin >> NomJug1;
    std::cout << std::endl;
    std::cout << "Nombre del Jugador 2(Juega con negras): ";
    std::cin >> NomJug2;
    std::cout << std::endl;

    Othello Juego1;


    char F_Blanca = 'o', F_Negra = 'x', Fila_F, Columna_F;
    std::string Lanzamiento = "";
    bool Tiro_validoB = true, Tiro_validoN = true, Tiro_valido = true;
    int Comp=0;

    std::cout << "El jugador " << NomJug1 << " inicia, juega con blancas." << std::endl;
    std::cout << "El jugador " << NomJug2 << " juega con negras. " << std::endl;
    std::cout << std::endl;
    char matriz[8][8];
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            matriz[i][j] = '-'; // Inicializa con un valor predeterminado

        }

    }
    matriz[3][3]='o';
    matriz[3][4]='x';
    matriz[4][4]='o';
    matriz[4][3]='x';
    bool FilaC, ColumnaC;

    while (Tiro_valido) {
        if  ((Comp%2)==0 && Tiro_validoB==true){
            std::cout << NomJug1 << " Lanza[Blancas]: ";
            std::cin >> Lanzamiento;
            if (Lanzamiento.length()==2){
                Fila_F = Lanzamiento[0];
                Columna_F = Lanzamiento[1];
                FilaC=true;
                ColumnaC=false;
                int Fila_int=CharToInt(Fila_F,Columna_F,FilaC,ColumnaC);
                FilaC=false;
                ColumnaC=true;
                int Columna_int=CharToInt(Fila_F,Columna_F,FilaC,ColumnaC);
                Juego1.setUbicacion(Fila_int,Columna_int,Tiro_validoB,Tiro_validoN);
                Juego1.setTipoJug(NomJug1,NomJug2,F_Blanca);
                Juego1.UbicarFicha();
                Lanzamiento = "";
                ++Comp;
                Tiro_validoB=Juego1.getTiroComfB();
                Juego1.~Othello();
            }else{
                std::cout << "ERROR. El formato de Ubicacion enviado es incorrecto o error en la poscicion.";
                exit(EXIT_FAILURE);
            }

        }else if(Tiro_validoN==true){
            std::cout << NomJug2 << " Lanza[Negras]: ";
            std::cin >> Lanzamiento;
            if (Lanzamiento.length()==2){
                Fila_F = Lanzamiento[0];
                Columna_F = Lanzamiento[1];
                FilaC=true;
                ColumnaC=false;
                int Fila_int=CharToInt(Fila_F,Columna_F,FilaC,ColumnaC);
                FilaC=false;
                ColumnaC=true;
                int Columna_int=CharToInt(Fila_F,Columna_F,FilaC,ColumnaC);
                Juego1.setUbicacion(Fila_int,Columna_int,Tiro_validoB,Tiro_validoN);
                Juego1.setTipoJug(NomJug1,NomJug2,F_Negra);
                Juego1.UbicarFicha();
                Lanzamiento = "";
                Comp=0;
                Tiro_validoN=Juego1.getTiroComfN();
                Juego1.~Othello();
            }else{
                std::cout << "ERROR. El formato de Ubicacion enviado es incorrecto o error en la poscicion.";
                exit(EXIT_FAILURE);
            }

        }
    }
}
