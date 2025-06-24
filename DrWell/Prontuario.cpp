// prontuario.cpp
#include "Prontuario.h"

// Implementação do construtor da classe Prontuario
Prontuario::Prontuario(int id, int id_consulta, const QString& tipoRegistro,
                       const QString& detalhes, const QDateTime& dataRegistro,
                       const QString& nomePaciente)
    : id(id),
    id_consulta(id_consulta),
    tipoRegistro(tipoRegistro),
    detalhes(detalhes),
    dataRegistro(dataRegistro),
    nomePaciente(nomePaciente)
{
    // O corpo do construtor pode ficar vazio se apenas inicializar membros
}
