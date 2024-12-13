#include <stdio.h>
#include <stdbool.h>

struct cadastro{
    char nome[50][5];
    char endereco[50][5];
    int idade[5];
    int telefone[5];
};

int main() {
    bool loop = true;
    int choosed;
    int pessoas_cad = 0;
    struct cadastro cad;
    
    while (loop == true){
        printf("Menu da Agenda:\n\n");
        printf("1 - Cadastro\n");
        printf("2 - Pesquisa de registro por idade\n");
        printf("3 - Classificação alfabética\n");
        printf("4 - Alteração de registro digitado com erro\n");
        printf("5 - Sair do Menu\n\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choosed);
        getchar();
        
        if(choosed == 1){
            if(pessoas_cad < 5){
                printf("\nDigite o nome de usuário: ");
                fgets(cad.nome[pessoas_cad], 50, stdin);
                printf("%s", cad.nome[pessoas_cad]);
            
                printf("Digite o endereço de usuário: ");
                fgets(cad.endereco[pessoas_cad], 50, stdin);
                printf("%s", cad.endereco[pessoas_cad]);
            
                printf("Digite o idade de usuário: ");
                scanf("%d", &cad.idade[pessoas_cad]);
                printf("%d\n", cad.idade[pessoas_cad]);
            
                printf("Digite o telefone de usuário: ");
                scanf("%d", &cad.telefone[pessoas_cad]);
                printf("%d\n\n", cad.telefone[pessoas_cad]);
            
                ++pessoas_cad;
            }
            else{
                printf("\nNúmero de usuários chegou ao máximo\n\n");
            }
        }
        
        // não tá funcionando ainda
        if(choosed == 4){
            printf("\nQual usuário deseja alterar o registro?\n\n");
            for(int i=0; i<5; ++i){
                printf("%d - %s:\n %s\n %d\n %d\n\n", i, cad.nome[i], cad.endereco[i], cad.idade[i], cad.telefone[i]);
            }
        }
        //
        
        if(choosed == 5){
            printf("\nSaindo do Menu...");
            break;
        }
    }
    
    return 0;
}