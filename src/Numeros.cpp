#include <iostream>
#include <string>
#include <vector>
#include "Arista.cpp"

int main(){
    string numbers;
    cin>>numbers;
    vector<Vertice *> vertices;
    vector<Arista *> aristas;
    int data = 0;
    int id = 0;
    Vertice *vi = nullptr;
    Vertice *vj = nullptr;
    Arista *a = nullptr;
    for(char c : numbers){
        if(c != ',')
            data = 10*data + (int) c - 48;
        else{
            vi = vj;
            vj = new Vertice(id, data);
            data = 0;
            id++;
            vertices.push_back(vj);
            if(vi != nullptr){
                a = new Arista(vi, vj);
                aristas.push_back(a);
            }
        }
    }
    vi = vj;
    vj = new Vertice(id, data);
    vertices.push_back(vj);
    a = new Arista(vi, vj);
    aristas.push_back(a);
}
