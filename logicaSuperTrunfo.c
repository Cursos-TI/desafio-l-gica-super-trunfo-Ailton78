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
 }

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
struct  Carta cadastrarCarta( int i)
{
    struct Carta carta;
    
        printf("Entre com os dados da %d cadastro de carta.\n", i + 1);
        printf("Estado: ");
        scanf(" %c", &carta.estado);
        getchar();   // Limpa o buffer
        printf("Codigo: ");
        gets(&carta.codigo);
        printf("Nome: ");
        gets(&carta.nome);
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
};
void cadastrarCartas( struct Carta cartas[], int tamanho){  
     for (int i = 0; i < tamanho; i++) {
        cartas[i] = cadastrarCarta(i);
    }
}


void comparaPopulacao( struct Carta carta1, struct Carta carta2 )
{
        printf("Comparação de cartas: \n");
        printf("Carta 1 - Estado: %c, Código: %s, População: %d\n", carta1.estado, carta1.codigo, carta1.populacao);
        printf("Carta 2 - Estado: %c, Código: %s, População: %d\n", carta2.estado, carta2.codigo, carta2.populacao);


        printf(carta1.populacao > carta2.populacao?
         "Resultado: Carta 1 é a vencedora!" : "Resultado: Carta 2 é a vencedora!");
        printf("\n\n\n");  
}
void comparaDensidadePopulacional( struct Carta carta1, struct Carta carta2 )
{
        printf("Comparação de cartas: \n");
        printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f\n", carta1.estado, carta1.codigo, carta1.densidadePopulacional);
        printf("Carta 2 - Estado: %c, Código: %s, Densidade Populacional: %.2f\n", carta2.estado, carta2.codigo, carta2.densidadePopulacional);


        printf(carta1.densidadePopulacional < carta2.densidadePopulacional?
         "Resultado: Carta 1 é a vencedora!" : "Resultado: Carta 2 é a vencedora!");  
        printf("\n\n\n");
}
void comparaArea( struct Carta carta1, struct Carta carta2 )
{
        printf("Comparação de cartas: \n");
        printf("Carta 1 - Estado: %c, Código: %s, Aréa em km²: %.2f\n", carta1.estado, carta1.codigo, carta1.areaKmQuadrado);
        printf("Carta 2 - Estado: %c, Código: %s, Aréa em km²: %.2f\n", carta2.estado, carta2.codigo, carta2.areaKmQuadrado);


        printf(carta1.densidadePopulacional > carta2.densidadePopulacional?
         "Resultado: Carta 1 é a vencedora!" : "Resultado: Carta 2 é a vencedora!");  
        printf("\n\n\n");
}
void comparaPib( struct Carta carta1, struct Carta carta2 )
{
        printf("\n\nComparação de cartas: \n");
        printf("\tCarta 1 - Estado: %c, Código: %s, Pib R$: %.2f\n", carta1.estado, carta1.codigo, carta1.pib);
        printf("\tCarta 2 - Estado: %c, Código: %s, Pib R$: %.2f\n", carta2.estado, carta2.codigo, carta2.pib);


        printf(carta1.pib > carta2.pib?
         "\n\tResultado: Carta 1 é a vencedora!\n" : "\n\tResultado: Carta 2 é a vencedora!\n");
        printf("\n\n\n");  
}
void comparaPontoTuristico( struct Carta carta1, struct Carta carta2 )
{
        printf("\n\nComparação de cartas: \n");
        printf("\tCarta 1 - Estado: %c, Código: %s, Pontos Turisticos: %d\n", carta1.estado, carta1.codigo, carta1.pontosTuristicos);
        printf("\tCarta 2 - Estado: %c, Código: %s, Pontos Turisticos: %d\n", carta2.estado, carta2.codigo, carta2.pontosTuristicos);


        printf(carta1.pontosTuristicos > carta2.pontosTuristicos?
         "\n\tResultado: Carta 1 é a vencedora!\n" : "\n\tResultado: Carta 2 é a vencedora!\n");
        printf("\n\n\n"); 
}
void comparaPibPerCapita( struct Carta carta1, struct Carta carta2 )
{
        printf("\n\nComparação de cartas: \n");
        printf("\tCarta 1 - Estado: %c, Código: %s, Pontos Turisticos: %.2f\n", carta1.estado, carta1.codigo, carta1.pibPerCapita);
        printf("\tCarta 2 - Estado: %c, Código: %s, Pontos Turisticos: %.2f\n", carta2.estado, carta2.codigo, carta2.pibPerCapita);


        printf(carta1.pibPerCapita > carta2.pibPerCapita?
         "\n\tResultado: Carta 1 é a vencedora!\n" : "\n\tResultado: Carta 2 é a vencedora!\n"); 
        printf("\n\n\n"); 
}

void comparaSuperPoder( struct Carta carta1, struct Carta carta2 )
{
    printf("\n\nComparação de cartas: \n");
    printf("\tCarta 1 - Estado: %c, Código: %s, Pontos Turisticos: %.2f\n", carta1.estado, carta1.codigo, carta1.superPoder);
    printf("\tCarta 2 - Estado: %c, Código: %s, Pontos Turisticos: %.2f\n", carta2.estado, carta2.codigo, carta2.superPoder);


    printf(carta1.superPoder > carta2.superPoder?
         "\n\tResultado: Carta 1 é a vencedora!\n" : "\n\tResultado: Carta 2 é a vencedora!\n");
    printf("\n\n\n");   
}



int main() {
    int opcao;
    const int tamanho = 2; // Defina o tamanho do array de cartas
    struct Carta cartas[tamanho]; // Define o array de cartas
   
    cadastrarCartas(cartas, tamanho); //chama a função para cadastrar o array de cartas

        printf("\n\nDigite a opção de comparação.\n\n");
        printf("1 - População.");
        printf("\t\t\t\t2 - Aréa km².\n");
        printf("3 - Pib.");
        printf("\t\t\t\t4 - Pontos Turisticos.\n");
        printf("5 - Densidade Populacional.\n");
        printf("6 - PIB per Capita.");
        printf("\t\t\t7 - Super Poder.\n");

        printf("\n\t\tOpção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            comparaPopulacao(cartas[0], cartas[1]);
            break;
        case 2:
            comparaArea(cartas[0], cartas[1]);
            break;
        case 3:
             
            break;
        case 3:
            comparaPib(cartas[0], cartas[1]);
            break;
        case 4:
            comparaPontoTuristico(cartas[0], cartas[1]);
            break;
        case 5:
            comparaDensidadePopulacional(cartas[0], cartas[1]);
            break;
        case 6:
            comparaDensidadePopulacional(cartas[0], cartas[1]);
            break;
        case 7:
            comparaPibPerCapita(cartas[0], cartas[1]);
            break;
        case 7:
           comparaSuperPoder(cartas[0], cartas[1]);
            break;
        
        default:
        printf("\n\n\tOpção invalida\n\n")
            break;
        }


    return 0;
}
