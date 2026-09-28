#include "b.h"

Bankomat::Bankomat()
{
    id = 0;
    sum = 0;
    min = 10;
    max = 1000;
}

Bankomat::Bankomat(int id, int sum, int min, int max)
{
    this->id = id;
    this->sum = sum;
    this->min = min;
    this->max = max;
}

void Bankomat::Init(int id, int sum, int min, int max)
{
    this->id = id;
    this->sum = sum;
    this->min = min;
    this->max = max;
}

void Bankomat::LoadMoney(int money)
{
    if (money % 10 == 0)
        sum += money;
}

void Bankomat::TakeMoney(int money)
{
    if (money < min || money > max)
    {
        cout << "Nekorrektnaya summa" << endl;
        return;
    }

    if (money > sum)
    {
        cout << "Nedostatochno deneg" << endl;
        return;
    }

    if (money % 10 != 0)
    {
        cout << "Summa dolzhna byt kratna 10" << endl;
        return;
    }

    sum -= money;
    cout << "Vy dano: " << money << endl;
}

int Bankomat::getId()
{
    return id;
}

int Bankomat::getSum()
{
    return sum;
}

int Bankomat::getMin()
{
    return min;
}

int Bankomat::getMax()
{
    return max;
}

void Bankomat::setId(int id)
{
    this->id = id;
}

void Bankomat::setSum(int sum)
{
    this->sum = sum;
}

void Bankomat::setMin(int min)
{
    this->min = min;
}

void Bankomat::setMax(int max)
{
    this->max = max;
}

void Bankomat::Print()
{
    cout << "ID: " << id << endl;
    cout << "Summa: " << sum << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}
