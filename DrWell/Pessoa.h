#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <chrono>

// Usando um alias para facilitar a manipulação de data/hora
using Horario = std::chrono::system_clock::time_point;

class Pessoa {
protected:
    std::string nome;
    int telefone;
    int contatoEmergencia;
    std::string cpf;
    Horario dataNascimento;

public:
    Pessoa(std::string nome, std::string cpf, int telefone);
    virtual ~Pessoa() = default; // Destrutor virtual é crucial!

    // Métodos virtuais puros tornam a classe abstrata
    virtual void exibirInformacoes() const = 0;

    // Getters e Setters
    void setNome(const std::string& nome);
    std::string getNome() const;

    void setTelefone(int telefone);
    int getTelefone() const;

    std::string getCPF() const;
};

#endif // PESSOA_H