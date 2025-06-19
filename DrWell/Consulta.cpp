#include "Consulta.h"
#include "Medico.h"
#include "Paciente.h"

Consulta::Consulta(int id, std::shared_ptr<Medico> med, std::shared_ptr<Paciente> pac, Horario data)
    : consultaId(id), medico(med), paciente(pac), dataHora(data), status("Agendada") {}

int Consulta::getConsultaId() const {
    return consultaId;
}

std::string Consulta::getStatus() const {
    return status;
}