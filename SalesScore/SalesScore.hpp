//
//
//  Classe criada em novembro de 2023
//  Implementa o score de vendas em lojas hipotéticas
//  Desenvolvida pro Joselito
//
// ==========================================================
// -- Desenvolvimento da classe

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // Garante que as casas depois da vírgula sejam exibidas

#include <string> //Classe de string no padrão C++
using std::string;

#include <iomanip>
using std::setprecision;

class SalesScore
{
    public: // Especificador de acesso - Está acessível a outros códigos
        SalesScore(string title);
        void setStoreTitle(string title);
        string getStoreTitle();
        void bootSystem();
        void calcSalesAverage();

    private: // Especificador de acesso - Acessível apenas as funções membro dessa classe
        string storeTitle;

};
