#include "Medico.h"
#include <iostream>

Medico::Medico(std::string crm, std::string nome, std::string cpf, std::string email)
    : Usuario(nome, cpf, 0, email), crm(crm) {}

void Medico::exibirInformacoes() const {
    std::cout << "Médico: " << nome << " | CRM: " << crm << " | Especialidade: " << especialidade << std::endl;
}

void Medico::adicionarConsulta(std::shared_ptr<Consulta> consulta){
    // Lógica para adicionar na agenda
}