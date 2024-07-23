# TAD Cafetera

Este proyecto implementa un **Tipo de Dato Abstracto (TAD) Cafetera** en C++ que modela las acciones de dos cafeteras de diferentes marcas: **Oster** y **Haceb**. Cada cafetera puede preparar dos tipos de café: **Capuchino** y **Tinto**. La implementación incluye un menú interactivo que permite al usuario seleccionar la cafetera y el tipo de café que desea preparar.

## Estructura del proyecto

El proyecto consiste en las siguientes clases:

- **Cafetera**: Una clase abstracta que define los métodos `Capuchino()` y `Tinto()` que deben ser implementados por cualquier clase que herede de ella.
  
- **Oster**: Una clase que hereda de `Cafetera` y proporciona implementaciones específicas para los métodos `Capuchino()` y `Tinto()`.
  
- **Haceb**: Otra clase que hereda de `Cafetera` y también proporciona sus propias implementaciones para los métodos `Capuchino()` y `Tinto()`.

## Representación gráfica

### Capuchino:
     (      
      )    
   ( (   ) )
    ) ) ( (
    /____ 
   |     |
   |_____|

### Tinto:
( )
) (
( ( ) )
) ) ( (
/____
|     |
|_____|

## Funcionalidad

Al ejecutar el programa, el usuario verá un menú que le permitirá:

1. Seleccionar una cafetera: **Oster** o **Haceb**.
2. Elegir el tipo de café a preparar: **Capuchino** o **Tinto**.
3. Ver una representación ASCII de la taza de café que se ha preparado.
4. Volver al menú principal o salir del programa.

## Cómo compilar y ejecutar

### Prerrequisitos

Asegúrate de tener un compilador de C++ instalado en tu sistema. Para los usuarios de Linux o macOS, `g++` es una buena opción. Los usuarios de Windows pueden usar `MinGW` o una IDE como Visual Studio.

### Compilación

Para compilar el programa, abre una terminal en el directorio del proyecto y ejecuta el siguiente comando:

```bash
g++ cafe.cpp -o cafe

Este comando compilará el archivo main.cpp y generará un ejecutable llamado cafetera.

### Ejecución

Para ejecutar el programa, usa el siguiente comando:

```bash
./cafe

Sigue las instrucciones en la terminal para interactuar con el menú y probar las diferentes funcionalidades del TAD Cafetera.

### Ejemplo de uso

Al iniciar el programa, se te pedirá que selecciones una cafetera:
Seleccione una cafetera:
1. Oster
2. Haceb
3. Salir

Después de seleccionar una cafetera, podrás elegir qué tipo de café deseas preparar:

Seleccione una opción:
1. Hacer Capuchino
2. Hacer Tinto
3. Volver al menú anterior

Dependiendo de tu elección, verás un mensaje y una representación gráfica ASCII del café preparado.

### Contribuciones

Las contribuciones al proyecto son bienvenidas. Si deseas agregar nuevas funcionalidades o mejorar el código existente, por favor, abre un issue o un pull request en el repositorio.

### Autor

Daniel Rosas - Desarrollador de la implementación del TAD Cafetera.