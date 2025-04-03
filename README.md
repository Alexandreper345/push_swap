# 🔀 push_swap

**push_swap** é um projeto que implementa um algoritmo eficiente para ordenar uma pilha de números utilizando um conjunto limitado de operações em duas pilhas (A e B). O objetivo é criar a solução mais eficiente possível, com o menor número de movimentos.

---

## 📌 Índice

- [Objetivo do Projeto](#-objetivo-do-projeto)
- [Regras do push_swap](#-regras-do-push_swap)
- [Tecnologias Utilizadas](#-tecnologias-utilizadas)
- [Instalação](#-instalação)
- [Como Usar](#-como-usar)
- [Operações Disponíveis](#-operações-disponíveis)
- [Estratégia de Ordenação](#-estratégia-de-ordenação)
- [Testes](#-testes)
- [Contato](#-contato)

---

## 🎯 Objetivo do Projeto

O **push_swap** tem como objetivo ordenar uma lista de números inteiros usando um conjunto restrito de operações em pilhas. A complexidade do projeto está em implementar um algoritmo eficiente que minimize o número de movimentos necessários para a ordenação.

**Destaques:**
- ✅ Manipulação de pilhas
- ✅ Algoritmos de ordenação eficientes
- ✅ Implementação otimizada

---

## 📜 Regras do push_swap

- A pilha **A** começa com uma lista de números desordenados.
- A pilha **B** começa vazia.
- Apenas um conjunto limitado de operações pode ser usado para manipular os números entre as pilhas.
- O objetivo é ordenar a pilha **A** com o menor número possível de operações.

---

## 🛠 Tecnologias Utilizadas

- **Linguagem:** C  
- **Compilador:** `cc` (ou GCC, Clang)  
- **Paradigma:** Programação estruturada  
- **Algoritmos:** Ordenação por meio de pilhas  
- **Sistemas Operacionais:** Linux, macOS  

---

## 🛠 Instalação

### 🔹 Passo 1: Clonar o repositório
```sh
git clone https://github.com/seu-usuario/push_swap.git
```

### 🔹 Passo 2: Compilar o projeto
```sh
cd push_swap
make
```

---

## 🚀 Como Usar

Para rodar o programa, execute o seguinte comando:
```sh
./push_swap <números>
```
Exemplo:
```sh
./push_swap 5 3 8 1 2
```
Isso imprimirá a sequência de operações necessárias para ordenar os números fornecidos.

Para testar se a saída está correta, pode-se usar o `checker` (se disponível):
```sh
ARG="5 3 8 1 2"; ./push_swap $ARG | ./checker $ARG
```

---

## 🔄 Operações Disponíveis

| Operação | Descrição |
|----------|-------------|
| **sa** | Troca os dois primeiros elementos da pilha A |
| **sb** | Troca os dois primeiros elementos da pilha B |
| **ss** | Troca os dois primeiros elementos de A e B simultaneamente |
| **pa** | Move o primeiro elemento da pilha B para a pilha A |
| **pb** | Move o primeiro elemento da pilha A para a pilha B |
| **ra** | Roda a pilha A para cima |
| **rb** | Roda a pilha B para cima |
| **rr** | Roda A e B simultaneamente |
| **rra** | Roda a pilha A para baixo |
| **rrb** | Roda a pilha B para baixo |
| **rrr** | Roda A e B para baixo simultaneamente |

---

## 📊 Estratégia de Ordenação

O algoritmo utilizado no **push_swap** é baseado no **Radix Sort**, uma abordagem eficiente para ordenar grandes conjuntos de números. Ele funciona manipulando os bits dos números e utilizando as pilhas A e B de forma estratégica para minimizar o número de operações.

**Por que Radix Sort?**
- 🔹 Complexidade O(n log n), garantindo eficiência em grandes conjuntos de números.
- 🔹 Usa a técnica de ordenação por bits, reduzindo a necessidade de comparações diretas.
- 🔹 Ideal para cenários onde a performance é essencial.

---

## 🧪 Testes

Para testar o push_swap, recomenda-se utilizar scripts e ferramentas auxiliares como:

- `checker` (verifica se a saída está correta)
- Testes automatizados com listas de números de diferentes tamanhos

Exemplo de teste:
```sh
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```
Isso retornará o número de operações usadas para ordenar a sequência fornecida.

---

## 📩 Contato

Se tiver alguma dúvida ou sugestão, entre em contato:
📧 **E-mail:** [asilvaperoba@gmail.com](mailto:asilvaperoba@gmail.com)

