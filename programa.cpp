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
            }
        else if (status[i] == 2) {
                cout << "em progresso";
            } 
        else if (status[i] == 3) {
                cout << "concluída";
            }
            cout << "\n";
        
    }
    
}

void editarTarefa(){
    int id;
    cout << "editar tarefa\n";
    cout << "Digite o id da tarefa: ";
    cin >> id;
    for( int i = 0; i < numTarefas; i++){
        if(ids[i] == id){
            cout << "novo titulo: ";
            cin >> titulos[i];
            cout << "nova descrição: ";
            cin >> descricao[i];
            cout << "nova data de vencimento: ";
            cin >> data[i];
            cout << "novo Status (1 - pendente, 2 - em Progresso, 3 - concluida): ";
            cin >> status[i];
            cout << "tarefa editada com sucesso!\n";
            return;
        }
    }
}

void removerTarefa() {
    int id;
    cout << "Remover Tarefa\n";
    cout << "ID da Tarefa: ";
    cin >> id;
    for (int i = 0; i < numTarefas; i++) {
        if (ids[i] == id) {
            for (int j = i; j < numTarefas - 1; j++) {
                ids[j] = ids[j + 1];
                titulos[j] = titulos[j + 1];
                descricao[j] = descricao[j + 1];
                data[j] = data[j + 1];
                status[j] = status[j + 1];
            }
            numTarefas--;
            cout << "Tarefa removida com sucesso!\n";
            return;
        }
    }
    cout << "Tarefa não encontrada.\n";
}
void buscarTarefa() {
    string titulo;
    cout << "Buscar Tarefa\n";
    cin.ignore();
    cout << "Título da Tarefa: ";
    getline(cin, titulo);
    for (int i = 0; i < numTarefas; i++) {
        if (titulos[i] == titulo) {
            cout << "Resultado da busca:\n";
            cout << "ID: " << ids[i] << ", Título: " << titulos[i] << ", Descrição: " << descricao[i];

        }
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
      
        if (opcao == 1) {
            adicionarTarefa();
        } else if (opcao == 2) {
            visualizarTarefa();
        } 
        else if(opcao == 3){
            editarTarefa();
        }
         else if(opcao == 4){
            removerTarefa();
        }
         else if(opcao == 5){
            buscarTarefa();
        }
       
        
        else if (opcao == 0) {
            cout << "Saindo...\n";
        }
    } while (opcao != 0);

    return 0;
}
