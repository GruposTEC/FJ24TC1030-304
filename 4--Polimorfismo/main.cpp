#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;


class Ave  //Al tener un método virtual puro es una clase abstracta
{
    private:
       // string nombre;
    public:
       /* Ave(string nom)
        {
            nombre = nom;
        }*/
        virtual void volar() = 0;

       /* void yque()
        {
            cout << "Soy una ave y que..." << endl;
        }
        */
};

class Aguila : public Ave
{
    public:
    string nombre;
    Aguila(string nom) {
        nombre = nom;
    }
    void volar()
    {
        cout << "Soy un ave y vuelo";
        cout << " y soy la más rápida" << endl;
    }
};

class Pinguino : public Ave
{
    public:
        string nombre;
        Pinguino(string nom)
        {
            nombre = nom;
        }
        void volar()
        {
            cout << "Si soy una ave pero NO vuelo" << endl;
        }
};

int main()
{ 
    //Ave avechucho("Ave genérica");
   // avechcucho.volar();

   Aguila america("América");
   //america.volar();

   Ave * apAve;

   //apAve = &avechucho;
   //apAve->volar();

   apAve = &america;
   apAve->volar();
   //apAve->yque();

   Pinguino pingui("Cabo");

   apAve = &pingui;
   apAve->volar();

   vector <Ave *> parvada;

   parvada.push_back(&america);
   parvada.push_back(&pingui);

   cout << "En el vector" << endl;
   for(int i = 0 ; i < parvada.size() ; i++)
   {
    parvada[i]->volar();
   }

   
}

