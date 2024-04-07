//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


// 1. Dem ky tu chi xuat hien mot lan 
void countChar() {
    string s;
    cin >> s;
    int res = 0;
    sort(s.begin(), s.end());
    for (int i = 0; i < (int)s.length(); ++i) {
        bool check = true;
        if (i - 1 >= 0 && s[i - 1] == s[i]) {
            check = false;
        }
        if (i + 1 < (int)s.length() && s[i + 1] == s[i]) {
            check = false;
        }
        if (check == true) {
            res++;
        }
    }
    cout << res;
}

int main(){
    cout << "1. Dem cac ky tu chi xuat hien mot lan" << endl;
    cout << "0. Thoat chuong trinh" << endl;
    int n;
    do{
        cout << "Nhap n: ";
        cin >> n;
        if (cin.fail()) // neu nhap sai
        { 
            cin.clear(); // xoa co loi
            cin.ignore(10000000, '\n'); // Xoa du lieu
            cout << "Vui long nhap so." << std::endl;
        }   
        else
        {
            switch (n)
            {
                case 0:
                    break;
                case 1:
                    countChar();
                    break;
                default:
                    cout << "Nhap sai, xin hay nhap lai" << endl;
            }
        }
    } while (n < 1 || n > 2);

    return 0;
}