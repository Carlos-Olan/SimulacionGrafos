#include <iostream>
#include "Vertice.cpp"
using namespace std;

class Arista{
    public:
        Arista(Vertice *vi, Vertice *vj){
            this->vi = vi;
            this->vj = vj;
        }
        Vertice *getVi(){
            return this->vi;
        }
        void setVi(Vertice *vi){
            this->vi = vi;
        }
        Vertice * getVj(){
            return this->vj;
        }
        void setVj(Vertice *vj){
            this->vj = vj;
        }
    private:
        Vertice *vi;
        Vertice *vj;
};
