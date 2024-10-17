
#include <iostream>


void printValue(const int& x)
{
    std::cout << " &: "<<x<<"\n";
}

void printValue(const int&& x)
{
    std::cout << "&&: "<<x<<"\n";
}

class Przykład
{
public:
    // Funkcja składowa wywoływana tylko na l-value
    void pokaz()& {
        std::cout << "Wywołano na l-value (trwały obiekt)\n";
    }

    // Funkcja składowa wywoływana tylko na r-value
    void pokaz()&& {
        std::cout << "Wywołano na r-value (tymczasowy obiekt)\n";
    }
};

int main()
{
    setlocale(LC_CTYPE, "Polish");

    int x{ 5 };
    printValue(x);
    printValue(5);

    Przykład p;
    p.pokaz();

    Przykład().pokaz();




}

