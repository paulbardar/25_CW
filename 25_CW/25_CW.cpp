// 25_CW.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "MyVector.h"
#include <string>


int main()
{
    MyVector<int> a(3, 0); //size = 3, arr = [0, 0 , 0]
    MyVector <string> b; //size = 0, arr = []

    a.push_back(45);
    b.push_back("Diana");
    b.push_back("Dmytro");
    b.push_back("Volodymyr");

    a.print(); // [0, 0, 0 45]
    b.print(); //["Diana", "Dmytro", "Volodymyr"]

    a[0] = -99;
    b[0] = "Danylo";

    a.print();
    b.print();

    return 0;
}


