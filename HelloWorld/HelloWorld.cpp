#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*
    Написать программу вычисления стоимости покупки,
    состоящей из нескольких тетрадей и карандашей. 
    Ниже приведен рекомендуемый вид экрана программы 
    (данные, введенные пользователем, 
    выделены *).

    Вычисление стоимости покупки 
    Введите исходные данные: 
    Цена тетради (руб.) -> *2.75*
    Количество тетрадей -> *5* 
    Цена карандаша (руб.) -> *0.85* 
    Количество карандашей -> *2*

    Стоимость покупки: 15.45 руб.
    */
    cout << "Вычисление стоимости покупки\n";
    cout << "Введите исходные данные:\n";
    
    float price_notebook, price_pencil, summa;
    int count_notebook, count_pencil;
    
    cout << "Цена тетради (руб.) -> ";
    cin >> price_notebook;
    cout << "Количество тетрадей -> ";
    cin >> count_notebook;
    cout << "Цена карандаша (руб.) -> ";
    cin >> price_pencil;
    cout << "Количество карандашей -> ";
    cin >> count_pencil;

    summa = price_notebook * count_notebook +
            price_pencil * count_pencil;
    cout << "Стоимость покупки: \n"
        << summa;

    /*
    Написать программу вычисления площади треугольника, 
    если известны длина основания и высота.
    Ниже приведен рекомендуемый вид экрана программы 
    (данные, введенные пользователем, выделены *).
    Вычисление площади треугольника 

    Введите длину основания треугольника -> *25*
    Введите длину высоты треугольника -> *30*
    Площадь треугольника: 375 кв. см.
    */
    float width, height;
    cout << "Вычисление площади треугольника\n"
        << "Введите длину основания треугольника -> ";
    cin >> width;
    cout << "Введите длину высоты треугольника -> ";
    cin >> height;
    cout << "Площадь треугольника: " 
        << 0.5 * width * height
        << width * height / 2 << " кв. см.";
    


    /*
    Написать программу вычисления расстояния между 
    населенными пунктами, изображенными на карте. 
    Ниже приведен рекомендуемый вид экрана программы 
    (данные, введенные пользователем, выделены *).

    Вычисление расстояния между населенными пунктами 
    Введите исходные данные:

    Масштаб (количество километров в одном сантиметре) -> *120*
    Расстояние между точками (см) -> *3.5*
    Расстояние между точками 420 км.
    */
    cout << "Вычисление расстояния между населенными пунктами\n"
        << "Введите исходные данные : \n";
    float a, b;
    cout << "Масштаб (количество километров в одном сантиметре) -> ";
    cin >> a;
    cout << "Расстояние между точками(см) -> ";
    cin >> b;
    cout << "Расстояние между точками " << a * b;


    /*
    Пользователь вводит с клавиатуры время
    в секундах, прошедшее с начала дня. Вывести на экран
    текущее время в часах, минутах и секундах.
    */
    int start_sec = 75498; // 86399
    //cin >> sec;
    int sec = start_sec % 60;
    int min = start_sec / 60 % 60;
    int hour = start_sec / 60 / 60; // start_sec / 3600

    cout << "h:" << hour << " m:" << min << " s:" << sec;

}