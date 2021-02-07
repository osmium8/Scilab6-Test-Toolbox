rm *.o
rm my_prog

gcc -c -o trans.o trans.c
gcc -c -o main.o main.c

gcc -o my_prog trans.o main.o

./my_prog
