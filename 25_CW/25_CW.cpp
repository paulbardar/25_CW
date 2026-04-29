// 25_CW.cpp : This file contains the 'main' function. Program execution begins and ends there.



#include "MyVector.h"
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "Medicine.h"


int main()
{
    /*
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
    */
    /*
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(rand() % 10 - 10);
    }

    cout << "Size: " << v1.size() << endl;
    

    // Способи роботи з елементами вектору
    vector<int>::iterator it; // Альтернатива покажчику
    for (it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";
    } cout << endl;

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    } cout << endl;
    
    
    for (int a : v1) { //[4, 7, 2, 5, 7]  // get
        cout << a << " ";
    } cout << endl;

    for (int& a : v1) {  //[4, 7, 2, 5, 7]  // get + set
        cout << a << " ";
    }cout << endl;

    for (auto& a : v1) {
        cout << a << " ";
    } cout << endl;
    */

    vector<Medicine> med; //size = 0, Medicine* arr = nullptr

    med.push_back(Medicine("Nurofen", "pills", 70.43));
    // size = 1 , arr[0] = {"Nurofen", "pills", 70.43}

    med.push_back(Medicine("Dr Mom", "syrope", 120.78));
    // size= 2, arr[1] = {"Dr Mom", "syrope", 120.78}

    med.push_back(Medicine("Aspiryn", "capsules", 45.78));
    // size= 3, arr[2] = {"Aspiryn", "capsules", 45.78}

    for (int i = 0; i < med.size(); i++) {
        med[i].showInfo();
    }

    cout << "==============================================" << endl;

    // 1 task

    string name = "Nurofen";
    auto find = find_if(med.begin(), med.end(), [name](Medicine a) {return a.getTitle() == name; });
    if (find == med.end()) {
        cout << "Not Found" << endl;
    }
    else {
        med.erase(find);
    }

    return 0;
}


