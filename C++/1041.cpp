#include <iostream>

using namespace std;

string coordenadas (double x, double y){
  
    if(!x&&!y)
        return "Origem";
    if(x==0)
        return "Eixo Y";
    if (y==0)
        return "Eixo X";
    if (x>0 && y>0)
        return  "Q1";
    if (x<0 && y>0)
        return  "Q2";
     if (x<0 && y<0)
        return  "Q3";

    return  "Q4";

}

int main(void) {
 
    double x,y;
    cin >> x >> y;
  
    cout << coordenadas(x, y) << endl;
    return 0;
}