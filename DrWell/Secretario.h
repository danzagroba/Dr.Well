#ifndef SECRETARIO_H
#define SECRETARIO_H

#include "Usuario.h"
#include <vector>
#include <memory>

class Medico; // Forward declaration
class Consulta;

class Secretario : public Usuario {
private:
    int ramal;
    std::vector<std::weak_ptr<Medico>> medicosResponsaveis;

public:
    Secretario(std::string nome, std::string cpf, std::string email, int ramal);
    virtual ~Secretario() = default;
    
    void exibirInformacoes() const override;
    void agendarConsulta(std::shared_ptr<Consulta> consulta);
};

#endif // SECRETARIO_H