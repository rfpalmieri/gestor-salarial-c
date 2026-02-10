# 💰 Gestor Salarial em C
Aplicação em C desenvolvida para auxiliar no planejamento financeiro pessoal,
analisando o comprometimento do salário com despesas fixas e sugerindo uma
distribuição adequada do valor líquido.
## 🧠 Lógica do Sistema
- O usuário informa o salário
- O usuário informa as despesas fixas
- O sistema calcula:
  - Percentual de comprometimento da renda
  - Salário líquido disponível
- Com base nesse percentual, recomenda um modelo de distribuição:
  - Flexível
  - Lazer
  - Guardar
## 📊 Critérios de Avaliação
| Comprometimento | Situação       | Distribuição |
|-----------------|----------------|--------------|
| ≤ 40%           | Confortável    | 40 / 30 / 30 |
| ≤ 50%           | Equilibrada    | 50 / 30 / 20 |
| ≤ 60%           | Alerta         | 60 / 30 / 10 |
| > 60%           | Crítica        | 70 / 20 / 10 |

A lógica evita erros de ponto flutuante ao comparar proporções diretamente.
## 🛠 Tecnologias
- Linguagem C
- Compilador GCC
- Programação estruturada
##🔄 Funcionamento do Programa (Passo a Passo)
###1️⃣ Apresentação e entrada do salário

O programa inicia apresentando sua proposta ao usuário e solicita a inserção do salário mensal, garantindo que o valor informado seja válido.
![Apresentação e entrada do salário](img-1.PNG)

###2️⃣ Declaração das despesas fixas
O usuário informa todas as despesas fixas (aluguel, contas, etc.).
Ao finalizar, o sistema calcula e exibe: 
- Total de despesas fixas 
- Salário líquido disponível
- Situação financeira (Confortável, Equilibrada, Alerta ou Crítica)
![Declaração das despesas e análise](img-2.PNG)
###3️⃣ Distribuição do salário líquido
Com base no percentual de comprometimento da renda, o programa recomenda uma distribuição adequada do salário líquido entre:
-Flexível
-Lazer
-Guardar
![Distribuição do salário líquido](img-3.PNG)

