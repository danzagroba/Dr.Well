#include "Secretario.h"
#include "Consulta.h"
#include "Medico.h"
#include <iostream>


Secretario::Secretario(std::string nome, std::string cpf, std::string email, int ramal)
    : Usuario(nome, cpf, 0, email), ramal(ramal) {}

void Secretario::exibirInformacoes() const {
    std::cout << "Secretário(a): " << nome << " | Ramal: " << ramal << std::endl;
}

void Secretario::agendarConsulta(std::shared_ptr<Consulta> consulta) {
    std::cout << "Secretário(a) " << nome << " agendou a consulta " << consulta->getConsultaId() << std::endl;
    // Lógica de agendamento...
}