#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
const int MAX_TAREFAS = 100;

int ids[MAX_TAREFAS];
string titulos[MAX_TAREFAS];
string descricao[MAX_TAREFAS];
string data[MAX_TAREFAS];
int status[MAX_TAREFAS];

int numTarefas = 0;


int adicionarTarefa(){
    

    std::cout << "Adicionar Nova Tarefa \n";

    cout << "Digite o ID: ";
    cin >> ids[numTarefas];
    
    std:: cout <<"Digite o tiulo:  ";
    std:: cin >> titulos[numTarefas];

    std:: cout <<"Digite a descrição:  ";
    std:: cin >> descricao[numTarefas];

    std:: cout <<"Digite a data:  ";
    std:: cin >> data[numTarefas];
    
    cout <<"Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): ";
    cin >> status[numTarefas];
    
    if(status[numTarefas] == 1 && 2 && 3){
        printf("Tarefa adicionada com sucesso!");
    }
    else{
       printf("Não foi possivel salvar o texto");
    }
    
    return false;

}

int main(){

    int opcao;
    //interface

    printf("Sistema de Gerenciamento de Tarefas \n");
    printf("1. Adicionar Tarefa \n");
    printf("2. Visualizar Tarefas \n");
    printf("3. Editar Tarefa \n");
    printf("4. Remover Tarefa \n");
    printf("5. Buscar Tarefa \n");
    printf("6. Filtrar Tarefas por Status \n");
    printf("0. Sair \n");
    printf("Escolha uma opção: \n");
    scanf("%d",&opcao);

    if(opcao == 1){
        int execut = adicionarTarefa();
    };

    return false;
}