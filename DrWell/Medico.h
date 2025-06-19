#ifndef MEDICO_H
#define MEDICO_H

#include "Usuario.h"
#include <string>
#include <vector>
#include <memory>

class Consulta; // Forward declaration

class Medico : public Usuario {
private:
    std::string crm;
    std::string especialidade;
    std::vector<std::weak_ptr<Consulta>> agenda; // Usa weak_ptr para evitar ciclos

public:
    Medico(std::string crm, std::string nome, std::string cpf, std::string email);
    virtual ~Medico() = default;

    void exibirInformacoes() const override;
    void adicionarConsulta(std::shared_ptr<Consulta> consulta);
};

#endif // MEDICO_H