#ifndef OTHELLO_H
#define OTHELLO_H
#include <iostream>

class Othello
{
private:
    int Fila_int;
    int Columna_int;
    std::string NombreJugador1;
    std::string NombreJugador2;
    char TipoFicha;
    char Confirmar_U[8][8];
    bool TiroComfB;
    bool TiroComfN;

public:
    Othello();
    ~Othello();
    void setUbicacion(int, int, bool, bool);
    void setTipoJug(std::string,std::string, char);
    void UbicarFicha();
    bool getTiroComfB();
    bool getTiroComfN();
};

#endif // OTHELLO_H
