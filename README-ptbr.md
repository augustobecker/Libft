<h1 align="center">  Libft - @42sp </h1>

<p align="center">:information_source: Uma Biblioteca estática em C com funções padrão recodificadas </p>

<p align="center"><a href="https://www.42sp.org.br/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=SP&color=000&style=for-the-badge&logo=42""></a></p>
<p align="center"><img src="https://user-images.githubusercontent.com/81205527/149165832-9344c9e5-6075-4268-b276-26b60efc5733.png"> </p>
 <p align="center"> <strong>125/100</strong> ✅ </p>
<p align="center"><a href="https://github.com/augustobecker/Libft/blob/master/README.md" target="_blank"><img src="https://img.shields.io/badge/available%20in-EN-blue"></a></p>

## Índice
* [O que é Libft?](#o-que-e-libft)
* [Requisitos](#requisitos)
* [Funções](#funcoes)
* [Makefile](#makefile)
	* [Makefile Colorido](#makefile-colorido)
* [Como funciona?](#como-funciona)
* [Como eu uso a Biblioteca?](#como-eu-uso-a-biblioteca)
* [Como eu testo?](#como-eu-testo)
* [42 Cursus](#42-cursus)
* [Autor](#autor) 
 
<h2 align="center" id="o-que-e-libft"> O que é Libft? </h2>

 O Primeiro projeto na 42. Consiste em uma biblioteca estática em C com funções padrão da linguagem recodificadas que rodam e compilam usando um Makefile.
 A biblioteca pode ser usada de apoio em projetos futuros, uma vez que não é permitido o uso das funções originais.
 Uma vez que tenha terminado o projeto, você pode (e deve) incluir mais funções à sua Libft. Por exemplo, agora os projetos <a href="https://github.com/augustobecker/get_next_line">get_next_line</a> e <a href="https://github.com/augustobecker/ft_printf">ft_printf</a> são parte da minha biblioteca.
	
O projeto é dividio em três partes - Parte I, Parte II e Bônus.

#### Parte I.
 
>Nessa primeira parte, você deve recodificar um conjunto de funções da libc, como definidas em seu manual (man).
>Suas funções precisam apresentar o mesmo protótipo e compartamento das originais. Além disso o nome das funções devem apresenar o prefixo “ft_”. Por exemplon, a strlen se torna
>ft_strlen. **ft_ vem de forty-two(42).
	
<p align="center">• isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero • memcpy • memmove • strlcpy • strlcat • toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi • calloc • strdup</p>
 
#### Parte II.
>Nessa segunda parte, você deve codar um punhado de funções que ou não estão inclusas na libc ou 
>foram incluídas de uma outra forma. Algumas dessas funções podem ser úteis para escrever as funções da parte I.

<p align="center">• substr • strjoin • strtrim • split • itoa • strmapi • striteri • putchar_fd • putstr_fd • putendl_fd • putnbr_fd</p>
	
#### Bônus.
>Na parte Bônus, você deve codificar funções para manipulação de listas encadeadas.
 
 <p align="center">• lstnew • lstadd_front • lstsize • lstlast • lstadd_back • lstdelone • lstclear • lstiter • lstmap</p>
 
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
 
 <h2 align="center" id="funcoes"> Funções </h2>
 
 Essas são as funções presentes na minha Libft atualmente - algumas não fazem parte do subject - já que podemos posteriormente adicionar funções para usar em outros projetos.
 
### Funções da <ctype.h>
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isalpha.c">ft_isalpha</a> - checa se é um caractere alfabético.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isdigit.c">ft_isdigit</a> - checa se é um digito (0 a 9).
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isalnum.c">ft_isalnum</a> - checa se é um caractere alfanumérico.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isascii.c">ft_isascii</a> - checa se é um caractere que faz parte da tabela ASCII tradicional.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isprint.c">ft_isprint</a> - checa se é um caractere printável.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_toupper.c">ft_toupper</a> - converte o caractere para maiúsculo.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_tolower.c">ft_tolower</a> - converte o caractere para minúsculo.
	
### Funções da <string.h>
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memset.c">ft_memset</a> - enche o bloco de memória com um mesmo byte.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strlen.c">ft_strlen</a> - calcula o tamanho de uma string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_bzero.c">ft_bzero</a> - preenche uma string com zero.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memcpy.c">ft_memcpy</a> - copia uma área de memória.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memmove.c">ft_memmove</a> - copia uma área de memória.
 
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strlcpy.c">ft_strlcpy</a> - copia uma string para um tamanho especificado.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strlcat.c">ft_strlcat</a> - concatena uma string para um um tamanho especificado.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strchr.c">ft_strchr</a> - localiza a primeira ocorrência de um caractere em uma string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strrchr.c">ft_strrchr</a> - localiza a última ocorrência de um caractere em uma string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strncmp.c">ft_strncmp</a> - compara duas strings.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memchr.c">ft_memchr</a> - checa um bloco de memória em busca de um caractere.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memcmp.c">ft_memcmp</a> - compara blocos de memória.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strnstr.c">ft_strnstr</a> - localiza uma substring dentro de uma string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strdup.c">ft_strdup</a> - cria uma duplicata da string passada como parâmetro.
	
### Funções da <stdlib.h>
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_atoi.c">ft_atoi</a> - converte uma string para um inteiro.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_calloc.c">ft_calloc</a> - alloca memória e seta o valor de todos os bytes para 0.
	
### Funções não-padrão da linguagem
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_substr.c">ft_substr</a> - retorna uma substring de uma string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strjoin.c">ft_strjoin</a> - retorna uma string que é a junção das duas strings passadas como parâmetro.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strtrim.c">ft_strtrim</a> - Corta o início e fim de uma string quando achada a sequência de caracteres passada.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_split.c">ft_split</a> - separa uma string em várias substrings delimitadas por um caractere.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_itoa.c">ft_itoa</a> - converte um número em string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strmapi.c">ft_strmapi</a> - aplica uma função a cada caractere de uma string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_striteri.c">ft_striteri</a> - aplica uma função a cada caractere de uma string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_putchar_fd.c">ft_putchar_fd</a> - da como output um caratere para um file descriptor.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_putstr_fd.c">ft_putstr_fd</a> - da como output uma string para um file descriptor.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_putendl_fd.c">ft_putendl_fd</a> - da como output uma string para um file descriptor, seguido por uma nova linha.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_putnbr_fd.c">ft_putnbr_fd</a> - da como output um número para um file descriptor.
	
### Funções para Listas Encadeadas 
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstnew.c">ft_lstnew</a> - cria um novo elemento para a lista.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstadd_front.c">ft_lstadd_front</a> - adiciona um elemento no início de uma lista.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstsize.c">ft_lstsize</a> - counta o número de elementos em uma lista.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstlast.c">ft_lstlast</a> - retorna o último elemento de uma lista.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstadd_back.c">ft_lstadd_back</a> - adiciona um elemento ao fim de uma lista.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstclear.c">ft_lstclear</a> - deleta e da free em uma lista.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstiter.c">ft_lstiter</a> - aplica uma função a cada elemento de uma lista.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstmap.c">ft_lstmap </a> - aplica uma função a cada elemento de uma lista.

 ### Funções da get_next_line (Segundo projeto da 42)
	
• <a href="https://github.com/augustobecker/Libft/blob/master/get_next_line.c">get_next_line</a> - lê qualquer arquivo válido linha por linha.
 
 ### Funções da ft_printf (Terceiro projeto da 42)
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_printf.c">ft_printf</a> - imprime uma string formatada em alguma saída do sistema.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_c.c">ft_argument_c</a> - printa um char no stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_arguments_d_i.c">ft_arguments_d_i</a> - printa um número inteiro no stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_p.c">ft_argument_p</a> - printa um endereço de memória (hexadecimal) no stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_percent.c">ft_argument_percent</a> - printa um sinal de porcentagem no stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_s.c">ft_argument_s</a> - printa uma string no stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_u.c">ft_argument_u</a> - printa um unsigned int no stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_arguments_x.c">ft_arguments_x</a> -  printa um número hexadecimal no stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_decimal_length.c">ft_decimal_length</a> - retorna o tamanho de um número decimal.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_free_ptr.c">ft_free_ptr</a> - libera a memória e seta seu valor para nulo.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_decimal_converter_to_hex.c">ft_decimal_converter_to_hex</a> - converte um número decimal em hexadecimal 
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_hex_length.c">ft_hex_length</a> - retorna o tamanho de um número hexadecimal.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_print_reversed_str.c">ft_print_reversed_str</a> - printa uma string ao contrário.
	
 ### Useful Functions
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_count_occurrences.c">ft_count_occurrences</a> - retorna o número de ocorrências de um char em uma string.

	
<h2 align="center" id="makefile"> Makefile </h2>

<p align="center">:information_source: Uma ferramenta de automacão para rodar e compilar seus programas com maior eficiência.	</p>

Um Makefile define uma série de tarefas para serem executadas em shell script. Essas tarefas são escritas em um target nesse formato:
	
	target: pré-requisitos
	<TAB> receita

como em:
	
	fclean:	clean
		@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"
		${REMOVE} ${NAME}
		@echo

A receita (os comandos @echo e por ai vai) para o target fclean só vai ser executada quando o target clean (o pré-requisito) for executado.
Um target funciona sem pré-requisito também:
	
	clean:
		@echo "\n$(NAME): $(RED)object files were deleted$(RESET)"
		${REMOVE} ${OBJS} ${BONUS_OBJS}
		@echo
	
Como você pode ver, há algumas variáveis dentro da receita. As variáveis no Makefile podem ser criadas e atribuídas assim:
	
	GREEN		= \033[0;32m
	RED		= \033[0;31m
	RESET		= \033[0m
	CC		= clang
	FLAGS 		= -Wall -Werror -Wextra

Para usar o valor da variável apenas digite o nome com o sinal de $:
	
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

Usar variáveis faz o seu Makefile mais legível e facil de alterar.
	
Não é necessário que o target seja um arquivo como em $(NAME). Pode ser apenas o nome da receita, como acima. Chamamos esses targets 
de phony targets.

Se você tiver um arquivo com o exato nome da sua phony target, as coisas podem ficar um pouco estranhas.

Para proteger seu Makefile disso, apenas use phony e o nome de todos os seus phony targets usados:
	
	.PHONY:		all clean fclean re bonus

Aqui na 42, o subject diz que:
>Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
	
As regras são target, é só nomear como $(NAME), all, clean, fclean e re.

	
A regra **$(NAME)**, nesse caso, deveria criar a biblioteca estática **$(NAME)**.
	
**all** é usado para o principal objetivo do seu Makefile: criar a biblioteca estática **$(NAME)**.
	
**clean** remove os objetos criados para fazer a biblioteca.
	
**fclean** remove os objetos criados para fazer a biblioteca e a biblioteca estática **$(NAME)**.
	
**re** apenas remove os objetos criados para fazer a biblioteca e a biblioteca estática **$(NAME)**, para então recompilar tudo.

Você pode rodar uma regra do seu Makefile nesse modelo:

	make $(nome_regra)
	
Assim:
	
	make clean

No caso do target all, só digite make
	
	make

<h3 align="center" id="makefile-colorido"> Makefile Colorido </h3>

Escolha uma cor, adicone como variável e use no seu Makefile:

	BLACK		="\[\033[0;30m\]"        
	RED		="\[\033[0;31m\]"       
	GREEN		="\[\033[0;32m\]"      
	YELLOW		="\[\033[0;33m\]"       
	BLUE		="\[\033[0;34m\]"        
	PURPLE		="\[\033[0;35m\]"     
	CYAN		="\[\033[0;36m\]"         
	WHITE		="\[\033[0;37m\]"    
	RESET		="\033[0m"

Você pode usar assim:
	
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"
	
E então "$(NAME) was deleted" será printada em vermelho no terminal.

Maneiro, né?

Lembre de resetar a cor quando terminar de usar uma cor, de contrário o terminal ficará da cor da última cor usada.
	
 
<h2 align="center" id="como-funciona"> Como funciona? </h2>

O funcionamento da biblioteca pode ser explicado apenas desmembrando o Makefile. As funções da biblioteca estão todas em arquivos .c.
Estes arquivos são compilados em objetos (.o) para serem depois inseridos na biblioteca, fazemos isso apenas compilando com as flags -c e -o.

    clang -c exemplo1.c -o exemplo1.o
    clang -c exemplo2.c -o exemplo2.o
    clang -c exemplo3.c -o exemplo3.o
    clang -c exemplo4.c -o exemplo4.o
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

Você deve mostrar qual é a biblioteca:

    clang exemplo.c libft.a

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

<h2 align="center" id="42-cursus"> 42 Cursus </h2>
	
A 42 é uma iniciativa educacional global que propõe uma nova forma de aprender tecnologia: sem professores, sem salas de aula,
estudantes aprendendo com seus colegas estudantes (Aprendizado peer to peer),
com uma metodologia que desenvolve habilidades de computação e da vida.
Sem mencionar que é completamente gratuita e aberta para todos, sem pré-requisitos. 
    
As admissões na 42 são diferentes de outras escolas. Usamos um processo de admissão baseado em mérito.
O passo final no processo é a Piscina - parte parte do processo seletivo que requer 4 semanas de código intenso e imersivo.
Não é necessário experiência anterior em programação.
    
Você pode conferir mais sobre o processo de admissão no site da 42sp: https://www.42sp.org.br
    
ou no meu repositório do github: <a href="https://github.com/augustobecker/42sp_Piscine">42 Piscine</a>

Para ver outros projetos da 42 desenvolvidos por mim, clique aqui: <a href="https://github.com/augustobecker/42cursus">42 Cursus </a>

<h2  align="center" id="autor">Autor</h2>
<div align="center">
	<div>
	<img height="222em" src="https://user-images.githubusercontent.com/81205527/174709160-f4bc029d-b667-469b-b2a7-4e036f1c5349.png">
	</div>
	<div>
		<strong> Augusto Becker | acesar-l | 🇧🇷👨‍🚀</strong>
	
:wave: Fale comigo: 
    	</div> 
    	<div>
  	<a href="https://www.linkedin.com/in/augusto-becker/" target="_blank"><img align="center" alt="LinkedIn" height="60" src="https://user-images.githubusercontent.com/81205527/157161849-01a9df02-bf32-45be-add4-122bc40b48cf.png"></a>
	<a href="https://www.instagram.com/augusto.becker/" target="_blank"><img align="center" alt="Instagram" height="60" src="https://user-images.githubusercontent.com/81205527/157161841-19ec3ab2-2c8f-4ec0-8b9d-3cd885256098.png"></a>
	<a href = "mailto:augustobecker.dev@gmail.com"> <img align="center" alt="Gmail - augustobecker.dev@gmail.com" height="60" src="https://user-images.githubusercontent.com/81205527/157161831-eb9dffee-404b-4ffe-b0af-34671219f7fb.png"></a>
	<a href="https://discord.gg/3kxYkBRxUy" target="_blank"><img align="center" alt="Discord - beckerzz#3614" height="60" src="https://user-images.githubusercontent.com/81205527/157161820-de88dc63-61a3-4c9f-9445-07ac98bf0bc2.png"></a>
	</div>
</div>    	
