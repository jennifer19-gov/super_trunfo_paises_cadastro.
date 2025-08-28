# Super Trunfo - Países 🇧🇷

Este projeto foi desenvolvido como parte do desafio da disciplina de programação da faculdade, proposto pela empresa MateCheck. O jogo simula o Super Trunfo com cartas de cidades brasileiras, divididas por estados.

## 🧩 Níveis do Desafio

### 🔰 Nível Novato
Cadastro de duas cartas com os seguintes atributos:
- Código da cidade (ex: A01)
- População
- Área
- PIB
- Pontos turísticos

### 🧮 Nível Aventureiro
Além do cadastro, são calculados:
- Densidade Populacional
- PIB per Capita

### 🧠 Nível Mestre
Comparação entre as cartas e cálculo do Super Poder:
- Comparação atributo a atributo
- Super Poder = soma dos atributos + inverso da densidade populacional

## 🛠️ Como compilar

Use um compilador C como `gcc`:

```bash
gcc main.c -o supertrunfo
./supertrunfo
