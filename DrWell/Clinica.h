#ifndef CLINICA_H
#define CLINICA_H

#include <string>
#include <vector>
#include <set>
#include <memory>
#include "Pessoa.h"
#include "Medico.h"
#include "Paciente.h"
#include "Secretario.h"
#include "Administrador.h"

class Clinica {
private:
    std::string cnpj;
    
    // Usamos shared_ptr para gerenciar o tempo de vida dos objetos
    // e permitir polimorfismo.
    std::vector<std::shared_ptr<Medico>> medicos;
    std::vector<std::shared_ptr<Paciente>> pacientes;
    std::vector<std::shared_ptr<Secretario>> secretarios;
    std::vector<std::shared_ptr<Administrador>> administradores;
    
    // Um set para todas as pessoas, para fácil acesso.
    // O comparador customizado é necessário para std::set de ponteiros.
    struct SharedPtrCompare {
        bool operator()(const std::shared_ptr<Pessoa>& a, const std::shared_ptr<Pessoa>& b) const {
            return a->getCPF() < b->getCPF();
        }
    };
    std::set<std::shared_ptr<Pessoa>, SharedPtrCompare> pessoas;

public:
    Clinica(std::string cnpj);
    ~Clinica() = default;

    void adicionarPessoa(std::shared_ptr<Pessoa> pessoa);
    void listarPessoas() const;
};

#endif // CLINICA_H