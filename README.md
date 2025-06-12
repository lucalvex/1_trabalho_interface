# Projeto Levenshtein com PocketPy

## Descrição
Este projeto apresenta uma implementação do algoritmo de distância de Levenshtein em linguagem C, com suporte à execução de scripts Python incorporados por meio da biblioteca PocketPy. A proposta é permitir o cálculo da similaridade entre strings, tanto via código C puro quanto por scripts Python embutidos.

## Principais Recursos
**Cálculo de Distância de Levenshtein**: Algoritmo otimizado para comparação entre duas cadeias de caracteres.

**Integração Python**: Suporte à execução de scripts Python diretamente no programa em C.

**Interface C ↔ Python**: Integração bidirecional entre o núcleo em C e scripts Python usando a PocketPy.

**Exemplos Práticos**: Scripts e arquivos de exemplo demonstrando o uso prático da integração.

## Requisitos Necessários
- Compilador compatível (GCC ou Clang)
- Ferramenta Make
- Sistema operacional compatível (Linux, macOS, Windows com MinGW)

## Organização dos Arquivos
**main.c**
- Arquivo principal da aplicação
- Responsável por inicializar o interpretador PocketPy
- Carrega e executa o script script.py
- Registra a função distance() no ambiente Python
- Conecta a lógica em C com o script Python

**levenstein.c/.h**
- Código-fonte do algoritmo de Levenshtein (sob licença MIT)
- Funções:
  - levenstein()
  - levenstein_n()
- Estrutura eficiente com consumo otimizado de memória
- Preparado para interoperar com Python via PocketPy

**pocketpy.c/.h**
- Módulo para embutir o interpretador Python
- Interface C para executar código Python em tempo de execução
- Responsável por gerenciar a criação e o ciclo de vida dos objetos Python

**Makefile**
Contém as instruções de compilação e execução:
- **make** ou **make all**: Compila todos os módulos do projeto
- **make main**: Compila apenas o arquivo principal
- **make run**: Compila e executa a aplicação
- **make clean**: Remove arquivos intermediários e o executável final


## Release versionado para download.
https://github.com/lucalvex/1_trabalho_interface
