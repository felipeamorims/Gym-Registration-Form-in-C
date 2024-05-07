// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>

// // O que está pronto:
// // * Estrutura dos registros [LUCAS]
// // * Função de cadastro de cliente [LUCAS]
// // * Função de impressão de clientes [LUCAS]
// // * Função de alteração de clientes [LUCAS]

// // Escolha um dos tópicos abaixo para implementar e adicione seu nome entre
// // parênteses à frente dele.
// // Qualquer dúvida técnica no desenvolvimento, não fique agarrado, chame um
// // coleguinha pelo whatsapp, ou usando o próprio chat do Replit. Acabando de
// // desenvolver seu tópico de escolha, não espere e já pegue o próximo, e caso
// // não tenha mais nenhum, veja se o amigo não precisa de ajuda.

// // FALTA IMPLEMENTAR:
// // * Inclusão da informação de data -> [LUCAS]
// // * Implementar função de exclusão -> [LUCAS]
// // * Implementar armazenamento dos dados no arquivo CPF.txt ao cadastrar
// cliente
// // -> [FELIPE]
// // * Validar campo de data nas funções de exclusão e alteração
// // * Validação de cpf ao cadastrar cliente -> [FELIPE]

// typedef struct Clientes {
//   float telefone;
//   float altura;
//   float peso;
//   float cpf;
//   float imc;
//   char email[50];
//   char nome[50];
//   char data[50];
// } t_clientes;

// char *obterDataAtual() {
//   time_t tempoAtual;
//   struct tm *infoTempo;
//   char dataString[20];

//   time(&tempoAtual);
//   infoTempo = localtime(&tempoAtual);

//   strftime(dataString, sizeof(dataString), "%d/%m/%Y", infoTempo);

//   char *dataAtual = malloc(strlen(dataString) + 1);
//   strcpy(dataAtual, dataString);

//   return dataAtual;
// }
// void cadastrarCliente(t_clientes *cliente, int i) {
//   system("clear");
//   printf("------ Cadastrar aluno %d ------\n\n", i);
//   printf("Cpf: ");
//   scanf("%f", &cliente[i].cpf);
//   // armazenar dados no arquivo CPF.txt
//   // validarCpf();
//   printf("Nome: ");
//   scanf("%49s", cliente[i].nome);
//   printf("Email: ");
//   scanf("%s49", cliente[i].email);
//   printf("telefone: ");
//   scanf("%f", &cliente[i].telefone);
//   printf("Altura: ");
//   scanf("%f", &cliente[i].altura);
//   printf("Peso: ");
//   scanf("%f", &cliente[i].peso);
//   cliente[i].imc = (cliente[i].peso / (cliente[i].altura *
//   cliente[i].altura)); strcpy(cliente[i].data, obterDataAtual());
//   printf("Data armazenada na estrutura: %s\n", cliente[i].data);
// }
// void imprimirClientes(t_clientes *clientes, int cont) {
//   system("clear");
//   printf("------ Clientes cadastrados ------\n\n");
//   for (int i = 0; i < cont; i++) {
//     printf("- Cliente %d: \n", i);
//     printf("Cpf: %.0f\n", clientes[i].cpf);
//     printf("Nome: %s\n", clientes[i].nome);
//     printf("Email: %s\n", clientes[i].email);
//     printf("Telefone: %.2f\n", clientes[i].telefone);
//     printf("Altura: %.2f\n", clientes[i].altura);
//     printf("Peso: %.2f\n", clientes[i].peso);
//     printf("Imc: %.2f\n\n", clientes[i].imc);
//     printf("Data: %s\n\n", clientes[i].data);
//   }
// }
// void alterarDadosCliente(t_clientes *clientes, int n) {
//   t_clientes attCliente[10];
//   float cpf;
//   system("clear");
//   printf("------ Alterar dados de alunos ------\n\n");
//   printf("Informe o cpf;\n");
//   scanf("%f", &cpf);

