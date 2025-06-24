#ifndef CONSULTA_H
#define CONSULTA_H

#include <string>
#include <memory>
#include <chrono>
#include <QDate>

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

    // Para quando carregamos do banco
    std::string medicoCRM;    // Novo atributo
    std::string nomePaciente; // Novo atributo
    
    // Ponteiros fracos para evitar ciclos de referência
    std::weak_ptr<Medico> medico;
    std::weak_ptr<Paciente> paciente;

public:
    Consulta(int id, Horario data, float custo, std::string status, std::shared_ptr<Medico> med, std::shared_ptr<Paciente> pac);

    // Construtor para carregar do banco de dados
   Consulta(int id, Horario data, float custo, std::string status, std::string crm, std::string pacNome);

    ~Consulta() = default;

    int getConsultaId() const { return consultaId; }
    std::string getStatus() const { return status; }
    Horario getDataHora() const { return dataHora; }
    float getCusto() const { return custo; }
    std::string getMedicoCpf() const{return medicoCRM;}
    std::string getNomePaciente() const{ return nomePaciente; }

    // Função para converter QDateTime para Horario
    static Horario fromQDateTime(const QDateTime& qdt) {
        return std::chrono::system_clock::from_time_t(qdt.toSecsSinceEpoch());
    }

};

#endif // CONSULTA_H
