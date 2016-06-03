###Репозиторий для курсовой работы по ТРПО
##HANGMAN [![Build Status](https://travis-ci.org/simplex1337/Viselica.svg?branch=master)](https://travis-ci.org/simplex1337/Viselica)
Hangman - консольная игра, написанная по мотивам игры "Виселица" на Си.

####Системные требования

* Unix-подобная система
* libncursesw
* gcc
* git
* Клавиатура
* Разрешение как минимум 80x24 символа

####Сборка игры

Перед началом сборки, необходимо установить дополнительные компоненты

>Для Ubuntu

>`sudo apt-get install gcc libncurses5-dev libncursesw5-dev git`



>Для Arch

>`sudo pacman -S gcc git ncurs`

В консоли перейдите в удобную для вас папку, где будет храниться ваша игра.

`cd ~/some/dir`

Склонируйте репозиторий

`git clone https://github.com/simplex1337/Viselica`

После того, как репозиторий склонируется, соберите игру (займёт всего пару минут)

`make`

Запускайте игру

`./hangman`

Испытывайте наслаждение от игры от команды ИВ-521 =)

####Список дел

* Тестирование
* Документация в wiki
* Документация в pdf
* Порабощение мира

