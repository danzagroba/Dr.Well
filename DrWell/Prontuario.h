// prontuario.h
#ifndef PRONTUARIO_H
#define PRONTUARIO_H

#include <QString>
#include <QDateTime>

class Prontuario {
public:
    // Atributos para armazenar as informações do prontuário
    int id;                // ID do prontuário (PRIMARY KEY)
    int id_consulta;       // ID da consulta à qual este prontuário pertence (FOREIGN KEY)
    QString tipoRegistro;  // Tipo de informação registrada (ex: 'Notas da Consulta', 'Diagnóstico')
    QString detalhes;      // O conteúdo formal do prontuário (sintomas, observações, etc.)
    QDateTime dataRegistro;    // Data e hora em que este registro específico foi criado
    QString nomePaciente;  // Nome completo do paciente (geralmente obtido por JOIN para exibição)

    // Construtor para inicializar um objeto Prontuario
    Prontuario(int id, int id_consulta, const QString& tipoRegistro,
               const QString& detalhes, const QDateTime& dataRegistro,
               const QString& nomePaciente);

    // Métodos getters para acessar os atributos
    int getId() const { return id; }
    int getIdConsulta() const { return id_consulta; }
    QString getTipoRegistro() const { return tipoRegistro; }
    QString getDetalhes() const { return detalhes; }
    QDateTime getDataRegistro() const { return dataRegistro; }
    QString getNomePaciente() const { return nomePaciente; }
};

#endif // PRONTUARIO_H
