Instalação do codev no ArchLinux

Ao tentar executar o codev, caso as bibliotecas necessárias não estejam instaladas, uma mensagem similar à de baixo aparecerá. Veja que, na última linha, nos é mostrada uma das bibliotecas que não foi carregada, nesse caso, 'psutil'.
``` bash
[~/a/.codev] $ python3 Codev.py
Traceback (most recent call last):
  File "/home/rho/a/.codev/Codev.py", line 15, in <module>
    from progress.bar import FillingSquaresBar
ModuleNotFoundError: No module named 'psutil'
```
<br>
Em uma instalação recente do archlinux, as seguintes bibliotecas precisam ser instaladas:

`python-requests`, `python-psutil`, `python-colorama` e `python-progress`

<br>

## Primeiro método:

No caso do archlinux, para a instalação das bibliotecas, é recomendado o uso do repositório padrão [core/extra]. Porém, apenas os primeiros três pacotes estão presentes no repositório padrão e, sem o python-progress, não há como executar o Codev. Para contornar esse problema, use um AUR helper para instalar o python-progress; o processo está descrito abaixo:

<br>

Instalar as bibliotecas disponíveis no repostiório padrão:
``` bash
sudo pacman -S python-requests python-psutil python-colorama
```

<br>

Instalar a biblioteca `python-progress` usando um AUR helper (yay):
``` bash
yay -S python-progress
```
obviamante é necessário ter o yay instalado, caso não tenha, siga as instruções em https://github.com/jguer/yay \
nota: yay é um AUR helper helper, serve para instalar aplicações do repositório comunitário do archlinux \
nota: AUR - (Arch User Repository) 

<br>

## Segundo método (virtual environment):
Antes de tudo, instale o pip: \
`sudo pacman -S pip`

<br>

Ambientes virtuais do python possibilitam que pacotes sejam instalados isoladamente, de tal forma que conflitos de versionamento ou de ambiente sejam evitados.
nota: para mais informações, leia https://wiki.archlinux.org/title/Python/Virtual_environment

<br>

Vá até o diretório do codev e crie um ambiente virtual:
`python -m venv codev_env`

Em seguida, ative o ambiente (bash):
`source codev_env/bin/activate`
ou
`. codev_env/bin/activate`
Note que o prompt será acrescido do nome do environment `(codev_env)`

<br>

Agora é possível instalar todas as bibliotecas suando o pip:
`pip install requests psutil colorama progress`
<br>

Finalmente podemos executar o Codev.py:
`python3 Codev.py`

<br>

Para sair do ambiente, basta executar `deactivate` contra o shell:
`deactivate`

---
nota: esse guia foi escrito na data 21/04/2026, talvez o procedimento tenha mudando significativamente com o passar do tempo

