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
    system("clear");
    cout << "====== Adicionar Nova Tarefa ======\n";

    cout << "*digite o ID: ";
        cin >> ids[numTarefas];
    cin.ignore();

    cout << "*digite o titulo: ";
        getline(cin, titulos[numTarefas]);

    cout << "*digite a descrição: ";
        getline(cin, descricao[numTarefas]);

    cout << "*digite a data: ";
        getline(cin, data[numTarefas]);

    cout << "*status (1 - pendente, 2 - em Progresso, 3 - concluída): ";
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
    cout << "====== lista de tarefas ======\n";
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
     system("clear");
     
    
    int id;
    int escolha;
    cout << " ====== editar tarefa ======\n";
    cout << " tarefas existentes: ";
    for (int i = 0; i < numTarefas; i++) {
        cout << "ID: " << ids[i] << ", Título: " << titulos[i] << "\n";
    }
    cout << "Digite o id da tarefa: ";
    cin >> id;
    
     for (int i = 0; i < numTarefas; i++) {
        if (ids[i] == id) {
            int escolha;
            system("clear");
            cout << "---    O que você quer editar? (1 - Novo Título, 2 - Nova Descrição, 3 - Nova Data de Vencimento, 4 - Novo Status, 5 - Editar Tudo): ";
            cin >> escolha;
            
            
            if (escolha == 1) {
                cout << "---    Novo Título: ";
                cin >> titulos[i];
                system("clear");
            } 
            else if (escolha == 2) {
                cout << "---    Nova Descrição: ";
                cin >> descricao[i];
                system("clear");
            } else if (escolha == 3) {
                cout << "---    Nova Data de Vencimento: ";
                cin >> data[i];
                system("clear");
            } else if (escolha == 4) {
                cout << "---    Novo Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): ";
                cin >> status[i];
                system("clear");
            } else if (escolha == 5) {
                cout << "---    Novo Título: ";
                cin >> titulos[i];
                 cin.ignore();
                cout << "---    Nova Descrição: ";
                 cin.ignore();
                cin >> descricao[i];
                cout << "---    Nova Data de Vencimento: ";
                cin >> data[i];
                cin.ignore();
                cout << "---    Novo Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): ";
                cin >> status[i];
                 cin.ignore();
            }
            
            cout << "tarefa editada com sucesso!\n";
            return;
        }
    }
}

void removerTarefa() {
    system("clear");
    for (int i = 0; i < numTarefas; i++) {
        cout << "ID: " << ids[i] << ", Título: " << titulos[i] << "\n";
    }
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
    system("clear");
}
void buscarTarefa() {
     system("clear");
   string titulo;
    cout << "Buscar Tarefa\n";
     for (int i = 0; i < numTarefas; i++) {
        cout << " Título: " << titulos[i] << "\n";
    }
    cout << "Título da Tarefa: ";
    cin >> titulo;
    
     for (int i = 0; i < numTarefas; i++) {
        if (titulos[i] == titulo) {
         
            cout << "Resultado da busca:\n";
            cout << "ID: " << ids[i] << ", Título: " << titulos[i] << ", Descrição: " << descricao[i] << endl;
            return; 
        }
    }

    cout << "Tarefa não encontrada.\n";
}


void filtrarTarefas(int filtrarStatus){
     system("clear");
    cout << "Tarefas";

    if (filtrarStatus == 1) {
        cout << "Pendentes:\n";
    } else if (filtrarStatus == 2) {
        cout << "Em Progresso:\n";
    } else if (filtrarStatus == 3) {
        cout << "Concluídas:\n";
    }
    int numFiltroStatus = 0;
    for(int i = 0; i < numTarefas; i++){
        if (status[i] == filtrarStatus) {
            cout << "ID: " << ids[i] << ", Título: " << titulos[i] << ", Descrição: " << descricao[i]
                 << ", Data de Vencimento: " << data[i] << endl;
            numFiltroStatus++;
        }
    }
     system("clear");

    if (numFiltroStatus == 0) {
        cout << "Nenhuma tarefa encontrada com o status selecionado.\n";
        
    }
    
    }


int main() {
    int opcao;
      system("clear");
    do {
        
        cout << "====== Sistema de Gerenciamento de Tarefas ======\n";
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
          else if(opcao == 6){
         int status;
            cout << "Digite o status para filtrar (1 - Pendente, 2 - Em Progresso, 3 - Concluída): ";
            cin >> status;
            filtrarTarefas(status);
        }
        
        else if (opcao == 0) {
            system("clear");
            cout << "Saindo...\n";
        }
    } while (opcao != 0);

    return 0;
}
