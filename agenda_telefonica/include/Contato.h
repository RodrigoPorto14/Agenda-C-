#ifndef CONTATO_H
#define CONTATO_H
#include <bits/stdc++.h>

using namespace std;

class Contato
{
    public:
        string getNome();
        void setNome(string nome);
        void setTelefone(string telefone);
        void setEndereco(string endereco);
        void setRelacao(string relacao);
        string toString();

    private:
        string nome;
        string telefone;
        string endereco;
        string relacao;
};

#endif // CONTATO_H
