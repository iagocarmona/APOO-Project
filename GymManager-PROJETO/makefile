all:
	g++ -g -c Controllers/pagamentoController.cpp
	g++ -g -c DAO/AlunoDAO/alunoDAO.cpp
	g++ -g -c DAO/TreinoDAO/treinoDAO.cpp
	g++ -g -c DVO/DataDVO/dataDVO.cpp
	g++ -g -c DVO/TelefoneDVO/telefoneDVO.cpp
	g++ -g -c Entities/Aluno/aluno.cpp
	g++ -g -c Entities/AlunoTreina/alunoTreina.cpp
	g++ -g -c Entities/Instrutor/instrutor.cpp
	g++ -g -c Entities/InstrutorTreino/instrutorTreino.cpp
	g++ -g -c Entities/Pagamento/pagamento.cpp
	g++ -g -c Entities/Pessoa/pessoa.cpp
	g++ -g -c Entities/Treino/treino.cpp
	g++ -g -c Entities/Usuario/usuario.cpp
	g++ -g -c Managers/AlunoMgr/alunoMgr.cpp
	g++ -g -c Managers/PagamentoMgr/pagamentoMgr.cpp
	g++ -g -c Managers/TreinoMgr/treinoMgr.cpp
	g++ -g -c System/system.cpp
	g++ -g -c TAD/DataTAD/data.cpp
	g++ -g -c TAD/EnderecoTAD/endereco.cpp
	g++ -g -c TAD/TelefoneTAD/telefone.cpp
	g++ -g -c main.cpp
	g++ -o main *.o
	./main

clear:
	rm ./*.o
	rm main
	