//   for (int i = 0; i < n; i++) {
//     if (clientes[i].cpf == cpf) {
//       printf("------ Resultado: Cliente %d ------\nDados atuais: \n", i);
//       printf("Nome: %s\n", clientes[i].nome);
//       printf("Email: %s\n", clientes[i].email);
//       printf("Telefone: %f\n", clientes[i].telefone);
//       printf("Altura: %f\n", clientes[i].altura);
//       printf("Peso: %f\n", clientes[i].peso);
//       printf("IMC: %f\n", clientes[i].imc);
//       printf("\n\n");
//       printf("------ Informe os novos dados para este cliente ------\n");
//       printf("Nome:\n");
//       scanf("%29s", attCliente[0].nome);
//       strcpy(clientes[i].nome, attCliente[0].nome);
//       printf("Email:\n");
//       scanf("%29s", attCliente[0].email);
//       strcpy(clientes[i].email, attCliente[0].email);
//       printf("Telefone:\n");
//       scanf("%f", &attCliente[0].telefone);
//       clientes[i].telefone = attCliente[0].telefone;
//       printf("Altura:\n");
//       scanf("%f", &attCliente[0].altura);
//       clientes[i].altura = attCliente[0].altura;
//       printf("Peso:\n");
//       scanf("%f", &attCliente[0].peso);
//       clientes[i].peso = attCliente[0].peso;
//       clientes[i].imc =
//           attCliente[i].peso / (attCliente[i].altura * attCliente[i].altura);
//     } else {
//       printf("Cliente nao encontrado!");
//       break;
//     }
//   }
// }

// int main() {
//   // criar arquivo CPF.txt
//   t_clientes clientes[10];
//   int n = 1;
//   int cont = 0;

//   while (n != 0) {
//     printf("\n\n------ Menu ------\n\n");
//     printf("[0] - Fechar programa: \n");
//     printf("[1] - Cadastrar cliente: \n");
//     printf("[2] - Imprimir clientes:\n");
//     printf("[3] - Alterar dados de um cliente:\n");
//     printf("[4] - Excluir cliente:\n");
//     scanf("%i", &n);
//     system("clear");

//     switch (n) {
//     case 0:
//       printf("Encerrando programa...\n");
//       return 0;
//       break;
//     case 1:
//       cadastrarCliente(clientes, cont);
//       cont++;
//       break;
//     case 2:
//       imprimirClientes(clientes, cont);
//       break;
//     case 3:
//       alterarDadosCliente(clientes, cont);
//       break;
//     }
//   }
// }
//=================================================================

//  Versão que fiz [FELIPE] com CRUD (Cadastro, listagem, atualização e
//  exclusão)
// funcionando, porém ainda não com as datas de alterações como é pedido no
// enunciado.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define TAM 100

typedef struct Cliente {
  float altura;
  float peso;
  float imc;
  char cpf[20]; // Adicionado espaço para o caractere de nulidade '\0'
  char nome[TAM];
  char telefone[TAM];
  char email[TAM];
  char dataLeitura[TAM];
} t_clientes;

// Função para criar um novo arquivo ou adicionar mais dados e salvar os dados
// do cliente
void criarArquivo(t_clientes *cliente, int writeflag) {

  char cpfaux[20];

  strcpy(cpfaux, cliente->cpf);

  if (writeflag == 1) { // modo escrita (ou sobrescrita total)

    FILE *arquivo;
    arquivo = fopen(strcat(cpfaux, ".txt"), "w");

    if (arquivo != NULL) {
      // Escreve os dados no arquivo

      fprintf(arquivo, "Data Leitura: %s\n", cliente->dataLeitura);
      fprintf(arquivo, "Nome: %s\n", cliente->nome);
      fprintf(arquivo, "Telefone: %s\n", cliente->telefone);
      fprintf(arquivo, "Email: %s\n", cliente->email);
      fprintf(arquivo, "Peso: %.2f\n", cliente->peso);
      fprintf(arquivo, "Altura: %.2f\n", cliente->altura);
      fprintf(arquivo, "CPF: %11s\n", cliente->cpf);
      fprintf(arquivo, "IMC: %.2f\n", cliente->imc);
      fprintf(arquivo, "---------------------------------\n");

      // Fecha o arquivo
      fclose(arquivo);
    } else {
      printf("\nErro ao criar o arquivo.\n\n");
    }

  } else { // modo adicionar (ou atualizar progresso)

    FILE *arquivo;
    arquivo = fopen(strcat(cpfaux, ".txt"), "a");

    if (arquivo != NULL) {
      // Escreve os dados no arquivo
      fprintf(arquivo, "DataLeitura: %s\n", cliente->dataLeitura);
      fprintf(arquivo, "Peso: %.2f\n", cliente->peso);
      fprintf(arquivo, "Altura: %.2f\n", cliente->altura);
      fprintf(arquivo, "CPF: %11s\n", cliente->cpf);
      fprintf(arquivo, "IMC: %.2f\n", cliente->imc);
      fprintf(arquivo, "---------------------------------\n");
      // Fecha o arquivo
      fclose(arquivo);
    } else {
      printf("\nErro ao criar o arquivo.\n\n");
    }
  }
}

