//
//
//  Classe criada em novembro de 2023
//  Implementa o score de vendas em lojas hipotéticas
//  Desenvolvida pro Joselito
//  Arquivo .cpp que conteme a implementação das funções membro
//
// ==========================================================
// -- Desenvolvimento da classe

#include "SalesScore.hpp"

SalesScore::SalesScore(string title)
{
    setStoreTitle(title);
}

// ==========================================================
void SalesScore::setStoreTitle(string title)
{
    if(title.length() <= 20)
        storeTitle = title;

    if(title.length() > 20)
    {
        storeTitle = title.substr(0, 20);
        cout << "Titulo: \"" << title << "\" execedeu a largura max. \n" << endl;
    }
}

// ==========================================================
string SalesScore::getStoreTitle()
{
    return storeTitle;
}

// ==========================================================
void SalesScore::bootSystem()
{
    cout << "Score de vendas: " << getStoreTitle() << endl;
}

// ==========================================================
void SalesScore::calcSalesAverage()
{
    int acc = 0;
    int counter = 0;
    int value = 0;
    double avg = 0;

    cout << "Insira o valor da venda ou -1 para sair: ";
    cin >> value;

    while(value != -1)
    {
        acc += value;
        counter++;

        cout << "Insira o valor da venda ou -1 para sair: ";
        cin >> value;
    }

    if (counter != 0)
    {
        avg = static_cast<double>(acc)/counter;
        cout << "\nTotal das " << counter << " vendas R$: " << acc << endl;
        cout << "\nMedia em vendas R$: " << setprecision(2) << fixed << avg << endl;
    }
    else
        cout << "Nenhum valor de venda foi inserido." << endl;

}

