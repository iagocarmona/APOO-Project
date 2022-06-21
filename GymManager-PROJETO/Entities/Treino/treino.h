#pragma once
#include <string>
#include "../DAO/TreinoDAO/treinoDAO.h"
#include "../TAD/DataTAD/data.h"

using namespace std;

class Treino {
    int id; 
    Data data;

    public: 
        void setId(int );
        int getId();
        void setData(Data );
        Data getData();
};