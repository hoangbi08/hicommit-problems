#include <stdio.h>
using namespace std;

int main() {
    float nhietDo;

    cout << "Nhap nhiet do: ";
    cin >> nhietDo;

    if (nhietDo < 0) {
        cout << "Troi lanh dong bang";
    } 
    else if (nhietDo < 15) {
        cout << "Troi lanh";
    } 
    else if (nhietDo < 25) {
        cout << "Troi mat";
    } 
    else if (nhietDo < 35) {
        cout << "Troi nong";
    } 
    else {
        cout << "Troi rat nong";
    }

    return 0;
}