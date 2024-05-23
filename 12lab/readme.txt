Для создания статической библиотеки:
gcc main.c func.c -c 
 ar r libMY_PRINT.a func.o 
 gcc main.o -L. -lMY_PRINT -o static_example 
./static_example 
 Для создания динамической библиотеки:
gcc -c main.c 
gcc -c -fPIC func.c 
gcc -shared -o libMY_PRINT.so func.o 
gcc -o dyn_example main.o -L. -lMY_PRINT -Wl,-rpath,. 
./dyn_example
