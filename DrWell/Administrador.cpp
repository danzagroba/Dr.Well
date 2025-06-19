#include "Administrador.h"
#include <iostream>

Administrador::Administrador(int id, std::string nome, std::string cpf, std::string email, bool isSuper)
    : Usuario(nome, cpf, 0, email), adminId(id), superAdministrador(isSuper) {}

void Administrador::exibirInformacoes() const {
    std::cout << "Administrador: " << nome << (superAdministrador ? " (Super Admin)" : "") << std::endl;
}

bool Administrador::isSuperAdmin() const {
    return superAdministrador;
}