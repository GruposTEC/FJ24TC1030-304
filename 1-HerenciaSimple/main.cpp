#include <iostream>
using std::cout;
using std::endl;

class Padre
{
  protected :
  int x = 5;

  public:
  Padre(int x1)
  {
    x = x1 + 5;
    cout << "En el constructor Padre" << endl;
  }

  ~Padre()
  {
    cout << "En el destructor Padre" << endl;
  }

  void imprimir()
  {
    cout << "La variable x : "  << x << endl;
  }
};

class Hija : Padre  // si no especificamos el tipo de herencia se considera privada
{
    public:
    int y;

    Hija(int x1, int y1) : Padre(x1)
    {
        cout << "En el constructor Hija" << endl;
        y = y1;
    }

    ~Hija()
    {
        cout << "En el destructor Hija" << endl;
    }

    void imprimir() //Sobreescribiendo el método imprimir que heredamos
    {
        Padre::imprimir();  //llamar al método en la superclase
        cout << "La variable x heredada : "  << x << endl;
        cout << "La variable y  : "  << y << endl;
    }
};


int main()
{
    Hija h(10,20);
    h.imprimir();
    //Padre p;
    //p.x = 10;
    //p.imprimir();
    return 0;
}