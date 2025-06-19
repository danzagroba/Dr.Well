#ifndef CONSULTA_H
#define CONSULTA_H

#include <string>
#include <memory>
#include <chrono>

// Forward declarations
class Medico;
class Paciente;

// Usando o alias definido em Pessoa.h
using Horario = std::chrono::system_clock::time_point;

class Consulta {
private:
    int consultaId;
    Horario dataHora;
    float custo;
    std::string status;
    
    // Ponteiros fracos para evitar ciclos de referência
    std::weak_ptr<Medico> medico;
    std::weak_ptr<Paciente> paciente;

public:
    Consulta(int id, std::shared_ptr<Medico> med, std::shared_ptr<Paciente> pac, Horario data);
    ~Consulta() = default;

    int getConsultaId() const;
    std::string getStatus() const;
};

#endif // CONSULTA_H