// Função para ler os dados do cliente de um arquivo
void lerArquivo(t_clientes *cliente, int writeflag) {

  char cpfaux[20];

  strcpy(cpfaux, cliente->cpf);

  if (writeflag == 1) { // modo escrita (ou sobrescrita total)

    FILE *arquivo;
    arquivo = fopen(strcat(cpfaux, ".txt"), "r");

    if (arquivo != NULL) {
      // Lê os dados do arquivo
      fscanf(arquivo, "Nome: %[^\n]\n", cliente->nome);
      fscanf(arquivo, "Telefone: %[^\n]\n", cliente->telefone);
      fscanf(arquivo, "Email: %[^\n]\n", cliente->email);
      fscanf(arquivo, "Peso: %f\n", &cliente->peso);
      fscanf(arquivo, "Altura: %f\n", &cliente->altura);
      fscanf(arquivo, "CPF: %[^\n]\n", cliente->cpf);
      fscanf(arquivo, "IMC: %f\n", &cliente->imc);
      fscanf(arquivo, "DataLeitura: %[^\n]\n", cliente->dataLeitura);
      // Fecha o arquivo
      fclose(arquivo);
    }
  } else { // modo atualizar (ou adicionar progresso)
    FILE *arquivo;
    arquivo = fopen(strcat(cpfaux, ".txt"), "r");

    if (arquivo != NULL) {
      // Lê os dados do arquivo
      fscanf(arquivo, "Peso: %f\n", &cliente->peso);
      fscanf(arquivo, "Altura: %f\n", &cliente->altura);
      fscanf(arquivo, "CPF: %[^\n]\n", cliente->cpf);
      fscanf(arquivo, "IMC: %f\n", &cliente->imc);
      fscanf(arquivo, "DataLeitura: %[^\n]\n", cliente->dataLeitura);
      // Fecha o arquivo
      fclose(arquivo);
    }
  }
}

char *obterDataAtual() {
  time_t tempoAtual;
  struct tm *infoTempo;
  char dataString[20];

  time(&tempoAtual);
  infoTempo = localtime(&tempoAtual);

  strftime(dataString, sizeof(dataString), "%d/%m/%Y %H:%M:%S", infoTempo);

  char *dataAtual = malloc(strlen(dataString) + 1);
  strcpy(dataAtual, dataString);

  return dataAtual;
}

bool compararDatas(char *data1, char *data2) {
  return strcmp(data1, data2) == 0;
}

void excluirDadosPorData(t_clientes *cliente) {
  char dataExcluir[TAM];
  printf("Digite a data que deseja excluir (DD/MM/YYYY HH:MM:SS): ");
  scanf(" %[^\n]", dataExcluir);

  char cpfaux[20];

  strcpy(cpfaux, cliente->cpf);

  FILE *arquivoEntrada, *arquivoSaida;
  arquivoEntrada = fopen(strcat(cpfaux, ".txt"), "r");
  arquivoSaida = fopen("temp.txt", "w");

  if (arquivoEntrada != NULL && arquivoSaida != NULL) {
    char linha[TAM];
    char dataCadastro[TAM];
    int dentroDoConjunto = 0;

    while (fgets(linha, sizeof(linha), arquivoEntrada) != NULL) {
      if (strstr(linha, "DataLeitura:") != NULL) {
        sscanf(linha, "DataLeitura: %[^\n]", dataCadastro);

        // Se a data de cadastro for diferente da data informada, marca que está
        // dentro do conjunto
        if (compararDatas(dataCadastro, dataExcluir)) {
          dentroDoConjunto = 1;
        }
      }

      // Se não estiver dentro do conjunto, escreve no arquivo de saída
      if (!dentroDoConjunto) {
        fprintf(arquivoSaida, "%s", linha);
      }

      // Se encontrou o separador, marca que não está mais dentro do conjunto
      if (strstr(linha, "---------------------------------") != NULL) {
        dentroDoConjunto = 0;
      }
    }

    // Fecha os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    // Substitui o arquivo original pelo temporário
    remove(cpfaux);
    rename("temp.txt", cpfaux);

    printf("\nDados excluídos com sucesso.\n\n");
  } else {
    printf("\nErro ao abrir os arquivos.\n\n");
  }
}

