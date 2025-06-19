#include "Clinica.h"
#include <iostream>
#include <typeinfo>

Clinica::Clinica(std::string cnpj) : cnpj(cnpj) {}

void Clinica::adicionarPessoa(std::shared_ptr<Pessoa> pessoa) {
    pessoas.insert(pessoa);

    // Adiciona a pessoa ao vetor específico (Médico, Paciente, etc.)
    if (auto med = std::dynamic_pointer_cast<Medico>(pessoa)) {
        medicos.push_back(med);
    } else if (auto pac = std::dynamic_pointer_cast<Paciente>(pessoa)) {
        pacientes.push_back(pac);
    } else if (auto sec = std::dynamic_pointer_cast<Secretario>(pessoa)) {
        secretarios.push_back(sec);
    } else if (auto adm = std::dynamic_pointer_cast<Administrador>(pessoa)) {
        administradores.push_back(adm);
    }
}

void Clinica::listarPessoas() const {
    std::cout << "--- Listando todas as Pessoas na Clínica ---" << std::endl;
    for (const auto& pessoa_ptr : pessoas) {
        pessoa_ptr->exibirInformacoes();
    }
    std::cout << "--------------------------------------------" << std::endl;
}