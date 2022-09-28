### Instalación de dependencias

Antes de ejecutar los ejercicios, es necesario instalar las siguientes dependencias:
```bash
sudo apt update
sudo apt install gcc
sudo apt install build-essential
sudo get install libomp-dev
```

### Ejecución de los ejercios

Para ejecutar el archivo numberCores.c, se deben colocar los siguientes comandos en la terminal:
```bash
gcc -o numberCores -fopenmp numberCores.c
./numberCores
```

Para ejecutar el archivo pi.c, se deben colocar los siguientes comandos en la terminal:
```bash
gcc -o pi -fopenmp pi.c
./pi
```

Para ejecutar el archivo pi_loop.c, se deben colocar los siguientes comandos en la terminal:
```bash
gcc -o pi_loop -fopenmp pi_loop.c
./pi_loop
```

Para ejecutar el archivo saxpySerial.c, se deben colocar los siguientes comandos en la terminal:
```bash
gcc -o saxpySerial -fopenmp saxpySerial.c
./saxpySerial
```

Para ejecutar el archivo saxpyParallel.c, se deben colocar los siguientes comandos en la terminal:
```bash
gcc -o saxpyParallel -fopenmp saxpyParallel.c
./saxpyParallel
```

Para ejecutar el archivo euler.c, se deben colocar los siguientes comandos en la terminal:
```bash
gcc -o euler -fopenmp euler.c
./euler
```