// Função para inserir os dados do cliente
void inserirDados(t_clientes *cliente, int writeflag) {

  if (writeflag == 1) { // modo escrita (ou sobrescrita total)
    // Solicita dados do usuário
    printf("\nDigite o nome: ");
    scanf(" %[^\n]", cliente->nome);
    printf("Digite o telefone: ");
    scanf(" %[^\n]", cliente->telefone);
    printf("Digite o e-mail: ");
    scanf(" %[^\n]", cliente->email);
    printf("Digite o peso: ");
    scanf("%f", &cliente->peso);
    printf("Digite a altura: ");
    scanf("%f", &cliente->altura);
  } else { // modo atualizar (ou adicionar progresso)

    // Solicita dados do usuário
    printf("Digite o peso: ");
    scanf("%f", &cliente->peso);
    printf("Digite a altura: ");
    scanf("%f", &cliente->altura);
  }

  strcpy(cliente->dataLeitura, obterDataAtual());

  // Calcula o IMC
  cliente->imc = cliente->peso / (cliente->altura * cliente->altura);

  printf("\nDados inseridos com sucesso.\n\n");
}

// Função para consultar os dados do cliente
void consultarDados(t_clientes *cliente) {

  char cpfaux[20];

  strcpy(cpfaux, cliente->cpf);

  FILE *arquivo;
  arquivo = fopen(strcat(cpfaux, ".txt"), "r");

  if (arquivo != NULL) {
    printf("\n------ Lista de Usuários ------\n");

    char linha[TAM];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
      printf("%s", linha);
    }

    // Fecha o arquivo
    fclose(arquivo);
  } else {
    printf("\nErro ao abrir o arquivo.\n\n");
  }
}

// Função para excluir os dados do cliente
void excluirDados(t_clientes *cliente) {

  char cpfaux[20];

  strcpy(cpfaux, cliente->cpf);

  // Remove o arquivo correspondente aos dados do cliente
  if (remove(strcat(cpfaux, ".txt")) == 0) {
    printf("\nDados excluídos com sucesso.\n\n");
  } else {
    printf("\nErro ao excluir os dados.\n\n");
  }
}

int main() {

  t_clientes cliente;
  int opcao = 99;
  char cpfaux[20]; // Variável auxiliar para copiar o cpf com strcpy

  do {

    printf("Digite o CPF do usuário (somente números) ou '0' para sair: ");
    scanf("%11s", cliente.cpf);

    if (strcmp(cliente.cpf, "0") == 0) {

      printf("Saindo...\n");
      opcao = 0;

    } else {
      strcpy(cpfaux, cliente.cpf);

      FILE *arquivo;
      arquivo = fopen(strcat(cpfaux, ".txt"), "r");

      if (arquivo != NULL) {

        printf("\nUsuário encontrado!\n");

        // Arquivo existe, mostrar menu
        printf("\n1. Inserir dados do próximo acompanhamento\n");
        printf("2. Atualizar dados cadastrais\n");
        printf("3. Consultar ficha completa\n");
        printf("4. Excluir Aluno\n");
        printf("5. Excluir dados por data\n");
        printf("0. Sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {

        case 1:
          // Chama a função para inserir dados do proximo acompanhamento
          inserirDados(&cliente, 2);
          criarArquivo(&cliente, 2);
          break;

        case 2:
          // Chama a função para atualizar dados
          inserirDados(&cliente, 1);
          criarArquivo(&cliente, 1);
          break;

        case 3:
          // Chama a função para consultar dados
          lerArquivo(&cliente, 1);
          consultarDados(&cliente);
          break;

        case 4:
          // Chama a função para excluir dados
          excluirDados(&cliente);
          break;

        case 5:
          excluirDadosPorData(&cliente);
          break;

        case 0:
          printf("\nSaindo...\n");
          break;

        default:
          printf("\nOpção inválida.\n\n");
        }

        // limpa CPFaux

      } else {
        printf("\n----- Cadastro de novo Aluno -----\n");
        // Arquivo não existe, criar e inserir dados
        // Chama a função para criar o arquivo e salvar os dados
        inserirDados(&cliente, 1);
        criarArquivo(&cliente, 1);
      }
    }
  } while (opcao != 0);
  return 0;
}
