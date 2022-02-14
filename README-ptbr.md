<h1 align="center">  Libft - @42sp </h1>

<p align="center">:information_source: Uma Biblioteca estática em C com funções padrão recodificadas </p>

<p align="center"><a href="https://www.42sp.org.br/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=SP&color=000&style=for-the-badge&logo=42""></a></p>
<p align="center"><img src="https://user-images.githubusercontent.com/81205527/149165832-9344c9e5-6075-4268-b276-26b60efc5733.png"> </p>
 <p align="center"> <strong>125/100</strong> ✔️ </p>
<p align="center"><a href="https://github.com/augustobecker/Libft/blob/master/README.md" target="_blank"><img src="https://img.shields.io/badge/available%20in-EN-blue"></a></p>

## Índice
* [O que é Libft?](#o-que-e-libft)
* [Requisitos](#requisitos)
* [Como funciona?](#como-funciona)
* [Como eu uso a Biblioteca?](#como-eu-uso-a-biblioteca)
* [Como eu testo?](#como-eu-testo)
 
<h2 align="center" id="o-que-e-libft"> O que é Libft? </h2>

 O Primeiro projeto na 42. Consiste em uma biblioteca estática em C com funções padrão da linguagem recodificadas que rodam e compilam usando um Makefile.
 A biblioteca pode ser usada de apoio em projetos futuros, uma vez que não é permitido o uso das funções originais.
 
 <h2 align="center" id="requisitos"> Requisitos </h2>

<p  align="center"> :warning: O projeto deve estar de acordo com a <a href="https://github.com/42School/norminette/blob/master/pdf/pt_br.norm.pdf" target="blank">Norma</a> </p>
A Norma é um padrão de programação que define um conjunto de regras a seguir ao escrever um código na 42. A norma aplica-se a todos os projetos C dentro do currículo interno por padrão, e para qualquer projeto onde é especificado. Aqui algumas das regras:

    Cada função dever ter no máximo 25 linhas, não contando suas próprias chaves '{}'.
    
    Cada linha deve ter no máximo 80 colunas de largura, comentários incluídos.
    
    Uma função pode ter no máximo 4 parâmetros definidos.
   
    Não podem ser declaradas mais que 5 variáveis por função.
    
    Não é permitido o uso de: for , do...while , switch , case ,  goto  ,
    operadores ternários como `?' e VLAs - Matrizes de comprimento variável.
  A norminette (como chamamos a norma na 42) é feita em python e é open source.
  
  O repositório está disponível em https://github.com/42School/norminette
  
  Além da norma padrão, o projeto tem alguns requisitos próprios
  
    É proibido declarar variáveis globais.
   
    Usar o comando libtool para criar a biblioteca é proibido.
    
    O Makefile deve compilar com as flags -Wall, -Wextra e -Werror
  
<h2 align="center" id="como-funciona"> Como funciona? </h2>

O funcionamento da biblioteca pode ser explicado apenas desmembrando o Makefile. As funções da biblioteca estão todas em arquivos .c.
Estes arquivos são compilados em objetos (.o) para serem depois inseridos na biblioteca, fazemos isso apenas compilando com a flag -c.

    clang -c exemplo1.c exemplo1.o
    clang -c exemplo2.c exemplo2.o
    clang -c exemplo3.c exemplo3.o
    clang -c exemplo4.c exemplo4.o
E então usando o comando ar rcs para criar a biblioteca com todos os objetos.

    ar rcs libft.a exemplo1.o exemplo2.o exemplo3.o exemplo4.o

Com todos esses arquivos transformados em objetos não precisamos compilar todo o código de novo em caso de alguma alteração, apenas os arquivos modificados seriam recompilados.

O Makefile é usado para automatizar o processo, uma vez que há pelo menos 40 arquivos a ser compilados em objeto e depois linkados na biblioteca.
 
<h2 align="center" id="como-eu-uso-a-biblioteca"> Como eu uso a Biblioteca? </h2>
O objetivo é criar uma bilioteca chamada libft.a feita com os arquivos fonte.

Para criar a biblioteca, clone o projeto:

    git clone https://github.com/augustobecker/libft libft
Entre no repositório:

    cd libft
Rode o comando Make (para executar o Makefile que vai compilar o código fonte e criar a biblioteca):

    make

Você deve ver um arquivo libft.a e alguns arquivos objeto (.o).

Agora, para limpar tudo (remover os arquivos .o), use make clean:

    make clean
Agora, só precisa adicionar esse cabeçalho nos seus arquivos .c e usar as funções da Libft:

    #include "libft.h"
Se tentar compilar seus arquivos com clang usando clang examplo.c vai receber um erro de undefined symbol para as funções da Libft.

Você deve mostrar o caminho para sua biblioteca e qual é a biblioteca:

    clang exemplo.c -L. -lft

-L mostra o caminho para sua biblioteca (.) nesse caso

-l Recebe o nome da biblioteca. Essa é a sequência de caracteres que vem após o lib no nome da sua biblioteca lib<strong>ft</strong>.

É isso, agora basta executar com ./a.out

<h2 align="center" id="como-eu-testo"> Como eu testo? </h2>

Para testar o código vamos usar um Tester para a Libft feito pelo @jgambard. Há vários outros bons testers mas hoje vou cobrir apenas esse.

Para testar o código desse repositório:
Clone o repositório e entre nele:

    git clone https://github.com/augustobecker/libft libft
      
    cd libft/
 
Agora, clone o Libft Tester do @jgambard
    
    git clone https://github.com/Tripouille/libftTester libftTester
Entre na pasta do Tester e rode o teste mandatório e então o bônus:

    cd libftTester
    make m
    make b
    
Se você fez tudo corretamente, deve ver algo como isso:
![image](https://user-images.githubusercontent.com/81205527/149175403-68b2b73b-5669-45ff-a874-e95055abe0e3.png)
