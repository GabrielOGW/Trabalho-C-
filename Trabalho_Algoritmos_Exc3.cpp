#include <stdio.h>

main(){
//variaveis:
    int somaVeiculos = 0, somaAcidentes = 0, contCidade = 0, contCidadePequena = 0, maior = 0, menor = 5000;
    int veiculos, acidentes, mediaVeiculos, mediaAcidentes, codCidade;
//inicio do codigo, repete enquanto o 0 não for digitado
    while(codCidade != 0){
        printf("\nDigite o codigo da cidade: \nOu digite 0 para o fim da pesquisa: ");
        scanf("%d",&codCidade);
        if (codCidade == 0){
            break;
        }
        printf("\nCidade %d\n", codCidade);
        printf("Qual a quantidade de veiculos de passeio: ");
        scanf("%d",&veiculos);
        printf("Quantos acidentes de transito, com vitimas houve: ");
        scanf("%d",&acidentes);
//Enquanto pega os dados das cidades vai somando em variaveis que serão usadas dps
        contCidade++;
        somaVeiculos = somaVeiculos + veiculos;
        if(acidentes > maior){
            maior = acidentes;
        }
        if(acidentes < menor){
            menor = acidentes;
        }
          if(veiculos < 2000){
            contCidadePequena++;
            somaAcidentes = somaAcidentes + acidentes;
        }
    }
//calcula a media de veiculos, e media de acidentes em cidades menores
    mediaAcidentes = somaAcidentes/contCidadePequena;
    mediaVeiculos = somaVeiculos / contCidade;
    //apresenta na tela as informações solicitadas
    printf("\nA quantidade de cidades pesquisadas foram: %d cidades", contCidade);
    printf("\nA cidade com maior número de acidentes, houve: %d acidentes", maior);
    printf("\nA cidade com menor número de acidentes, houve: %d acidentes", menor);
    printf("\nMedia de acidentes em cidades com menos de 2000 veiculos: %d\n", mediaAcidentes);
    printf("media de veiculos nas %d cidades: %d\n", contCidade, mediaVeiculos);
}