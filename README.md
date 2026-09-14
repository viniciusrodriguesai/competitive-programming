# Competitive Programming

[English](#english) · [Português](#português)

## English

This repository tracks my competitive programming study and practice in C++. It contains individual problem files and, in some collections, statement PDFs. Its directories reflect different learning contexts rather than a single curriculum.

### Current focus

**PACODE → 2026.2 → beginner track (`turma iniciante`) → [current STL list][current-list].**

The list is named *Lista Iniciante - STL (Vector - Pair - Stack - Queue)* and contains folders for A — Vector-Sort, B — Good Sequence, and C — Cards. It is my current focus within PACODE, not the scope of PACODE as a whole.

### Learning tracks

| Track | Status | What belongs here |
| --- | --- | --- |
| [PACODE](Pacode/) | Active | Structured training by period, track, list, topic, and problem collection. |
| [Independent study](study/) | Paused | Earlier, self-directed study by topic; the existing exercises are in [`basic-cpp/`](study/basic-cpp/). |
| [Luogu practice](luogu/) | Separate practice | Problem and contest replay work in another context. |

These tracks are independent: the same topic can appear in `study/` and `Pacode/` without being part of one continuous syllabus. Paused simply means that `study/` is not my current focus.

### Repository map

```text
competitive-programming/
├── Pacode/
│   ├── 2026.2/                # Current beginner-track STL list
│   ├── 2026/mashup_geral/     # Mixed-problem practice
│   ├── OPI2024/               # C++ files and statement PDFs
│   └── opi_2025/              # Another OPI collection
├── study/
│   └── basic-cpp/             # Earlier C++ exercises
└── luogu/
    └── luoguicpc-2025-shanghai-regional-replay/
```

For a starting point beyond the current list, browse [PACODE's mixed practice](Pacode/2026/mashup_geral/), the [OPI 2024 collection](Pacode/OPI2024/), or the [Luogu Shanghai Regional replay](luogu/luoguicpc-2025-shanghai-regional-replay/).

### Topics in the code

Examples from the existing files:

- C++ basics and STL containers — [`vector`, `pair`, `stack`, `queue`, and `deque` exercises](study/basic-cpp/).
- Sorting and two-pointer matching — [Apartments](Pacode/2026/mashup_geral/apartments.cpp).
- Number theory and dynamic programming — [prime checking](Pacode/Number_Theory_%28Iniciante%29/next_prime.cpp) and [knapsack](Pacode/exercicios_avulsos/knapsack_1.cpp).
- Graph traversal, number-theoretic transform, and disjoint-set union — [OPI 2024 I](Pacode/OPI2024/I.cpp) and [OPI 2024 G](Pacode/OPI2024/G.cpp).

### Contest and platform practice

PACODE includes [OPI 2024](Pacode/OPI2024/) and [OPI 2025](Pacode/opi_2025/) problem collections. Separately, `luogu/` holds a [2025 Shanghai Regional replay](luogu/luoguicpc-2025-shanghai-regional-replay/), which records practice rather than official participation.

### About this archive

Each `.cpp` is an independent program or attempt. Older files remain as a record of how my work has evolved rather than being rewritten every time I learn a new approach. Judge verdicts are not tracked in this overview.

C++ is the source language used here. Some programs use GNU-specific headers or extensions, so compile files individually with a compatible toolchain. Problem statements are included as PDFs where available.

## Português

Este repositório registra meus estudos e minha prática em programação competitiva com C++. Ele reúne arquivos de problemas e, em algumas coleções, enunciados em PDF. Os diretórios representam contextos diferentes de aprendizado, não um currículo único.

### Foco atual

**PACODE → 2026.2 → turma iniciante → [lista atual de STL][current-list].**

A lista se chama *Lista Iniciante - STL (Vector - Pair - Stack - Queue)* e contém pastas para A — Vector-Sort, B — Good Sequence e C — Cards. Ela é meu foco atual dentro do PACODE, mas não representa todo o conteúdo do PACODE.

### Trilhas de aprendizado

| Trilha | Situação | Conteúdo |
| --- | --- | --- |
| [PACODE](Pacode/) | Ativa | Treinos organizados por período, turma, lista, assunto e coleção de problemas. |
| [Estudo independente](study/) | Pausada | Estudo anterior, por tópicos e no meu próprio ritmo; os exercícios existentes estão em [`basic-cpp/`](study/basic-cpp/). |
| [Prática no Luogu](luogu/) | Contexto separado | Problemas e replay de competição fora das outras duas trilhas. |

As trilhas são independentes: um mesmo assunto pode aparecer em `study/` e em `Pacode/` sem fazer parte de uma sequência única. Pausada significa apenas que `study/` não é meu foco atual.

### Mapa do repositório

```text
competitive-programming/
├── Pacode/
│   ├── 2026.2/                # Lista atual de STL da turma iniciante
│   ├── 2026/mashup_geral/     # Treino com problemas variados
│   ├── OPI2024/               # Arquivos C++ e enunciados em PDF
│   └── opi_2025/              # Outra coleção da OPI
├── study/
│   └── basic-cpp/             # Exercícios anteriores de C++
└── luogu/
    └── luoguicpc-2025-shanghai-regional-replay/
```

Além da lista atual, você pode explorar o [treino de problemas variados do PACODE](Pacode/2026/mashup_geral/), a [coleção OPI 2024](Pacode/OPI2024/) ou o [replay da Regional de Shanghai no Luogu](luogu/luoguicpc-2025-shanghai-regional-replay/).

### Assuntos presentes no código

Alguns exemplos dos arquivos existentes:

- Fundamentos de C++ e contêineres da STL — [exercícios com `vector`, `pair`, `stack`, `queue` e `deque`](study/basic-cpp/).
- Ordenação e pareamento com dois ponteiros — [Apartments](Pacode/2026/mashup_geral/apartments.cpp).
- Teoria dos números e programação dinâmica — [verificação de primos](Pacode/Number_Theory_%28Iniciante%29/next_prime.cpp) e [mochila](Pacode/exercicios_avulsos/knapsack_1.cpp).
- Percurso em grafos, transformada numérica teórica (NTT) e conjuntos disjuntos (DSU) — [OPI 2024 I](Pacode/OPI2024/I.cpp) e [OPI 2024 G](Pacode/OPI2024/G.cpp).

### Prática em competições e plataformas

O PACODE contém coleções de problemas da [OPI 2024](Pacode/OPI2024/) e da [OPI 2025](Pacode/opi_2025/). Separadamente, `luogu/` guarda um [replay da Regional de Shanghai de 2025](luogu/luoguicpc-2025-shanghai-regional-replay/), como registro de prática, não de participação oficial.

### Sobre este acervo

Cada `.cpp` é um programa ou uma tentativa independente. Mantenho os arquivos mais antigos como registro da evolução do meu trabalho, sem reescrever todas as soluções a cada abordagem nova que aprendo. Este panorama não registra vereditos de juízes online.

C++ é a linguagem de código-fonte usada aqui. Alguns programas utilizam cabeçalhos ou extensões do GNU; por isso, compile cada arquivo separadamente com uma ferramenta compatível. Há enunciados em PDF quando disponíveis.

[Vinicius Rodrigues](https://github.com/viniciusrodriguesai) · [MIT License / Licença MIT](LICENSE)

[current-list]: Pacode/2026.2/turma%20iniciante/Lista%20Iniciante%20-%20STL%20%28Vector%20-%20Pair%20-%20Stack%20-%20Queue%29/
