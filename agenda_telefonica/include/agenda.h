#ifndef AGENDA_H
#define AGENDA_H
#include <bits/stdc++.h>
#include "Contato.h"

using namespace std;

class Agenda
{
    public:
        Contato *BuscaContato(string nome);
        void InsereContato(string nome, string telefone, string endereco, string relacao);
        void AlteraContato(string nome, string telefone, string endereco, string relacao);
        void RemoveContato(string nome);
        void ImprimeContatos();

    private:
        Contato *contatos[1000];
        int last;
};

#endif // AGENDA_H
