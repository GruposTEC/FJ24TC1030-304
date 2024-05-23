#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Padre1
{
    public:
    string nombre;
    Padre1()
    {
        cout << "Dentro Constructor Padre1" << endl;
    }
    ~Padre1()
    {
        cout << "Dentro Destructor Padre1" << endl;
    }
};

class Padre2
{
    public:
    string nombre;
    Padre2()
    {
        cout << "Dentro Constructor Padre2" << endl;
    }
    ~Padre2()
    {
        cout << "Dentro Destructor Padre2" << endl;
    }
};


class Hijo : public Padre1,public Padre2
{
    public:
    Hijo()
    {
        cout << "Dentro Constructor Hijo" << endl;
    }
    ~Hijo()
    {
        cout << "Dentro Destructor Hijo" << endl;
    }
};
class A
{
    public:
    void imprimir()
    {
        cout << "imprimir de clase A" << endl;
    }
};
class B : virtual public A
{
    public:
        void imprimir()
        {
            cout << "Imprimir desde B sobreescrito" << endl;
        }
};

class C : virtual public A
{
    public:
        void imprimir()
        {
            cout << "Imprimir desde C sobreescrito" << endl;
        }
};

class D: public B, public C{
};

int main()
{
   D obj;
   obj.imprimir();

   /* Hijo h;
    h.Padre1::nombre="Yo";
    cout << " Nombre heredado de Padre 1 :" << h.Padre1::nombre << endl;
    cout << " Nombre heredado de Padre 2 :" << h.Padre2::nombre << endl;*/
    return 0;
}