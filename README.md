# (minha) Configuração do codev

Estou usando um virtual environment para executar o codev,
confira ([arch_codev_install.md](./arch_codev_install.md))

---


<br>

para executar o codev sem chamar o python explicitamente (como
`python3 ./Codev.py`), abra o arquivo `Codev.py` e adicione, na
primeira linha do arquivo, o shebang abaixo:
``` bash
#!/usr/bin/env python3
```
> nota: a sequência `#!` é utilizada para dizer ao kernel qual
interpretador deve ser utilizado na execuçao do script que o segue 

depois, dê permissão de execução ao arquivo `Codev.py`:
``` bash
chmod u+x ./Codev.py
```

<br>

escrevi um shell script que abre outro terminal, inicializa o `tmux`
(multiplexer) e executa o `codev`
``` bash
> codev.sh
chmod u+x codev.sh
```

conteúdo do script `cat ./codev`
``` bash
#!/bin/bash

nohup xterm -e tmux new "source PASTA_DO_CODEV/codev_env/bin/activate && PASTA_DO_CODEV/Codev.py" > /dev/null 2>&1 &
```
> nota: caso não tenha adicionado o shebang no `Codev.py`, use
`python3 PASTA_DO_CODEV/Codev.py`  
> nota: substitua `xterm` pelo seu terminal de preferência (confira se
a flag `-e` precisa ser alterada)

<br>


adicionei o script anterior ao `$PATH` para que seja possível chamá-lo
de qualquer local do CLI
``` bash
mkdir ~/bin
mv ./codev.sh ~/bin/
```

para que a pasta seja adiciona ao `$PATH`, basta inserir
`export PATH=$PATH:$HOME/bin` no ~/.bashrc
``` bash
echo 'export PATH=$PATH:$HOME/bin' >> ~/.bashrc
source ~/.bashrc
```

<br>



