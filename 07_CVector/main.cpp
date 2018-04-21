#include <iostream>
#include "CMatrix.h"
#include "CVector.h"
#include <cstdlib>
using namespace std;

int main()
{
    CMatrix mt;
    CMatrix mt1;
    cin >> mt;
    cout << mt;
    cin >> mt1;
    cout << mt1;
    CMatrix mtTong;
    mtTong=mt+mt1;
    CMatrix mtHieu;
    mtHieu=mt-mt1;
    CMatrix mtTich;
    cout << "Ma tran tong" << endl;
    cout << mtTong << endl;
    cout << "-----------------" << endl;
    cout << "Ma tran hieu" << endl;
    cout << mtHieu << endl;
    cout << "-----------------";
    cout << "Ma tran tich" << endl;
    system("pause");
    return 0;
}
