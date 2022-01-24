#!/bin/bash
echo -e "\033[32;1m"NORM"\033[m"
read $a
norminette ./PUSH_VER/*.c ./PUSH_VER/*.h
echo -e "\033[32;1m"LIBFT TEST"\033[m"
read $a
cd Libftest/
./grademe.sh
cd ..
echo -e "\033[32;1m"WAR MACHINE"\033[m"
read $a
cd libft-war-machine/
bash grademe.sh
cd ..
echo -e "\033[32;1m"unit-test"\033[m"
read $a
cd libft-unit-test/
make f
cd ..
make fclean -C PUSH_VER/
echo -e "\033[32;1m"libftTester"\033[m"
read $a
cd libftTester/
make a -C PUSH_VER/
cd ..
echo -e "\033[32;1m"make fclean"\033[m"
read $a
make
make fclean -C PUSH_VER/
ls
echo -e "\033[32;1m"make clean"\033[m"
read $a
make
make clean -C PUSH_VER/
ls
echo -e "\033[32;1m"make all"\033[m"
read $a
make all -C PUSH_VER/
ls
echo -e "\033[32;1m"make bonus"\033[m"
read $a
make bonus -C PUSH_VER/
ls
echo -e "\033[32;1m"relink"\033[m"
read $a
make
echo -e "\033[32;1m"DONE"\033[m"
