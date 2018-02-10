#include <iostream>

using namespace std;

int main()
{
    float daysinuse = 0.00;
    float powercost = 0.10;
    float watt = 800;
    float KW = 1000;

    cout << "How many days was the miner running?" << endl;
    cin >> daysinuse;

    float totalcost = (daysinuse * 24 * (watt/KW * powercost));

    cout << "Total cost is " << totalcost;

}
