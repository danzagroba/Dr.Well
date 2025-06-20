#include "Usuario.h"
#include <iostream>

// Definições vazias, pois a lógica específica
// estará nas classes derivadas (Médico, Secretário)
#include "Medico.h"
#include "Paciente.h"


Usuario::Usuario(std::string nome, std::string cpf, int telefone, std::string email)
    : Pessoa(nome, telefone, cpf), email(email), ativo(true), salario(0.0f) {}

bool Usuario::realizarAutenticacao(const std::string& senhaFornecida) const {
    return this->senha == senhaFornecida && this->ativo;
}

void Usuario::verAgenda(const Medico& medico) const {
    std::cout << "Visualizando agenda do(a) médico(a) " << medico.getNome() << std::endl;
    // Lógica para mostrar a agenda...
}

void Usuario::verConsultas(const Paciente& paciente) const {
    std::cout << "Visualizando histórico de consultas de " << paciente.getNome() << std::endl;
    // Lógica para mostrar as consultas...
}
