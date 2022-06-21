#include "pagamento.h"

    void Pagamento::setValorAPagar(int valorAPagar){
        this->valorAPagar = valorAPagar;
    }
    int Pagamento::getValorAPagar(){
        return this->valorAPagar;
    }
    void Pagamento::setDataPagamento(Data dataPagamento){
        this->dataPagamento = dataPagamento;
    }
    Data Pagamento::getDataPagamento(){
        return this->dataPagamento;
    }
    void Pagamento::setDataVencimento(Data datVencimento){
        this->dataVencimento = datVencimento;
    }
    Data Pagamento::getDataVencimento(){
        return this->dataVencimento;
    }
    void Pagamento::setAluno(Aluno* aluno){
        this->aluno = aluno;
    }
    Aluno* Pagamento::getAluno(){
        return this->aluno;
    }