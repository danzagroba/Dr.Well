#include "Consulta.h"
#include "Medico.h"
#include "Paciente.h"

Consulta::Consulta(int id, Horario data, float custo, std::string status, std::shared_ptr<Medico> med, std::shared_ptr<Paciente> pac)
    : consultaId(id), dataHora(data), custo(custo), status(status), medico(med), paciente(pac) {

    // this->medicoCpf = med->getCpf();
    // this->pacienteId = pac->getId();
}

// Construtor para carregar do banco (com IDs)
Consulta::Consulta(int id, Horario data, float custo, std::string status, std::string medCpf, int pacId)
    : consultaId(id), dataHora(data), custo(custo), status(status), medicoCpf(medCpf), pacienteId(pacId) {}
