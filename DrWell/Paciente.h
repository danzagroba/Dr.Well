#ifndef PACIENTE_H
#define PACIENTE_H

#include "Pessoa.h"
#include <string>
#include <vector>
#include <memory>

class Consulta; // Forward declaration

class Paciente : public Pessoa {
private:
    int pacienteId;
    std::string convenio;
    std::vector<std::weak_ptr<Consulta>> consultas; // Usa weak_ptr para evitar ciclos

public:
    Paciente(int id, std::string nome, std::string cpf, int telefone);
    virtual ~Paciente() = default;

    void exibirInformacoes() const override;
    std::string getHistorico() const;
    void adicionarConsulta(std::shared_ptr<Consulta> consulta);
};

#endif // PACIENTE_H