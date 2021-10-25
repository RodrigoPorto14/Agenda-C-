#include <bits/stdc++.h>
#include "agenda.h"
#include "Contato.h"

using namespace std;

int main()
{
    Agenda *a = new Agenda();

    a->InsereContato("Fulano","99999999","Rua A"," ");
    a->InsereContato("Ciclano","88888888","Rua B"," ");
    a->InsereContato("Beltrano","88889999","Rua C"," ");
    a->InsereContato("Fulano","77777777","Rua D"," ");
    a->RemoveContato("Ciclano");
    a->ImprimeContatos();

    delete a;

    return 0;
}
