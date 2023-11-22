#include <iostream>
#include <cstdlib>

int CharToInt(char FilaChar, char ColumnaChar, bool FilaC, bool ColumnaC){
    if (FilaC==true && ColumnaC==false){
        int Fila_int;
        switch (FilaChar) {
        case 'a':
            Fila_int=1;
            return Fila_int;
            break;
        case 'b':
            Fila_int=2;
            return Fila_int;
            break;
        case 'c':
            Fila_int=3;
            return Fila_int;
            break;
        case 'd':
            Fila_int=4;
            return Fila_int;
            break;
        case 'e':
            Fila_int=5;
            return Fila_int;
            break;
        case 'f':
            Fila_int=6;
            return Fila_int;
            break;
        case 'g':
            Fila_int=7;
            return Fila_int;
            break;
        case 'h':
            Fila_int=8;
            return Fila_int;
            break;
        default:
            std::cout << "ERROR. Fila ingresado no valida" << std::endl;
            break;
        }
    }else if (ColumnaC==true && FilaC==false){
        int Columna_int;
        switch (ColumnaChar) {
        case '1':
            Columna_int=1;
            return Columna_int;
            break;
        case '2':
            Columna_int=2;
            return Columna_int;
            break;
        case '3':
            Columna_int=3;
            return Columna_int;
            break;
        case '4':
            Columna_int=4;
            return Columna_int;
            break;
        case '5':
            Columna_int=5;
            return Columna_int;
            break;
        case '6':
            Columna_int=6;
            return Columna_int;
            break;
        case '7':
            Columna_int=7;
            return Columna_int;
            break;
        case '8':
            Columna_int=8;
            return Columna_int;
            break;
        default:
            std::cout << "ERROR. Fila ingresado no valida" << std::endl;
            break;
        }
    }

}
