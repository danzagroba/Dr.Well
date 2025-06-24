#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Usuario.h"

class Administrador : public Usuario {
private:
    int adminId;
    bool superAdministrador;

public:
    Administrador(int id, std::string nome, std::string cpf, std::string email, bool isSuper);
    virtual ~Administrador() = default;

    void exibirInformacoes() const override;
    bool isSuperAdmin() const;
    int getId() const { return adminId;}
};

#endif // ADMINISTRADOR_H
