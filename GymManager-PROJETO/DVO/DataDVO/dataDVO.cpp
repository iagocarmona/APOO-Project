    #include <iostream>
    #include "dataDVO.h"
    
    using namespace std;

    bool DataDVO::validarDia(int dia){
        try{
            if(dia < 0 || dia > 31){
                throw dia;
            }else
            {
                return true;
            }
        }catch(int error){
            cout << "dia inválido: " << error;
            return false;
        }
    }

    bool DataDVO::validarMes(int mes){
         try{
            if(mes < 0 || mes > 12){
                throw mes;
            }else
            {
                return true;
            }
        }catch(int error){
            cout << "mês inválido: " << error;
            return false;
        }
    }
    
    bool DataDVO::validarAno(int ano){
         try{
            if(ano < 1960 || ano > 2100){
                throw ano;
            }else
            {
                return true;
            }
        }catch(int error){
            cout << "Ano inválido: " << error;
            return false;
        }
    }

    bool DataDVO::validarDataNascimento(int dateBirth){
         try{
            if(dateBirth < 1960 || dateBirth > 2022){
                throw dateBirth;
            }else
            {
                return true;
            }
        }catch(int error){
            cout << "data de nascimento inválida: " << error;
            return false;
        }
    }