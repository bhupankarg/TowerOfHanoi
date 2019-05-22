#include<iostream>
#include<fstream>
using namespace std;

void towerOfHanoi(int disk, char src, char aux, char dest, fstream& fout)
{
    if(disk != 0)
    {
        towerOfHanoi(disk-1, src, dest, aux, fout);
        cout << "Move from tower " << src << " to " << dest << endl;
        fout << "Move from tower " << src << " to " << dest << endl;
        towerOfHanoi(disk-1, aux, src, dest, fout);
    }
}

int main()
{
    char src = '1', aux = '2', dest = '3';
    int disk;
    fstream fout;
    fout.open("TowerOfHanoi.txt", ios::out);
    cout << "Enter total number of disk" << endl;
    cin >> disk;
    towerOfHanoi(disk, src, aux, dest, fout);
    fout.close();
    return 0;
}
