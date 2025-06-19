#ifndef USUARIO_H
#define USUARIO_H

#include "Pessoa.h"
#include <string>

// Forward declarations para evitar includes circulares
class Medico;
class Paciente;

class Usuario : public Pessoa {
protected:
    std::string email;
    std::string senha;
    bool ativo;
    float salario;

public:
    Usuario(std::string nome, std::string cpf, int telefone, std::string email);
    virtual ~Usuario() = default;

    virtual bool realizarAutenticacao(const std::string& senhaFornecida) const;
    
    // Métodos virtuais que serão implementados pelas classes filhas
    virtual void verAgenda(const Medico& medico) const;
    virtual void verConsultas(const Paciente& paciente) const;
};

#endif // USUARIO_H