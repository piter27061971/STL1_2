// ConsoleApplication40.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int kol_elementov, element,i;
std::string stroka;
std::vector<int> Shisla;
auto iter1 = Shisla.begin();

int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {  std::cout << "Введите количество чисел.\n";
    std::cin >> stroka;
    try
    {
        kol_elementov = stoi(stroka);
        if (kol_elementov>0)
        { 
        break;}
        else
        {
            std::cout << "Число меньше или равно 0. Попробуйте еще раз!\n";
        }

    }
    catch(...)
    {
        std::cout << "Не получается преобразовать в целое число. Попробуйте еще раз!\n";
    }

    } //  while (true)

    i = 0;
   while (i<kol_elementov)
    {
       std::cout << "Введите число "<<i+1<<std::endl;
       std::cin >> stroka;
       iter1 = Shisla.begin();
       try
       {
           element = stoi(stroka);
           iter1 = Shisla.begin();
           while (iter1 != Shisla.end())
           {
               if (*iter1 == element)
               {
                   i++;
                   break;
               } 
               iter1++;
               
           }
           if (iter1 == Shisla.end())
           { 
               Shisla.push_back(element);
               i++;

           }
           
          

       }
       catch(...)
           {
               std::cout << "Не получается преобразовать в целое число. Попробуйте еще раз.\n";
               continue;
           }

    }

   std::sort(Shisla.begin(), Shisla.end(), [](int& left, int& right) {return left > right; });
   std::cout << "_______________________________________________________________________\n";
   std::cout << "Ваши числа в порядке убывания.\n";

   for (int n : Shisla)
   {
       std::cout << n << std::endl;
   }
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
