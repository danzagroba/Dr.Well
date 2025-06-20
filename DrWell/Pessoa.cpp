#include "Pessoa.h"
#include <iostream>

Pessoa::Pessoa(std::string nome , int telefone, std::string cpf)
    : nome(nome), telefone(telefone), contatoEmergencia(0), cpf(cpf) {}

void Pessoa::setNome(const std::string& nome) {
    this->nome = nome;
}

std::string Pessoa::getNome() const {
    return nome;
}

void Pessoa::setTelefone(int telefone) {
    this->telefone = telefone;
}

int Pessoa::getTelefone() const {
    return telefone;
}

std::string Pessoa::getCPF() const {
    return cpf;
}
