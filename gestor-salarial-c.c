#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    double loss_income = 0; //Percentual de comprometimento da renda com despesas fixas.
    double salary; //Salário Bruto.
    double expenses; //Despesas
    double exp_sum = 0; // Soma das Despesas
    double liquid = 0; //Salário Líquido
    
    printf("\n===================================GESTOR SALARIAL===================================\n");
    printf("\nEste software foi desenvolvido com o objetivo de auxiliar\nna gestão do salário, aplicando conceitos de planejamento\ne organização financeira pessoal.\nSeu salário líquido será divido entre:\n\nFlexível: Gastos necessários para o dia a dia.\n(Ex.: Mercado, imprevistos leves, combustível extra e etc.)\n\nLazer: Gastos não essenciais, ligados a conforto e entretenimento.\n(Ex.: Viagens e hobbies\n\nGuardar: Dinheiro reservado para segurança financeira e objetivos futuros.\n(Ex.:Emergências, investimentos e metas)");
    printf("\n\n======================================================================================\n\n");
    
    printf("Informe seu SALÁRIO: R$");
    scanf("%lf", &salary);
        while(salary <= 0){
            printf("Valor inválido! Tente novamente!\n\n");
            printf("Informe seu SALÁRIO: R$");
            scanf("%lf", &salary);
        }
    printf("\n======================================================================================\n");
    printf("\n————Digite '0' para PARAR de declarar suas despesas fixas————\n\n");
        while(1){
            printf("Informe suas DESPESAS FIXAS(Aluguel, contas e etc.): R$");
            scanf("%lf", &expenses);
            if(expenses == 0){
                break;
            }
            exp_sum += expenses;
        }
        liquid = salary - exp_sum;
        loss_income = (exp_sum / salary) * 100;
        //Alerta
        if(liquid < 0){
            printf("\n======================================ALERTA======================================\n");
            printf("\nATENÇÃO: Suas despesas fixas excedem sua renda.\n");
            printf("Recomendamos reduzir custos ou renegociar dívidas.\n");
            printf("\n==================================================================================\n");
            return 0;
        }
        // Divisão dos valores - fiz a comparação dessa forma para evitar erro do float.
        if(exp_sum * 100 <= salary * 40){ //soma das despesas forem menores ou igual ao salario v
            printf("\n======================================INFORMAÇÕES======================================\n\n");
            printf("VALOR TOTAL DE DESPESAS FIXAS: R$%.2f\n", exp_sum);
            printf("SALÁRIO LÍQUIDO: %.2f\n", liquid);
            printf("SITUAÇÃO: Confortável (Despesas ≤ 40%% do salário)\n");
            printf("\n=====================================DISTRIBUIÇÃO=====================================\n\n");
            printf("Como suas despesas comprometem apenas %.1f%% do salário, recomendamos uma\ndistribuição equilibrada, com maior liberdade para poupar e planejar.\n\nDistribuição Ideal: '40 / 30 / 30'.\n\n",loss_income);
            printf("-----------------------------------------------\n");
            printf("Flexível(40%): R$%.2f\n", liquid*0.4);
            printf("Lazer(30%): R$%.2f\n", liquid*0.3);
            printf("Guardar(30%): R$%.2f\n", liquid*0.3);
            printf("-----------------------------------------------");
        } else if (exp_sum * 100 <= salary * 50){
            printf("\n======================================INFORMAÇÕES======================================\n\n");
            printf("VALOR TOTAL DE DESPESAS FIXAS: R$%.2f\n", exp_sum);
            printf("SALÁRIO LÍQUIDO: %.2f\n", liquid);
            printf("SITUAÇÃO: Equilibrada (Despesas ≤ 50%% do salário)\n");
            printf("\n=====================================DISTRIBUIÇÃO=====================================\n\n");
            printf("Como suas despesas comprometem %.1f%% do salário, recomendamos uma\ndistribuição moderada, mantendo controle dos gastos e reserva financeira.\n\nDistribuição Ideal: '50 / 30 / 20'.\n\n", loss_income);
            printf("-----------------------------------------------\n");
            printf("Flexível(50%): R$%.2f\n", liquid*0.5);
            printf("Lazer(30%): R$%.2f\n", liquid*0.3);
            printf("Guardar(20%): R$%.2f\n", liquid*0.2);
            printf("-----------------------------------------------");
        } else if(exp_sum * 100 <= salary * 60){
            printf("\n======================================INFORMAÇÕES======================================\n\n");
            printf("VALOR TOTAL DE DESPESAS FIXAS: R$%.2f\n", exp_sum);
            printf("SALÁRIO LÍQUIDO: %.2f\n", liquid);
            printf("SITUAÇÃO: Alerta (Despesas ≤ 60%% do salário)\n");
            printf("\n====================================DISTRIBUIÇÃO=====================================\n\n");
            printf("Como suas despesas comprometem %.1f%% do salário, recomendamos uma\ndistribuição mais conservadora, reduzindo gastos não essenciais.\n\nDistribuição Ideal: '60 / 30 / 10'.\n\n", loss_income);
            printf("-----------------------------------------------\n");
            printf("Flexível(60%): R$%.2f\n", liquid*0.6);
            printf("Lazer(30%): R$%.2f\n", liquid*0.3);
            printf("Guardar(10%): R$%.2f\n", liquid*0.1);
            printf("-----------------------------------------------");            
        }else{
            printf("\n======================================INFORMAÇÕES======================================\n\n");
            printf("VALOR TOTAL DE DESPESAS FIXAS: R$%.2f\n", exp_sum);
            printf("SALÁRIO LÍQUIDO: %.2f\n", liquid);
            printf("SITUAÇÃO: Crítica (Despesas > 60%% do salário)\n");
            printf("\n=====================================DISTRIBUIÇÃO=====================================\n\n");
            printf("Suas despesas fixas comprometem %.1f%% do salário, caracterizando uma\nsituação financeira crítica. Nesse cenário, o orçamento fica vulnerável a qualquer imprevisto.\n\nDistribuição Ideal: '70 / 20 / 10'.\n\n", loss_income);
            printf("------------------------------------------------\n");
            printf("Flexível(70%): R$%.2f\n", liquid*0.7);
            printf("Lazer(20%): R$%.2f\n", liquid*0.2);
            printf("Guardar(10%): R$%.2f\n", liquid*0.1);
            printf("------------------------------------------------");          
        }
        //Projeto feito por: Rafael Lisboa Palmieri
    
    return 0;
}
