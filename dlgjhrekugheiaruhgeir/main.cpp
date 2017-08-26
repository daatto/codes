#include <bits/stdc++.h>
using namespace std;

int main()
{
   ofstream fout("sample.txt");
    fout << "size" << std::setw(20) << "time" << std::setw(20) << "time2\n";
    fout << std::setfill('-') << std::setw(60) << "-" << std::endl;
    int run = 10;
    fout << std::setfill(' ');  //fill with spaces
    for(int i = 0; i < 5; i++)
    {
       fout << std::setw(20) << std::right << run;  // fill the run column
        run *= 10;
        fout << std::setw(20) << std::right << "1";
        fout << std::setw(20) << std::right << "2" << "\n";
    }


   return 0;
}
