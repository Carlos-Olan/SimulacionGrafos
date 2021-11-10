#include <iostream>
using namespace std;

class Vertice{
    public:
        Vertice(int id, int dato){
            this->id = id;
            this->dato = dato;
        }
        Vertice(){
            id = 0;
            dato = 0;
        }
        int getId(){
            return this->id;
        }
        void setId(int id){
            this->id = id;
        }
        int getDato(){
            return this->dato;
        }
        void setDato(int dato){
            this->dato = dato;
        }
    private:
        int id;
        int dato;
};