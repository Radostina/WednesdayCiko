#include <iostream>
using namespace std;

int main()
{
    int twoLv = 0; // broi stotinki ot 2 lv
    int oneLv = 0;
    int fiftySt = 0;
    int twentySt = 0;
    int tenSt = 0;
    int fiveSt = 0;
    int twoSt = 0;
    int oneSt = 0;
    cout << "Kolko na broi 2lv moneti imash? ";
    cin >> twoLv;
    cout << "Kolko na broi 1lv moneti imash? ";
    cin >> oneLv;
    cout << "Kolko na broi 50st moneti imash? ";
    cin >> fiftySt;
    cout << "Kolko na broi 20st moneti imash? ";
    cin >> twentySt;
    cout << "Kolko na broi 10st moneti imash? ";
    cin >> tenSt;
    cout << "Kolko na broi 5st moneti imash? ";
    cin >> fiveSt;
    cout << "Kolko na broi 2st moneti imash? ";
    cin >> twoSt;
    cout << "Kolko na broi 1st moneti imash? ";
    cin >> oneSt;

    // input all coins
    int sum = oneSt + twoSt * 2 + fiveSt * 5 
        + tenSt * 10 + twentySt * 20 + fiftySt * 50
        + oneLv * 100 + twoLv * 200;
    //cout << sum;
    int leva = 0;
    int stotinki = 0;
    leva = sum / 100;
    stotinki = sum % 100;
    cout << "Leva: " << leva << endl;
    cout << "Stotinki: " << stotinki << endl;

}
