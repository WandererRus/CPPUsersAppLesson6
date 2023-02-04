// CPPUsersAppLesson6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void NMernyiMassivH(int* massive, int mernost, int count)
{
    if (mernost > 1)
    {
        if (mernost == 2)
        {
            int** massive = new int* [count];
            for (int i = 0; i < count; i++)
            {
                massive[i] = new int[count];
                for (int j = 0; j < count; j++)
                {
                    massive[i][j] = rand() % 10;
                }
            }
            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j < count; j++)
                {
                    std::cout << massive[i][j] << " ";
                }
                std::cout << "\n";
            }
            std::cout << "\n";
        }
        if (mernost == 3)
        {
            int*** massive = new int** [count];
            for (int i = 0; i < count; i++)
            {
                massive[i] = new int*[count];
                for (int j = 0; j < count; j++)
                {
                    massive[i][j] = new int[count];
                    for (int k = 0; k < count; k++)
                    {
                        massive[i][j][k] = rand() % 10;
                    }
                }
            }
            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j < count; j++)
                {
                    for (int k = 0; k < count; k++)
                    {
                        std::cout << massive[i][j][k] << " ";
                    }
                    std::cout << "\n";
                }
                std::cout << "\n";
            }
            std::cout << "\n";
        }
        if (mernost == 4)
        {
            int**** massive = new int*** [count];
            for (int i = 0; i < count; i++)
            {
                massive[i] = new int** [count];
                for (int j = 0; j < count; j++)
                {
                    massive[i][j] = new int*[count];
                    for (int k = 0; k < count; k++)
                    {
                        massive[i][j][k] = new int [count];
                        for (int z = 0; z < count; z++)
                        {
                            massive[i][j][k][z] = rand() % 10;
                        }
                    }
                }
            }
            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j < count; j++)
                {
                    for (int k = 0; k < count; k++)
                    {
                        for (int z = 0; z < count; z++)
                        {
                            std::cout << massive[i][j][k][z] << " ";
                        }
                        std::cout << "\n";
                    }
                    std::cout << "\n";
                }
                std::cout << "\n";
            }
            std::cout << "\n";
        }
        if (mernost == 5)
        {
            int***** massive = new int**** [count];
            for (int i = 0; i < count; i++)
            {
                massive[i] = new int*** [count];
                for (int j = 0; j < count; j++)
                {
                    massive[i][j] = new int** [count];
                    for (int k = 0; k < count; k++)
                    {
                        massive[i][j][k] = new int*[count];
                        for (int z = 0; z < count; z++)
                        {
                            massive[i][j][k][z] = new int [count];
                            for (int y = 0; y < count; y++)
                            {
                                massive[i][j][k][z][y] = rand() % 10;
                            }
                        }
                    }
                }
            }
            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j < count; j++)
                {
                    for (int k = 0; k < count; k++)
                    {
                        for (int z = 0; z < count; z++)
                        {
                            for (int y = 0; y < count; y++)
                            {
                                std::cout << massive[i][j][k][z][y] << " ";
                            }
                            std::cout << "\n";
                        }
                        std::cout <<  "\n";
                    }
                    std::cout << "\n";
                }
                std::cout << "\n";
            }
            std::cout << "\n";
        }
    }
    


}
void NMernyiMassiv(int* massive, int mernost, int count)
{
    int newcount = pow(count, mernost);
    int* newmassive = new int[newcount];
    for (int i = 0; i < newcount; i++)
    {
        if (i < count)
        {
            newmassive[i] = massive[i];
        }  
        newmassive[i] = rand() % 10;
    }

    for (int i = 0; i < newcount; i++)
    {
        std::cout << newmassive[i] << " ";        
    }
}
int main()
{
    int count = 5;
    int* massive = new int[count];
    for (int i = 0; i < count; i++)
    {
        massive[i] = rand() % 10;
    }
    //NMernyiMassivH(massive,5,count);
    NMernyiMassiv(massive, 2, count);
    std::cout << "\n\n";
    NMernyiMassiv(massive, 3, count);
    std::cout << "\n\n";
    NMernyiMassiv(massive, 4, count);
    std::cout << "\n\n";
    NMernyiMassiv(massive, 5, count);
    std::cout << "\n\n";

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
