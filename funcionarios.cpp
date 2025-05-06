//atividade realizada em dupla por Gustavo Murai e Igor Murai
#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Funcionario {
    int prontuario;
    string nome;
    double salario;
};

vector<Funcionario> lista;

void incluir() {
    Funcionario f;
    cout << "Digite o prontuario: ";
    cin >> f.prontuario;
    cin.ignore();

    for (Funcionario func : lista) {
        if (func.prontuario == f.prontuario) {
            cout << "Funcionario com esse prontuario ja existe!\n";
            return;
        }
    }

    cout << "Digite o nome: ";
    getline(cin, f.nome);
    cout << "Digite o salario: ";
    cin >> f.salario;

    lista.push_back(f);
    cout << "Funcionario incluido com sucesso!\n";
}

void excluir() {
    int pront;
    cout << "Digite o prontuario do funcionario a excluir: ";
    cin >> pront;

    for (int i = 0; i < lista.size(); i++) {
        if (lista[i].prontuario == pront) {
            lista.erase(lista.begin() + i);
            cout << "Funcionario excluido com sucesso!\n";
            return;
        }
    }

    cout << "Funcionario nao encontrado!\n";
}

void pesquisar() {
    int pront;
    cout << "Digite o prontuario a pesquisar: ";
    cin >> pront;

    for (Funcionario f : lista) {
        if (f.prontuario == pront) {
            cout << "Nome: " << f.nome << endl;
            cout << "Salario: " << f.salario << endl;
            return;
        }
    }

    cout << "Funcionario nao encontrado!\n";
}

void listar() {
    if (lista.empty()) {
        cout << "Nenhum funcionario cadastrado.\n";
        return;
    }

    double totalSalarios = 0.0;

    for (Funcionario f : lista) {
        cout << "Prontuario: " << f.prontuario << endl;
        cout << "Nome: " << f.nome << endl;
        cout << "Salario: " << f.salario << endl;
        cout << "---------------------------\n";
        totalSalarios += f.salario;
    }

    cout << "Total dos salarios: R$ " << totalSalarios << endl;
}

int main() {
    int opcao;

    do {
        cout << "\n--- MENU ---\n";
        cout << "0 - Sair\n";
        cout << "1 - Incluir\n";
        cout << "2 - Excluir\n";
        cout << "3 - Pesquisar\n";
        cout << "4 - Listar\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1: incluir(); break;
            case 2: excluir(); break;
            case 3: pesquisar(); break;
            case 4: listar(); break;
            case 0: cout << "Saindo...\n"; break;
            default: cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    return 0;
}
