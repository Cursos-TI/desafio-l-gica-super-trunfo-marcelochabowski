#include <stdio.h>
#include <string.h>
// estrutura do codigo com definição de entrada de dados
struct cidade {
    char nome[100];
    int populacao;
    float area;
    float pib;
};
void mostrarmenu() {
    printf("\nescolha dois trunfos\n");
    printf("1 - populacao\n");
    printf("2 - area\n");
    printf("3 - pib\n");
}
// menu de escolha de trunfo

int main () {
    struct cidade cidade1,   cidade2;
    int trunfo1, trunfo2;
    int ponto1, ponto2;

// cadastramento de cidade pelo usuario
printf("jogador 1, digite sua primeira cidade: ");
scanf("%s",cidade1.nome);
printf("digitie a populacao da cidade: ");
scanf("%d",&cidade1.populacao);
printf("digite area da sua cidade: ");
scanf("%f",&cidade1.area);
printf("digite o pib da sua cidade: ");
scanf("%f", &cidade1.pib);
// cadastramento da segunda cidade pelo usuario
printf("jogador 2, digite sua primeira cidade: ");
scanf("%s",cidade2.nome);
printf("digitie a populacao da cidade: ");
scanf("%d",&cidade2.populacao);
printf("digite area da sua cidade: ");
scanf("%f",&cidade2.area);
printf("digite o pib da sua cidade: ");
scanf("%cf", &cidade2.pib);

// escolha do trunfo pelo usuario
mostrarmenu();
printf("jogador 1, escolha seu trunfo: ");
scanf("%d", &trunfo1);
printf("jogador 2, escolha seu trunfo: ");
scanf("%d", &trunfo2);

// comparacao dos trunfos escolhidos
if (trunfo1 == 1 && trunfo2 == 1) {
    if (cidade1.populacao > cidade2.populacao) {
        ponto1++;
    } else if (cidade1.populacao < cidade2.populacao) {
        ponto2++;
    }
} else if (trunfo1 == 2 && trunfo2 == 2) {
    if (cidade1.area > cidade2.area) {
        ponto1++;
    } else if (cidade1.area < cidade2.area) {
        ponto2++;
    }
} else if (trunfo1 == 3 && trunfo2 == 3) {
    if (cidade1.pib > cidade2.pib) {
        ponto1++;
    } else if (cidade1.pib < cidade2.pib) {
        ponto2++;
    }
    //resultado final
    printf("jogador 1: %s\n", cidade1.nome);
    printf("pontos: %d\n", ponto1);
    printf("jogador 2: %s\n", cidade2.nome);
    printf("pontos: %d\n", ponto2);
    if (ponto1 > ponto2) {
        printf("jogador 1 venceu!\n");
    } else if (ponto1 < ponto2) {
        printf("jogador 2 venceu!\n");
    } else {
        printf("empate!\n");
    }
    return 0;
}
}
