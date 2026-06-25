# Instalação do codev no *Arch Linux*

Ao tentar executar o codev, caso as bibliotecas necessárias não estejam instaladas, uma mensagem similar à de baixo aparecerá.
``` bash
[~/a/server/.codev] $ python3 Codev.py
Traceback (most recent call last):
  File "/home/rho/a/server/.codev/Codev.py", line 15, in <module>
    from progress.bar import FillingSquaresBar
ModuleNotFoundError: No module named 'psutil'
```
Veja que, na última linha, nos é mostrada uma das bibliotecas que não foi encontrada, nesse caso, 'psutil'.

<br>
Em uma instalação recente do sistema, as seguintes bibliotecas precisam ser instaladas:

`python-requests`, `python-psutil`, `python-colorama` e `python-progress`

No caso do Arch Linux, para a instalação das bibliotecas, é recomendado o uso do repositório padrão [core/extra]. Porém, apenas os primeiros três pacotes estão presentes no repositório padrão e, sem o	`python-progress`, não há como executar o Codev.

## Primeiro método: (yay)
Use um AUR helper para instalar o python-progress

<br>

Instale as bibliotecas disponíveis no repositório padrão:
``` bash
$ sudo pacman -S python-requests python-psutil python-colorama
```

<br>

Instale a biblioteca `python-progress` usando um AUR helper (yay):
``` bash
$ yay -S python-progress
```
obviamente é necessário ter o yay instalado, caso não tenha, siga as instruções em https://github.com/jguer/yay  
**nota:** yay é um AUR (Arch User Repository) helper, serve para instalar aplicações do repositório comunitário do Arch Linux  

<br>

## Segundo método (virtual environment):
Ambientes virtuais do python possibilitam que pacotes sejam instalados isoladamente, de tal forma que conflitos de versionamento ou de ambiente sejam evitados.\
**nota:** para mais informações, leia https://wiki.archlinux.org/title/Python/Virtual_environment

<br>

Instale o pip:
``` bash
$ sudo pacman -S python-pip
```

<br>

Vá até o diretório do codev e crie um ambiente virtual:
``` bash
$ python -m venv codev_env
```

<br>

Em seguida, ative o ambiente (bash):
``` bash
$ source codev_env/bin/activate
```
ou
``` bash
$ . codev_env/bin/activate
```
Note que o prompt será acrescido do nome do environment `(codev_env)`

<br>

Agora é possível instalar todas as bibliotecas usando o pip:
``` bash
(codev_env) $ pip install requests psutil colorama progress
```
<br>

Finalmente podemos executar o Codev.py:
``` bash
(codev_env) $ python3 Codev.py
```

<br>

Para sair do ambiente, basta executar `deactivate` contra o shell:
``` bash
(codev_env) $ deactivate
```

---
nota: esse texto foi escrito na data 21/04/2026, talvez o procedimento tenha mudado significativamente com o passar do tempo

