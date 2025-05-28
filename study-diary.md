Configurações iniciais:
- configurar idioma do computador para inglês

- para configurar o git:
git config --global user.name "login42"
git config --global user.email "email42"

- para configurar o vc code, baixar a extensão 42 Header
ctrl + alt + h - serve para colocar o header que a 42 pede

engrenagem -> settings -> na pesquisa digitar Whitespace -> trocar de selection para all, para mostrar os espaçamentos
depois ir no icone de space e clicar em convert indetation to tabs



-------------------------------------------------------------

Compressing filecompressing file

tar -cf name-file.tar nameFile = Command used to package files and directories (like a .zip, but without compression; if you want to compress the files, you have to add the -z tag, making the command look like this: "tar -czf name-file.tar nameFile) Where -c is to create, -f is to file, and -z is to compress and if you want to pack more than one file, just use the * after the file name.


-------------------------------------------------------------

Create single or multiple files and directories, ordered or not

echo "" > name-file = command to create empty file

echo "content" > name-file = command to create a file with content

truncate -s 40 nameFile = command to create a file with content 40bytes

for i in {1..6}; do > name-file$i; done = Command to create more than one ordered file with the same name, example: test1, test2, test3, and so on.

for i in 0 3 5; do > name-file$i; done = command similar to the previous one, but to create unordered files

touch name-file {1..10} = Another way to create more than one file at the same time, ordering them, would be name-file1, name-file2, name-file3, and so on.

touch name-file {5 15 20} = Another way to create more than one file at the same time in an unordered manner would be name-file5, name-file15 and name-file20
 
to create a directory just give the command --> mkdir = create directory <-- and to create more than one directory at the same time, whether it is ordered or not, just follow the same logic above

You can also create a folder inside another using the command --> mkdir -p name-file/subName-file 

ln -s = command to create a symbolic link


---------------------------------------------------------------

Change the date and time

touch -t aaaammddhhmm name-file = change the file date

---------------------------------------------------------------

Change permissions
chmod u=,g=,o= name-file
chmod 700 name-file serve para colocar todas as permissões de uma vez, tem que somar o numero referente as permisões e cada parte serve para um tipo de usuario.

u= user
g= group
o= outhers

permissions 
r= read 4
w= write 2
x= execute 1

ex07
patch a sw.diff -o b - serve para dar "merge" de um arquivo para outro manualmente

ex08
find . \( -name '*~' -o -name '#*#' \) -type f -print -delete - o ponto significa que é a partir da onde eu to rodando o codigo, \ serve para escapar os caracteres especiais como:(), -o serve para fazer mais de uma pesquisa, -type serve para dizer qual tipo de arquivo é, f de file que são especificavente arquivos, sem ser diretorios e links, - print é para mostrar no terminal e o -delete para apagar, porem ele vai apagar automaticamente, sem me perguntar antes. 

ex09
depois de criar o arquivo tem que dar os seguintes comandos:
printf '%041s42' '' > test_file - para criar um arquivo com o 42 na posição 42

file -m ft_magic test_file - para o arquivo ft_magic buscar no test_file


shell01 ex01
id -Gn "$FT_USER" | tr ' ' ',' | tr -d '\n'
o tr serve para dizer que eu quero trocar um coisa por outra
-d é de delimitador para remover a ocorrencia que ele achou

ex02
find . -type f -name "*.sh" -exec basename {} .sh \; - -exec é para executar o comando que vem a seguir, basename {} é o comando que serve para remover o caminho relativo aos arquivos que tem.sh que foram encontrados, e o .sh apos o {} serve para retirar o .sh do nome do arquivo, entao so vai aparecer os arquivos que terminam com .sh por conta da parte da busca sem o caminho e sem o .sh por conta da parte depois do -exec e o ; serve para dizer que o comando acabou

ex03
find . | wc -l - find . vai listar todos os arquivos a partir da pasta que eu estou, o | serve para ele pegar todos esses resultados e usar no proximo comando, wc = word count serve para contar varias coisas relacionadas aos arquivos e diretorios e etc que ele encontrou dentro do comando find ., e o -l é um argumento especifico do comando wc que serve para mostrar a quantidade de linhas
---------------------------------------------------------------------
C

unica lib liberada no momento -> #include <unistd.h>

para testar os exercicios dos outros alunos:

void	nome da função(nome da variavel = parametro);

int	main(void) -> 
{
    ft_putchar('parametro');
    return (0);
}

para compilar o projeto precisa usar o seguinte comando e as flags
gcc -Wall -Wextra -Werror nome-do-arquivo.c -o nome-do-arquivo


comandos git:
git remote add nome_da_branch url_repositorio + git remote + git push novo_nome_da_branch = para enviar os arquivos para a intra sem precisar clonar uma outra pasta 

git log = para ver se a pessoa configurou o git config user.email com o email da intra