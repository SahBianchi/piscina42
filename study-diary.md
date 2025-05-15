git config --global user.name "login42"
git config --global user.email "email42"

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


