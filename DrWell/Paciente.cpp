#include "Paciente.h"
#include "Consulta.h"
#include <iostream>

Paciente::Paciente(int id, std::string nome, std::string cpf, int telefone)
    : Pessoa(nome, cpf, telefone), pacienteId(id) {}

void Paciente::exibirInformacoes() const {
    std::cout << "Paciente: " << nome << " | CPF: " << cpf << " | Convênio: " << convenio << std::endl;
}

std::string Paciente::getHistorico() const {
    std::string historico = "Histórico do Paciente " + nome + ":\n";
    for (const auto& consulta_ptr : consultas) {
        if (auto c = consulta_ptr.lock()) { // Converte weak_ptr para shared_ptr
            historico += "- Consulta em " + std::to_string(c->getConsultaId()) + " com status " + c->getStatus() + "\n";
        }
    }
    return historico;
}

void Paciente::adicionarConsulta(std::shared_ptr<Consulta> consulta) {
    consultas.push_back(consulta);
}