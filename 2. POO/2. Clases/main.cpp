#include <iostream>
#include <cmath> //IMPORTANTE
using namespace std;

class Punto{
    public:
        int x;
        int y;
        void print(){
        cout << "{" << x << " , " << y << "}" << endl; }
        void modificar(int _x, int _y){
            x=_x;
            y=_y;}
};

float distancia(Punto p1, Punto p2){ // O sqrt(pow((p2_x-p1_x),2) + pow(p2_y-p1_y),2); o algo asi
    return sqrt(pow((p2.x-p1.x),2) + pow((p2.y-p1.y),2));  // Ver que hace el pow
}

int main()
{
    int p1_x=0;
    int p1_y=0;
    Punto p1;//Llama a la funcion y le da sub valores
    p1.x=0;
    p1.y=0;
    p1.print();

    int p2_x=3;
    int p2_y=4;
    Punto p2;//Llama a la funcion y le da sub valores
    p2.x=3;
    p2.y=4;
    p2.print();

    cout << distancia(p1, p2) << endl;
    p1.modificar(1,1);//Cambia los valores de p1 por 1,1
    p2.modificar(5,5);//Igual pero con 5,5
    cout << distancia(p1, p2) << endl;


    return 0;
}
