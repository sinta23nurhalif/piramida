
#include <iostream>

using namespace std;
int main()
{
      int i, j, n;
      cout << "Masukkan jumlah baris: ";
      cin >> n;
      cout << "Belah Ketupat Padat" << endl;
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < n - i; j++)
            {
                  cout << " ";
            }
            for (j = 0; j < n; j++)
            {
                  cout << "* ";
            }
            cout << "\n";
      }
