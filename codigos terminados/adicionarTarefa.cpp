#include <iostream>
#include <string>
# include <stdlib.h>

int adicionarTarefa(){
    int id;
    std::string titulo;
    std::string descricao;
    std:: string data;
    int status;

    std::cout << "Adicionar Nova Tarefa \n";

    printf("Digite o ID: \n");
    scanf("%d",&id);
    
    std:: cout <<"Digite o tiulo:  \n";
    std:: cin >> titulo;

    std:: cout <<"Digite a descrição:  \n";
    std:: cin >> descricao;

    std:: cout <<"Digite a data:  \n";
    std:: cin >> data;
    
    printf("Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): ");
    scanf("%d",&status);
    
    if(status == 1 && 2 && 3){
        printf("Tarefa adicionada com sucesso!");
    }
    else{
       printf("Não foi possivel salvar o texto");
    }
    
    return false;
}

int main(){
    
    int exer = adicionarTarefa();

    return false;
}