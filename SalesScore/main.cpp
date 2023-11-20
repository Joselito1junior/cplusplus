//
//  Exemplo de classe do curso C++ do curso
//  Revisão 2
//

#include <iostream>
using std::cout;
using std::endl;

#include <string> //Classe de string no padrão C++
using std::string;

#include "SalesScore.hpp"

// ==========================================================
// -- Função principal
int main()
{
    SalesScore myStore1("WR STORE");

    myStore1.bootSystem();
    myStore1.enterProducts();
    myStore1.productsReport();

    cout << endl;

    return 0;
}
