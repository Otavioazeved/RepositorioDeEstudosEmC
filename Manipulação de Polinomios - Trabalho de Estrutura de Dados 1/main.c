/*
    Professor: Maximiano Correia Martins
    Alunos: Adriano de Oliveira Almeida, Danillo Mena do Couto, Luis Felipe Maia Martins
    Eduardo Viana Raymundo e Otavio Henrique Marques Azevedo
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifdef _WIN32
#include <windows.h>
#endif


/* ─────────────────────────────────────────
   Estrutura de dados
───────────────────────────────────────── */

typedef struct Termo {
    int coeficiente;
    int expoente;
    struct Termo *prox;
} Termo;

/* ─────────────────────────────────────────
   Protótipos
───────────────────────────────────────── */

Termo  *criarTermo(int coef, int exp);
Termo  *inserirTermo(Termo *polinomio, int coef, int exp);
void    imprimirRec(Termo *termo, int primeiro);
void    imprimirPolinomio(Termo *polinomio);
void    imprimirPolinomioSeguro(const char *nome, Termo *p);
int     verificarPolinomios(Termo *p1, Termo *p2);
Termo  *somarPolinomios(Termo *p1, Termo *p2);
Termo  *multiplicarPolinomios(Termo *p1, Termo *p2);
double  avaliarRec(Termo *termo, double x);
void    liberarPolinomio(Termo *polinomio);
Termo  *lerPolinomio(const char *nome);
void    limparTela(void);
void    pausar(void);
void    menu(void);

/* ─────────────────────────────────────────
   Utilitários de terminal
───────────────────────────────────────── */

