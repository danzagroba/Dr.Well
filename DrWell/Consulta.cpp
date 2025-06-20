#include "Consulta.h"
#include "Medico.h"
#include "Paciente.h"

Consulta::Consulta(int id,Horario data, std::shared_ptr<Medico> med, std::shared_ptr<Paciente> pac)
    : consultaId(id), dataHora(data), status("Agendada"), medico(med), paciente(pac) {}

int Consulta::getConsultaId() const {
    return consultaId;
}

std::string Consulta::getStatus() const {
    return status;
}
