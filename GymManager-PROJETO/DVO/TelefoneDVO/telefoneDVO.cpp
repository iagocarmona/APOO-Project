#include <string>
#include <iostream>
#include "telefoneDVO.h"

using namespace std;

    bool TelefoneDVO::validarCodPais(int codPais){
        try{
           if(codPais < 0 || codPais > 1000){
                throw codPais;
           }
           return true;
        }
        catch(int codPais){
            cout << "Código do pais inválido: " << codPais;
            return false;
        }
    }

    bool TelefoneDVO::validarCodCidade(int codCidade){
        try{
           if(codCidade < 0 || codCidade > 100){
                throw codCidade;
           }
           return true;
        }
        catch(int codCidade){
            cout << "Código de cidade inválido: " << codCidade;
            return false;
        }
    }

    bool TelefoneDVO::validarNumLocal(int numLocal){
        try{
           if(numLocal < 10000000 || numLocal > 99999999){
                throw numLocal;
           }
           return true;
        }
        catch(int numLocal){
            cout << "Número de telefone inválido: " << numLocal;
            return false;
        }
    }