void limparTela(void) {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

/* Aguarda o usuário pressionar Enter antes de limpar */
void pausar(void) {
    printf("\n  Pressione Enter para continuar...");
    /* consome o '\n' que ficou no buffer apos o ultimo scanf */
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    /* aguarda o Enter do usuario */
    while ((c = getchar()) != '\n' && c != EOF);
}

/* ─────────────────────────────────────────
   1. Criação
───────────────────────────────────────── */

Termo *criarTermo(int coef, int exp) {
    Termo *novo = (Termo *) malloc(sizeof(Termo));
    if (!novo) {
        fprintf(stderr, "Erro: sem memoria.\n");
        exit(EXIT_FAILURE);
    }
    novo->coeficiente = coef;
    novo->expoente    = exp;
    novo->prox        = NULL;
    return novo;
}

Termo *inserirTermo(Termo *polinomio, int coef, int exp) {
    if (coef == 0) return polinomio;

    if (!polinomio || exp > polinomio->expoente) {
        Termo *novo  = criarTermo(coef, exp);
        novo->prox   = polinomio;
        return novo;
    }

    if (exp == polinomio->expoente) {
        polinomio->coeficiente += coef;
        if (polinomio->coeficiente == 0) {
            Termo *tmp = polinomio->prox;
            free(polinomio);
            return tmp;
        }
        return polinomio;
    }

    polinomio->prox = inserirTermo(polinomio->prox, coef, exp);
    return polinomio;
}

Termo *lerPolinomio(const char *nome) {
    int grau, coef;
    Termo *p = NULL;

    printf("\n");
    printf("  Criando polinomio: %s\n", nome);
    printf("  --------------------------------\n");
    printf("  Grau do polinomio: ");
    if (scanf("%d", &grau) != 1) return NULL;

    if (grau < 0) {
        printf("\n  Grau invalido.\n");
        return NULL;
    }

    printf("\n  Digite 0 para os termos ausentes.\n\n");

    for (int e = grau; e >= 1; e--) {
        if (e == 1)
            printf("  Coeficiente de x    : ");
        else
            printf("  Coeficiente de x^%d : ", e);

        if (scanf("%d", &coef) != 1) coef = 0;
        p = inserirTermo(p, coef, e);
    }

    printf("  Termo independente  : ");
    if (scanf("%d", &coef) != 1) coef = 0;
    p = inserirTermo(p, coef, 0);

    printf("\n");
    return p;
}

/* ─────────────────────────────────────────
   2. Impressão recursiva
───────────────────────────────────────── */

void imprimirRec(Termo *termo, int primeiro) {
    if (!termo) {
        if (primeiro) printf("0");
        return;
    }

    int  c = termo->coeficiente;
    int  e = termo->expoente;

    if (!primeiro) {
        printf(c > 0 ? " + " : " - ");
        c = abs(c);
    } else if (c < 0) {
        printf("-");
        c = -c;
    }

    if (e == 0)       printf("%d", c);
    else if (e == 1)  printf("%dx", c);
    else              printf("%dx^%d", c, e);

    imprimirRec(termo->prox, 0);
}

void imprimirPolinomio(Termo *polinomio) {
    imprimirRec(polinomio, 1);
    printf("\n");
}

/* ─────────────────────────────────────────
   Impressão com verificação de "não criado"
───────────────────────────────────────── */

void imprimirPolinomioSeguro(const char *nome, Termo *p) {
    if (!p) {
        printf("  %s = [nao criado]\n", nome);
    } else {
        printf("  %s = ", nome);
        imprimirPolinomio(p);
    }
}

/* ─────────────────────────────────────────
   Verificação de P1 e P2 para soma/produto
   Retorna 1 se ambos existem, 0 caso contrário
───────────────────────────────────────── */

int verificarPolinomios(Termo *p1, Termo *p2) {
    if (!p1 && !p2) {
        printf("\n  Atencao: P1 e P2 ainda nao foram criados.\n");
        return 0;
    }
    if (!p1) {
        printf("\n  Atencao: P1 ainda nao foi criado.\n");
        return 0;
    }
    if (!p2) {
        printf("\n  Atencao: P2 ainda nao foi criado.\n");
        return 0;
    }
    return 1;
}

/* ─────────────────────────────────────────
   3. Soma
───────────────────────────────────────── */

Termo *somarPolinomios(Termo *p1, Termo *p2) {
    Termo *resultado = NULL;

    for (Termo *t = p1; t; t = t->prox)
        resultado = inserirTermo(resultado, t->coeficiente, t->expoente);

    for (Termo *t = p2; t; t = t->prox)
        resultado = inserirTermo(resultado, t->coeficiente, t->expoente);

    return resultado;
}

/* ─────────────────────────────────────────
   4. Produto
───────────────────────────────────────── */

Termo *multiplicarPolinomios(Termo *p1, Termo *p2) {
    Termo *resultado = NULL;

    for (Termo *t1 = p1; t1; t1 = t1->prox)
        for (Termo *t2 = p2; t2; t2 = t2->prox)
            resultado = inserirTermo(resultado,
                                     t1->coeficiente * t2->coeficiente,
                                     t1->expoente    + t2->expoente);
    return resultado;
}

/* ─────────────────────────────────────────
   5. Avaliação recursiva
───────────────────────────────────────── */

double avaliarRec(Termo *termo, double x) {
    if (!termo) return 0.0;
    return termo->coeficiente * pow(x, termo->expoente)
           + avaliarRec(termo->prox, x);
}

/* ─────────────────────────────────────────
   6. Liberação de memória
───────────────────────────────────────── */

void liberarPolinomio(Termo *polinomio) {
    if (polinomio == NULL) return;
    liberarPolinomio(polinomio->prox);
    free(polinomio);
}

/* ─────────────────────────────────────────
   Menu interativo
───────────────────────────────────────── */

void menu(void) {
    Termo *p1 = NULL, *p2 = NULL;
    Termo *soma = NULL, *produto = NULL;
    int opcao;
    double x;

    do {
    limparTela();
    printf("\n");
    printf("  ╔══════════════════════════════════════╗\n");
    printf("  ║   Manipulacao de Polinomios em C     ║\n");
    printf("  ╚══════════════════════════════════════╝\n");


        printf("\n");
        printf("    ||============ MENU ==============||\n");
        printf("    || 1 - Criar | redefinir P1       ||\n");
        printf("    || 2 - Criar | redefinir P2       ||\n");
        printf("    || 3 - Exibir P1 e P2             ||\n");
        printf("    || 4 - Soma:    S = P1 + P2       ||\n");
        printf("    || 5 - Produto: P = P1 x P2       ||\n");
        printf("    || 6 - Avaliar P1 em x            ||\n");
        printf("    || 7 - Avaliar P2 em x            ||\n");
        printf("    || 8 - Avaliar Soma em x          ||\n");
        printf("    || 9 - Avaliar Produto em x       ||\n");
        printf("    || 0 - Sair                       ||\n");
        printf("    ||================================||\n");
        printf("\n  Opcao: ");
        if (scanf("%d", &opcao) != 1) {
            opcao = -1;
            while (getchar() != '\n');
        }

        limparTela();
        printf("\n");

        switch (opcao) {
            case 1:
                liberarPolinomio(p1);
                p1 = lerPolinomio("P1");
                printf("  --------------------------------\n");
                imprimirPolinomioSeguro("P1", p1);
                printf("  --------------------------------\n");
                pausar();
                limparTela();
                break;

            case 2:
                liberarPolinomio(p2);
                p2 = lerPolinomio("P2");
                printf("  --------------------------------\n");
                imprimirPolinomioSeguro("P2", p2);
                printf("  --------------------------------\n");
                pausar();
                limparTela();
                break;

            case 3:
                printf("  --------------------------------\n");
                imprimirPolinomioSeguro("P1", p1);
                imprimirPolinomioSeguro("P2", p2);
                printf("  --------------------------------\n");
                pausar();
                limparTela();
                break;

            case 4:
                if (!verificarPolinomios(p1, p2)) { pausar(); limparTela(); break; }
                liberarPolinomio(soma);
                soma = somarPolinomios(p1, p2);
                printf("  --------------------------------\n");
                printf("  Soma    = "); imprimirPolinomio(soma);
                printf("  --------------------------------\n");
                pausar();
                limparTela();
                break;

            case 5:
                if (!verificarPolinomios(p1, p2)) { pausar(); limparTela(); break; }
                liberarPolinomio(produto);
                produto = multiplicarPolinomios(p1, p2);
                printf("  --------------------------------\n");
                printf("  Produto = "); imprimirPolinomio(produto);
                printf("  --------------------------------\n");
                pausar();
                limparTela();
                break;

            case 6:
                if (!p1) {
                    printf("  Atencao: P1 ainda nao foi criado.\n");
                    pausar(); limparTela(); break;
                }
                printf("  Valor de x: ");
                if (scanf("%lf", &x) == 1) {
                    printf("\n  --------------------------------\n");
                    printf("  P1(%.4g) = %.6g\n", x, avaliarRec(p1, x));
                    printf("  --------------------------------\n");
                }
                pausar();
                limparTela();
                break;

            case 7:
                if (!p2) {
                    printf("  Atencao: P2 ainda nao foi criado.\n");
                    pausar(); limparTela(); break;
                }
                printf("  Valor de x: ");
                if (scanf("%lf", &x) == 1) {
                    printf("\n  --------------------------------\n");
                    printf("  P2(%.4g) = %.6g\n", x, avaliarRec(p2, x));
                    printf("  --------------------------------\n");
                }
                pausar();
                limparTela();
                break;

             case 8:
                if (!soma) {
                    printf("  Atencao: Calcule a soma (opcao 4) primeiro.\n");
                    pausar(); limparTela(); break;
                }
                printf("  Valor de x: ");
                if (scanf("%lf", &x) == 1) {
                    printf("\n  --------------------------------\n");
                    printf("  Soma(%.4g) = %.6g\n", x, avaliarRec(soma, x));
                    printf("  --------------------------------\n");
                }
                pausar();
                limparTela();
                break;

            case 9:
                if (!produto) {
                    printf("  Atencao: Calcule o produto (opcao 5) primeiro.\n");
                    pausar(); limparTela(); break;
                }
                printf("  Valor de x: ");
                if (scanf("%lf", &x) == 1) {
                    printf("\n  --------------------------------\n");
                    printf("  Produto(%.4g) = %.6g\n", x, avaliarRec(produto, x));
                    printf("  --------------------------------\n");
                }
                pausar();
                limparTela();
                break;

            case 0:
                printf("  Liberando memoria e encerrando...\n\n");
                break;

            default:
                printf("  Opcao invalida.\n");
                pausar();
                limparTela();
        }

    } while (opcao != 0);

    liberarPolinomio(p1);
    liberarPolinomio(p2);
    liberarPolinomio(soma);
    liberarPolinomio(produto);
}

/* ─────────────────────────────────────────
   Ponto de entrada
───────────────────────────────────────── */

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
#endif

    menu();
    return EXIT_SUCCESS;
}
