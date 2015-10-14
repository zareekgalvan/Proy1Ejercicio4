//
//  main.cpp
//  Proy1Ejercicio4
//
//  Created by Zareek Galvan on 10/7/15.
//  Copyright © 2015 Trisquel Labs. All rights reserved.
//

#include <iostream>
#include <climits>
using namespace std;

void diaCompraVenta(double arr[], int n, int &c, int &v)
{
    int valorC = INT_MAX, valorV = 0;
    for (int i = 0; i < n; i++)
    {
        if (valorC > arr[i])
        {
            valorC = arr[i];
            c = i;
            valorV = arr[i];
            v = i;
        }
        if (valorV < arr[i])
        {
            valorV = arr[i];
            v = i;
        }
    }
    v++;
    c++;
    if (v==c)
    {
        v++;
    }
}

int main()
{
    int cases = 0;
    
    cin >> cases;
    
    for (int c = 0; c < cases; c++)
    {
        int length;
        cin >> length;
        double arr[length];
        for (int i = 0; i < length; i++)
        {
            cin >> arr[i];
        }
        int com, ven;
        diaCompraVenta(arr, length, com, ven);
        cout << "Buy in " << com << ", sell in " << ven << endl;
    }
}
