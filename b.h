#pragma once
#include <iostream>
using namespace std;

class Bankomat
{
private:
    int id;
    int sum;
    int min;
    int max;

public:
    Bankomat();
    Bankomat(int id, int sum, int min, int max);

    void Init(int id, int sum, int min, int max);
    void LoadMoney(int money);
    void TakeMoney(int money);

    int getId();
    int getSum();
    int getMin();
    int getMax();

    void setId(int id);
    void setSum(int sum);
    void setMin(int min);
    void setMax(int max);

    void Print();
};