Ejercicios de programación de un físico en C


😎 | **Programas hechos en mis clases de la universidad, solo c**
:---: | :---
 ❤ | **Ya estan testeados y funcionan bien, se recomienda cambiarles nombres al compilarlos**

## Clonar repositorio

```
git clone https://github.com/GustavoRamos112/EjerciciosC.git
```

## Renombrar programas desde la terminal
Desde Linux:
```
mv nombre.c nuevo_nombre.c
```
Desde Powershell (windows):
```
rename-item nombre.c nuevo_nombre.c
```

## Compilar programas

Primero debes de tener instalado un compilador de c, en caso de windows **Mingw**, luego ejecutaras el comando (con la terminal dentro de la carpeta)
```
gcc nombre.c -lm -o nombrei

./nombrei
```
El agregarle una "i" al final del nombre al momento de la compilación es solo una convención mía para no confundir códigos pero puedes ponerle el nombre que quieras
