#include <iostream>
#include "20260706_Header1_GoharaMahiro.h"

int main()
{
    int hp = 100;
    int select;

    std::cout << "現在のHP：" << hp << std::endl;
    std::cout << "回復しますか？" << std::endl;
    std::cout << "Yes：1  No：2" << std::endl;
    std::cin >> select;

    if (select == 1)
    {
        hp = Heal(hp);
        std::cout << "HPを回復しました！" << std::endl;
    }
    else if (select == 2)
    {
        std::cout << "回復しませんでした。" << std:: endl;
    }
    else
    {
        std::cout << "入力が正しくありません。" << std::endl;
    }

    std::cout << "現在のHP：" << hp << std::endl;

    return 0;
}