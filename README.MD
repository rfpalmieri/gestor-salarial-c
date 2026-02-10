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
## ▶️ Como compilar e executar

Este projeto foi desenvolvido em linguagem C.

### Pré-requisitos
- Compilador GCC instalado

### Compilação
No terminal, dentro da pasta do projeto, execute:

```bash
gcc main.c -o gestor_salarial
- Programação estruturada
