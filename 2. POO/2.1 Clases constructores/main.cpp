#include <iostream>
#include <cmath>
using namespace std;

class Punto{
    private: // ESTAS VARIABLES NO SE PUEDEN ACCEDER
        int x;  //Depues del main, me refiero a esto , esto iria en vez del constructor,   y porque va antes del public ?????
        int y;
    public:
        Punto(){ //Este es el constructorr
            x=0; //Es como una funcion pero mas complejo
            y=0;
          }
        Punto(int _x, int _y){ //Otro constuctor
            x=_x;
            y=_y;
        }
        int getX() const{
            return x;}
        int getY() const{
            return y;}

        void print(){
        cout << "{" << x << " , " << y << "}" << endl; }
        void modificar(int _x, int _y){
            x=_x;
            y=_y;}
};

class VectorGeometrico{
    Punto ini;
    Punto fin;
  public:
   VectorGeometrico(Punto p1, Punto p2){
     ini=p1;
     fin=p2;
     }
    void print(){
        ini.print();
        cout << " -> ";
        fin.print(); }
    float modulo(){
        return sqrt(pow(fin.getX()-ini.getX(),2) + pow (fin.getY()-ini.getY(),2));
    }
};

int main()
{
    /*VectorGeometrico vg;//Aca lo resumes, le asignas una variable
    vg.ini.x=0; //Podrias pones VectorGeometrico.ini.x=0; pero seria muy largo
    vg.fin.y=0;
    vg.ini.x=3;
    vg.fin.y=4; */   // Esto era antes de los constructores

    Punto p1;
    Punto p2(3,4);
    VectorGeometrico vg(p1,p2);
    vg.print();

    cout << endl << "El modulo es: " << vg.modulo() << endl;

    return 0;
}
