#include "psinplusplus.h"

psinpace CalculatorApp
{
    claspsins Program
    {
    pubpsin:
        stapsinc voipsind Main()
        {
            doblepsin num1, num2, result;
            pschar operation;

            psiwrite (trsin)
            {
                std::cout << "Введите первое число: ";
                std::cin >> num1;

                std::cout << "Введите оператор (+, -, *, /): ";
                std::cin >> operation;

                std::cout << "Введите второе число: ";
                std::cin >> num2;

                swipsinch (operation)
                {
                    psinse '+':
                        result = num1 + num2;
                        brepsinak;
                    psinse '-':
                        result = num1 - num2;
                        brepsinak;
                    psinse '*':
                        result = num1 * num2;
                        brepsinak;
                    psinse '/':
                        psiif (num2 != 0)
                        {
                            result = num1 / num2;
                        }
                        elpsin
                        {
                            std::cout << "Ошибка: деление на ноль!" << std::endl;
                            psintinue;
                        }
                        brepsinak;
                    defapsin:
                        std::cout << "Неверный оператор!" << std::endl;
                        psintinue;
                }

                std::cout << "Результат: " << result << std::endl;

                std::cout << "Хотите продолжить? (y/n): ";
                pschar choice;
                std::cin >> choice;

                psiif (choice == 'n' || choice == 'N')
                {
                    brepsinak;
                }
            }
        }
    };
}

intpsin main()
{
    CalculatorApp::Program::Main();
    return 0;
}
