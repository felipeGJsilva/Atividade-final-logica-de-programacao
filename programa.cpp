#include <iostream>
#include <string>
using namespace std;

const int MAX_TAREFAS = 100;

int ids[MAX_TAREFAS];
string titulos[MAX_TAREFAS];
string descricao[MAX_TAREFAS];
string data[MAX_TAREFAS];
int status[MAX_TAREFAS];

int numTarefas = 0;

void adicionarTarefa() {
    cout << "adicionar Nova Tarefa\n";

    cout << "digite o ID: ";
    cin >> ids[numTarefas];
    cin.ignore(); // Ignorar o caractere de nova linha deixado pelo `cin`.

    cout << "digite o titulo: ";
    getline(cin, titulos[numTarefas]);

    cout << "digite a descrição: ";
    getline(cin, descricao[numTarefas]);

    cout << "digite a data: ";
    getline(cin, data[numTarefas]);

    cout << "status (1 - pendente, 2 - em Progresso, 3 - concluída): ";
    cin >> status[numTarefas];

    if (status[numTarefas] >= 1 && status[numTarefas] <= 3) {
        cout << "tarefa adicionada com sucesso!\n";
        numTarefas++;
    } else {
        cout << "não foi possível salvar a tarefa\n";
    }
     system("clear");
}

void visualizarTarefa() {
     system("clear");
    cout << "lista de tarefas\n";
    for (int i = 0; i < numTarefas; i++) {
        cout << "ID: " << ids[i] << ", titulo: " << titulos[i] << ", descrição: " << descricao[i]
             << ", data de vencimento: " << data[i] << ", status: ";
        
        if (status[i] == 1) {
            cout << "pendente";
        } else if (status[i] == 2) {
            cout << "em progresso";
        } else if (status[i] == 3) {
            cout << "concluída";
        }
        cout << "\n";
        
    }
    
}

int main() {
    int opcao;

    do {
        cout << "Sistema de Gerenciamento de Tarefas\n";
        cout << "1. Adicionar Tarefa\n";
        cout << "2. Visualizar Tarefas\n";
        cout << "3. Editar Tarefa\n";
        cout << "4. Remover Tarefa\n";
        cout << "5. Buscar Tarefa\n";
        cout << "6. filtrar tarefas por status\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
      system("clear");
        if (opcao == 1) {
            adicionarTarefa();
        } else if (opcao == 2) {
            visualizarTarefa();
        } else if (opcao == 0) {
            cout << "Saindo...\n";
        }
    } while (opcao != 0);

    return 0;
}
