#include <iostream>
using namespace std;

int main() {
    
    int tp,tm,tf,lt,lm,lf;
    tp = 80000;
    tm = (tp*52)/100;
    tf = (tp*48)/100;
    lt = (tp*48)/100;
    lm = (tp*35)/100;
    lf = lt - lm;

    cout << "Total Number Of Literate Female is "<< lf << "\n";
    cout << "Total Number Of Literate Male is "<< lm << "\n";


return 0;
}