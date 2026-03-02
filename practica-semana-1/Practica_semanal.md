# Ejercicio 1. "Relaciones y upcast"
 entre Animal + Mamifero + Perro hay una relacion de herencia del tipo "es un". por que un perro "es un" Mamifero y un Mamifero "es un" Animal. el upcats es seguro porque el objeto no cambia sigue siendo un Perro, solo cambia el tipo del puntero porque perro es un mamifero y un animal, pero no necesariamente un mamifero o un animal es un perro, por tanto no se puede comportar como tal.

# Actividad 3. "Dependencia Mutua"
En esta actividad se modeló una dependencia mutua entre Autor y Libro, donde cada uno mantiene un puntero al otro. Para evitar dependencias circulares, se utilizaron forward declarations en los headers y las implementaciones se realizaron en los archivos .cpp, asegurando una correcta compilación.
