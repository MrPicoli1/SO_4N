#Cola de Comandos Importantes

##Git:

git init ->Cria um novo repositorio local
git clone <caminho_ssh> ->Cria uma copia do repositorio remoto no repositorio local
git branch ->Lista todas as branchs do repositorio
git branch -d <nome_da_branch> ->Apaga a branch
git checkout <nome_da_branch> ->Troca para a branch digitada
git checkout -b <nome_da_branch> ->Cria uma nova branch e troca para ela
git pull ->Atualiza a branch local com as alteracoes da branch origem
git merge <nome_da_branch> ->Faz um merge de uma branch com a branch ativa
git status ->Lista todas as mudancas feitas na branch ativa
git add * ->Adiciona as modificoes no stagin
git commit -m "mensagem_do_commit" ->Faz o commit das alteracoes
git push origin <nome_da_branch> ->Faz o push da branch local para o repositorio origem

###Git - SSH:

ssh-keygen -t ed25519 -C "email_do_git"
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
cat ~/.ssh/id_ed25519.pub
ssh -T git@github.com

##GCC, C e Novos Arquivos:

touch nome_arquivo.extensao_arquivo ->Cria um novo arquivo
vi nome_arquivo.extensao_arquivo ->Abre o arquivo no VIM
gcc nome_arquivo.extensao_arquvio -o nome_arquivo.out ->Compila o arquivo em um programa
./nome_arquivo.out <<posiveis argumentos>> ->Executa o programa

###VIM:

i ->Inicia o modo INSERT para editar o arquivo
Botao ESC ->Sai do modo INSERT
:wq ->Escreve/Modifica o arquivo e sai
:q ->Sai sem salvar 

