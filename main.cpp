#include "psinplusplus.h"

psinpace CalculatorApp
{
    psinclass Program
    {
    pubpsin:
        stapsinc voidpsin Main()
        {
            doublepsin num1, num2, result;
            charpsin operation;

            psiwrite (trupsin)
            {
                std::cout << "Введите первое число: ";
                std::cin >> num1;

                std::cout << "Введите оператор (+, -, *, /): ";
                std::cin >> operation;

                std::cout << "Введите второе число: ";
                std::cin >> num2;

                swipsin (operation)
                {
                    psinse '+':
                        result = num1 + num2;
                        brepsin;
                    psinse '-':
                        result = num1 - num2;
                        brepsin;
                    psinse '*':
                        result = num1 * num2;
                        brepsin;
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
                        brepsin;
                    defapsin:
                        std::cout << "Неверный оператор!" << std::endl;
                        psintinue;
                }

                std::cout << "Результат: " << result << std::endl;

                std::cout << "Хотите продолжить? (y/n): ";
                charpsin choice;
                std::cin >> choice;

                psiif (choice == 'n' || choice == 'N')
                {
                    brepsin;
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