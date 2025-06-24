#include "Consulta.h"
#include "Medico.h"
#include "Paciente.h"

Consulta::Consulta(int id, Horario data, float custo, std::string status, std::shared_ptr<Medico> med, std::shared_ptr<Paciente> pac)
    : consultaId(id), dataHora(data), custo(custo), status(status), medico(med), paciente(pac) {
}

// Construtor para carregar do banco (com IDs)
Consulta::Consulta(int id, Horario data, float custo, std::string status, std::string crm, std::string pacNome)
    : consultaId(id), dataHora(data), custo(custo), status(status), medicoCRM(crm), nomePaciente(pacNome) {}
