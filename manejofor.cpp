#include <iostream>

int main()
{
    int i, j, dimension, restriccion, condicion;
    std::cout << "ingrese la dimension con numeros impares: ";
    std::cin >> dimension;
    restriccion = dimension + (dimension - 1) / 2 - 1;
    condicion = restriccion / 3;
    if (dimension % 2 == 0)
    {
        std::cout << "el numero ingresado no es impar";
        return 0;
    }
    for (i = 0; i < dimension; ++i)
    {
        for (j = 0; j < dimension; ++j)
        {
            if (i + j < restriccion && i + j > condicion && i - j < condicion && j - i < condicion)
            {
                std::cout << "O";
            }
            else
            {
                std::cout << "X";
            }
        }
        std::cout << std::endl;
    }
}