// #include es una directiva del preprocesador.
// Antes de compilar este archivo, el preprocesador incluye aquí
// el contenido del archivo "hello_world.h".
//
// Un archivo .h se conoce como encabezado o "header".
// Generalmente contiene declaraciones: indican qué funciones existen,
// cómo se llaman, qué parámetros reciben y qué tipo de dato devuelven.
//
// Las comillas " " indican que estamos incluyendo un encabezado
// del proyecto. El compilador lo busca según sus rutas configuradas,
// normalmente empezando por la ubicación del archivo actual.
//
// En este ejercicio, el encabezado proporciona la declaración de hello()
// y el acceso al tipo std::string mediante la inclusión de <string>.
#include "hello_world.h"


// namespace crea o amplía un espacio de nombres.
//
// Un espacio de nombres agrupa nombres de funciones, tipos y variables.
// Esto ayuda a evitar conflictos si otra parte del programa utiliza
// los mismos nombres.
//
// Aquí, "hello_world" es el nombre del espacio de nombres.
// No es una palabra especial de C++: es un nombre elegido para el proyecto.
//
// Desde fuera de este espacio, podemos llamar a nuestra función así:
//
//     hello_world::hello();
//
// Los dos puntos dobles :: son el operador de resolución de ámbito.
// Indican que buscamos hello dentro de hello_world.
//
// La llave de apertura { inicia el contenido de este namespace.
namespace hello_world {

    // Aquí definimos una función. Una función es un bloque de código
    // que se ejecuta cuando otra parte del programa lo llama.
    //
    // Desglosemos: std::string hello()
    //
    // std
    //   Es el espacio de nombres de la biblioteca estándar de C++.
    //
    // ::
    //   Indica que string pertenece al espacio de nombres std.
    //
    // string
    //   Es un tipo de dato que permite guardar y manejar texto.
    //   Su nombre completo aquí es std::string.
    //
    // std::string, colocado antes del nombre de la función,
    // indica el tipo de dato que la función va a devolver.
    //
    // hello
    //   Es el nombre de nuestra función.
    //   Los nombres distinguen mayúsculas y minúsculas:
    //   hello y Hello serían nombres diferentes.
    //
    // ()
    //   Los paréntesis contienen la lista de parámetros.
    //   Como están vacíos, esta función no recibe argumentos.
    //
    // {
    //   La llave abre el cuerpo de la función:
    //   las instrucciones que ejecutará cuando sea llamada.
    std::string hello() {

        // return termina la ejecución de la función y entrega
        // un resultado al código que la llamó.
        //
        // "Hello, World!" es un literal de texto.
        // Las comillas delimitan el texto; no forman parte del mensaje.
        // La coma, el espacio y el signo de admiración sí forman parte.
        //
        // Técnicamente, este literal es un arreglo de caracteres.
        // Al devolverlo desde una función de tipo std::string,
        // C++ construye un std::string con ese contenido.
        //
        // Esta instrucción NO imprime el mensaje en la consola.
        // Únicamente lo devuelve para que quien llamó a la función
        // pueda utilizarlo, guardarlo o compararlo.
        //
        // Por ejemplo:
        //     std::string mensaje = hello_world::hello();
        //
        // Después de esa llamada, mensaje contiene "Hello, World!".
        //
        // El punto y coma ; marca el final de esta instrucción.
        return "Hello, World!";

    } // Esta llave cierra el cuerpo de la función hello().

} // Esta llave cierra el espacio de nombres hello_world.
