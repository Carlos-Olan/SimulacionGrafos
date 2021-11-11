#include <iostream>
#include <string>
#include <vector>
#include "Arista.cpp"

int main(){
    //Se tiene el string de entrada de números
    string numbers;
    cin>>numbers;

    //Se crean los vectores de vértices y aristas para el grafo
    vector<Vertice *> vertices;
    vector<Arista *> aristas;

    //Se inicializan los datos
    int data = 0;
    int id = 0;

    //Se crean dos apuntadores de vértice y uno de arista
    Vertice *vi = nullptr;
    Vertice *vj = nullptr;
    Arista *a = nullptr;

    //Vamos sacando los datos de cada número separado por coma
    for(char c : numbers){
        if(c != ',')
            //Mientras no sea una coma, el valor del dato se va actualizando
            //Esto lo hacemos multiplicando por 10 y sumando el nuevo número
            //que es lo mismo que añadir una nueva posición decimal al número
            //hasta la derecha
            data = 10*data + (int) c - 48;
        else{
            //Cuando nos encontramos una coma, cambiamos vi con vj
            //Y creamos un nuevo vj con los datos de id y data que obtuvimos
            vi = vj;
            vj = new Vertice(id, data);
            //Después, sumamos uno a id para que no se repitan y reseteamos data a 0
            data = 0;
            id++;
            //Añadimos el nuevo vértice creado al vector de vértices
            vertices.push_back(vj);
            //Si vi no es vacío, empezamos a crear aristas
            //Esto es para evitar crear una arista con un apuntador a un vector vacío
            if(vi != nullptr){
                a = new Arista(vi, vj);
                aristas.push_back(a);
            }
        }
    }
    //Como al final del for no encuentra más comas, debemos repetir la operación una vez más
    vi = vj;
    vj = new Vertice(id, data);
    vertices.push_back(vj);
    a = new Arista(vi, vj);
    aristas.push_back(a);
}
