#include <stdio.h>


void calcularAreaTriangulo();
void calcularAreaQuadrado();
void calcularAreaRetangulo();
void calcularAreaTrapezio();
void calcularAreaCirculo();

void exibirMenu() {
    int opcaoFigura;

    do {
        system ("CLS");
        printf("==================================================================\n");
        printf("                        Calculo Geometrico                        \n");
        printf("==================================================================\n");
        printf("[1] Triangulo\n");
        printf("[2] Quadrado\n");
        printf("[3] Retangulo\n");
        printf("[4] Trapezio\n");
        printf("[5] Circulo\n");
        printf("[0] Sair\n");
        printf("Selecione a forma geometrica que voce deseja calcular a area --> ");
        scanf("%d", &opcaoFigura);
        printf("==================================================================\n");

        switch (opcaoFigura) {
            case 1: 
                system ("CLS");
                printf("============================================\n");
                printf("               Area Triangulo               \n");
                printf("============================================\n");
                calcularAreaTriangulo();
                break;
            case 2:
                system ("CLS");
                printf("===========================================\n");
                printf("               Area Quadrado               \n");
                printf("===========================================\n");
                calcularAreaQuadrado();
                break;
            case 3:
                system ("CLS");
                printf("============================================\n");
                printf("               Area Retangulo               \n");
                printf("============================================\n");
                calcularAreaRetangulo();
                break;
            case 4:
                system ("CLS");
                printf("===========================================\n");
                printf("               Area Trapezio               \n");
                printf("===========================================\n");
                calcularAreaTrapezio();
                break;
            case 5:
                system ("CLS");
                printf("==========================================\n");
                printf("               Area Circulo               \n");
                printf("==========================================\n");
                calcularAreaCirculo();
                break;
            case 0:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Essa opcao nao existe.\n");
                break;
        }

        if (opcaoFigura != 0) {
            printf("Pressione ENTER para continuar...");
            getchar();
            getchar();
        }

    } while (opcaoFigura != 0);
}

void calcularAreaTriangulo() {
    int baseTriangulo;
    int alturaTriangulo;
    int areaTriangulo;

    printf("Qual a altura do triangulo ---> ");
    scanf("%d", &alturaTriangulo);
    printf("Qual o tamanho da base do triangulo ---> ");
    scanf("%d", &baseTriangulo);

    areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;
    printf("Area do Triangulo ---> %d\n", areaTriangulo);
}

void calcularAreaQuadrado() {
    int ladoQuadrado;
    int areaQuadrado;

    printf("Qual o tamanho do lado do quadrado ---> ");
    scanf("%d", &ladoQuadrado);

    areaQuadrado = ladoQuadrado * ladoQuadrado;
    printf("Area do Quadrado ---> %d\n", areaQuadrado);
}

void calcularAreaRetangulo() {
    int larguraRetangulo;
    int comprimentoRetangulo;
    int areaRetangulo;

    printf("Qual o comprimento do retangulo ---> ");
    scanf("%d", &comprimentoRetangulo);
    printf("Qual a largura do retangulo ---> ");
    scanf("%d", &larguraRetangulo);

    areaRetangulo = comprimentoRetangulo * larguraRetangulo;
    printf("Area do Retangulo ---> %d\n", areaRetangulo);
}

void calcularAreaTrapezio() {
    int baseMaior;
    int baseMenor;
    int alturaTrapezio;
    int areaTrapezio;

    printf("Qual o tamanho da base maior do trapezio ---> ");
    scanf("%d", &baseMaior);
    printf("Qual o tamanho da base menor do trapezio ---> ");
    scanf("%d", &baseMenor);
    printf("Qual a altura do trapezio ---> ");
    scanf("%d", &alturaTrapezio);

    areaTrapezio = ((baseMaior + baseMenor) * alturaTrapezio) / 2;
    printf("Area do Trapezio ---> %d\n", areaTrapezio);
}

void calcularAreaCirculo() {
    int raioCirculo;
    double areaCirculo;

    printf("Qual o raio do circulo ---> ");
    scanf("%d", &raioCirculo);

    areaCirculo = 3.14 * raioCirculo * raioCirculo;
    printf("Area do Circulo ---> %.2f\n", areaCirculo);
}

int main() {
    exibirMenu();
    return 0;
}
