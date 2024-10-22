#include <stdio.h>

// Define as propiedades da estrutura carta
 struct Carta
 {  
    char estado;
    char codigo[4];
    char nome[20];
    unsigned int populacao;
    float areaKmQuadrado;
    float pib;
    unsigned int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    long double superPoder;
 };

// função que imprime os dados de uma carta.
void imprimeCarta(struct Carta carta) {
    printf("\n\n--------- CARTA --------------\n");
    printf("Estado: %c \n", carta.estado);
    printf("Código: %s \n", carta.codigo);
    printf("Nome: %s \n",carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Aréa: %.2f km²\n", carta.areaKmQuadrado);
    printf("Pib: %.2f\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta.pibPerCapita);
    printf("Super Poder: %.2f \n\n", carta.superPoder);
}

// função que cadastra carta
struct  Carta cadastrarCarta( int i){
    struct Carta carta;

    printf("Entre com os dados da %d cadastro de carta.\n", i + 1);

    printf("Estado: ");
    scanf(" %c", &carta.estado);
    getchar();   // Limpa o buffer

    printf("Codigo: ");
    fgets(carta.codigo, sizeof(carta.codigo), stdin);

    printf("Nome: ");
    fgets(carta.nome, sizeof(carta.nome), stdin);

    printf("Populaçao: ");
    scanf("%d", &carta.populacao);

    printf("Aréa em km²: ");
    scanf("%f", &carta.areaKmQuadrado);

    printf("Pib: ");
    scanf("%f", &carta.pib);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &carta.pontosTuristicos);

    carta.densidadePopulacional = (float) carta.populacao / carta.areaKmQuadrado;
    carta.pibPerCapita =(float) carta.pib / carta.populacao;
    carta.superPoder = (float) carta.populacao + carta.areaKmQuadrado + 
                        carta.pib + (float) carta.pontosTuristicos + 
                        carta.densidadePopulacional + carta.pibPerCapita; 

    printf("\n\n----- Carta cadastrada.! -------\n\n");

    return carta;
}
//função que cadastra array de cartas
void cadastrarCartas( struct Carta cartas[], int tamanho){  
     for (int i = 0; i < tamanho; i++) {
        cartas[i] = cadastrarCarta(i); 
    }
}

// função de comparação de população
void comparaPopulacao( struct Carta carta1, struct Carta carta2 )
{
        printf("\n\nComparação de cartas: \n");
        printf("\tCarta 1 - Estado: %c, Código: %s, População: %d\n", carta1.estado, carta1.codigo, carta1.populacao);
        printf("\tCarta 2 - Estado: %c, Código: %s, População: %d\n", carta2.estado, carta2.codigo, carta2.populacao);

        if(carta1.populacao == carta2.populacao){
            printf("\n\tResultado Empatado.\n");
        }else{
            printf(carta1.populacao > carta2.populacao?
            "Resultado: Carta 1 é a vencedora!" : "Resultado: Carta 2 é a vencedora!");  
            printf("\n\n\n");
        }

}
void comparaDensidadePopulacional( struct Carta carta1, struct Carta carta2 )
{
        printf("\n\nComparação de cartas: \n");
        printf("\tCarta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f\n", carta1.estado, carta1.codigo, carta1.densidadePopulacional);
        printf("\tCarta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f\n", carta2.estado, carta2.codigo, carta2.densidadePopulacional);
        
        if(carta1.densidadePopulacional == carta2.densidadePopulacional){
            printf("\n\tResultado Empatado.\n");
        }else{
            printf(carta1.densidadePopulacional > carta2.densidadePopulacional?
            "Resultado: Carta 1 é a vencedora!" : "Resultado: Carta 2 é a vencedora!");  
            printf("\n\n\n");
        }
}
void comparaArea( struct Carta carta1, struct Carta carta2 )
{
        printf("\n\nComparação de cartas: \n");
        printf("\tCarta 1 - Estado: %c, Código: %s, Aréa em km²: %.2f\n", carta1.estado, carta1.codigo, carta1.areaKmQuadrado);
        printf("\tCarta 2 - Estado: %c, Código: %s, Aréa em km²: %.2f\n", carta2.estado, carta2.codigo, carta2.areaKmQuadrado);

        if(carta1.areaKmQuadrado == carta2.areaKmQuadrado){
            printf("\n\tResultado Empatado.\n");
        }else{
            printf(carta1.areaKmQuadrado > carta2.areaKmQuadrado?
            "Resultado: Carta 1 é a vencedora!" : "Resultado: Carta 2 é a vencedora!");  
            printf("\n\n\n");
        }
}
void comparaPib( struct Carta carta1, struct Carta carta2 )
{
        printf("\n\nComparação de cartas: \n");
        printf("\tCarta 1 - Estado: %c, Código: %s, Pib R$: %.2f\n", carta1.estado, carta1.codigo, carta1.pib);
        printf("\tCarta 2 - Estado: %c, Código: %s, Pib R$: %.2f\n", carta2.estado, carta2.codigo, carta2.pib);

        if(carta1.pib == carta2.pib){
            printf("\n\tResultado Empatado.\n");
        }else{
            printf(carta1.pib > carta2.pib?
            "\n\tResultado: Carta 1 é a vencedora!\n" : "\n\tResultado: Carta 2 é a vencedora!\n");
            printf("\n\n\n");  
        }
}
void comparaPontoTuristico( struct Carta carta1, struct Carta carta2 )
{
        printf("\n\nComparação de cartas: \n");
        printf("\tCarta 1 - Estado: %c, Código: %s, Pontos Turisticos: %d\n", carta1.estado, carta1.codigo, carta1.pontosTuristicos);
        printf("\tCarta 2 - Estado: %c, Código: %s, Pontos Turisticos: %d\n", carta2.estado, carta2.codigo, carta2.pontosTuristicos);

        if(carta1.pontosTuristicos == carta2.pontosTuristicos){
            printf("\n\tResultado Empatado.\n");
        }else{
            printf(carta1.pontosTuristicos > carta2.pontosTuristicos?
            "\n\tResultado: Carta 1 é a vencedora!\n" : "\n\tResultado: Carta 2 é a vencedora!\n");
            printf("\n\n\n");  
        }

}
void comparaPibPerCapita( struct Carta carta1, struct Carta carta2 )
{
        printf("\n\nComparação de cartas: \n");
        printf("\tCarta 1 - Estado: %c, Código: %s, Pib per Capito: %.2f\n", carta1.estado, carta1.codigo, carta1.pibPerCapita);
        printf("\tCarta 2 - Estado: %c, Código: %s, Pib per Capito: %.2f\n", carta2.estado, carta2.codigo, carta2.pibPerCapita);

        if(carta1.pibPerCapita == carta2.pibPerCapita){
            printf("\n\tResultado Empatado.\n");
        }else{
            printf(carta1.pibPerCapita > carta2.pibPerCapita?
            "\n\tResultado: Carta 1 é a vencedora!\n" : "\n\tResultado: Carta 2 é a vencedora!\n");
            printf("\n\n\n");  
        }

}

void comparaSuperPoder( struct Carta carta1, struct Carta carta2 )
{
    printf("\n\nComparação de cartas: \n");
    printf("\tCarta 1 - Estado: %c, Código: %s, Super Poder: %.2f\n", carta1.estado, carta1.codigo, carta1.superPoder);
    printf("\tCarta 2 - Estado: %c, Código: %s, Super Poder: %.2f\n", carta2.estado, carta2.codigo, carta2.superPoder);

    if(carta1.superPoder == carta2.superPoder){
        printf("\n\tResultado Empatado.\n");
    }else{
        printf(carta1.superPoder > carta2.superPoder?
        "\n\tResultado: Carta 1 é a vencedora!\n" : "\n\tResultado: Carta 2 é a vencedora!\n");
        printf("\n\n\n");  
    }

}
int menu(){
    int opcao = 0;

    printf("\n\nDigite a opção de comparação.\n\n");
    printf("1 - População.");
    printf("\t\t\t\t2 - Aréa km².\n");
    printf("3 - Pib.");
    printf("\t\t\t\t4 - Pontos Turisticos.\n");
    printf("5 - Densidade Populacional.");
    printf("\t\t6 - PIB per Capita.\n");
    printf("7 - Super Poder.");
    printf("\t\t\t0 - Sair\n\n");

    printf("\n\t\tOpção: ");
    scanf("%d", &opcao);

    return opcao;
}
// função que chamas as funçoes de comparações baseadas na opção escolida
void comparar(struct Carta carta1, struct Carta carta2 , int opcao){
     switch (opcao)
    {
    case 1:
        comparaPopulacao(carta1, carta2);
        break;
    case 2:
        comparaArea(carta1, carta2);
        break;
    case 3:
        comparaPib(carta1, carta2);
        break;
    case 4:
        comparaPontoTuristico(carta1, carta2);
        break;
    case 5:
        comparaDensidadePopulacional(carta1, carta2);
        break;
    case 6:
        comparaPibPerCapita(carta1, carta2);
        break;
    case 7:
        comparaSuperPoder(carta1, carta2);
        break;
    
    default:
        printf("\n\n\tOpção invalida\n\n");
        break;
    }
    
}

int main() {

    int opcao;
    const int tamanho = 2; // Defina o tamanho do array de cartas

    struct Carta cartas[tamanho]; // Define o array de cartas
   
    cadastrarCartas(cartas, tamanho); // chama a função para cadastrar o array de cartas

    
    while (1)
    {
        opcao = menu(); // chama a função com as opções de menu

        if(opcao == 0){
            printf("\n\n\t\t***** FIM *****\n\n\n");
            break;
        }
        

        comparar(cartas[0], cartas[1], opcao); // chama função de pasamdo a opção a ser usada na comparação

        
        
    }
    
   
    return 0;
}
