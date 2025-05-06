# 💼 Sistema de Gerenciamento de Funcionários (C++)

Projeto desenvolvido como atividade da disciplina de **Estrutura de Dados**, utilizando a linguagem **C++** com foco em manipulação de estruturas (`struct`) e vetores.

---

## 🔧 Funcionalidades

- 📌 **Incluir** um novo funcionário (com verificação de prontuário único)
- ❌ **Excluir** funcionário pelo prontuário
- 🔍 **Pesquisar** funcionário pelo prontuário
- 📋 **Listar** todos os funcionários cadastrados e total dos salários

---

## 🧱 Estrutura do Funcionário

```cpp
struct Funcionario {
    int prontuario;
    string nome;
    double salario;
};
