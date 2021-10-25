#include "agenda.h"


Contato* Agenda :: BuscaContato(string nome)
{
    string aux;
    int i,j,dif;
    for(i=0;i<last;i++)
    {
        aux = contatos[i]->getNome();
        dif=0;
        for(j=0;j<nome.size();j++)
        {
            if(aux[j]!=nome[j])dif=1;
        }
        if(dif==0)return contatos[i];
    }
    return NULL;
}


void Agenda :: InsereContato(string nome, string telefone, string endereco, string relacao)
{
    int i,alterou=0;
    if(last<1000)
    {
        for(i=0;i<last;i++)
        {
            if(contatos[i]->getNome()==nome)
            {
                contatos[i]->setTelefone(telefone);
                contatos[i]->setEndereco(endereco);
                contatos[i]->setRelacao(relacao);
                alterou=1;
                break;
            }
        }
        if(alterou==0)
        {
            contatos[last] = new Contato();
            contatos[last]->setNome(nome);
            contatos[last]->setTelefone(telefone);
            contatos[last]->setEndereco(endereco);
            contatos[last]->setRelacao(relacao);
            last++;
        }
    }
    else cout << "Agenda cheia!" << endl;
}

void Agenda :: AlteraContato(string nome, string telefone, string endereco, string relacao)
{
    int i;
    for(i=0;i<last;i++)
    {
        if(contatos[i]->getNome()==nome)
        {
            contatos[i]->setTelefone(telefone);
            contatos[i]->setEndereco(endereco);
            contatos[i]->setRelacao(relacao);
            break;
        }
    }
}

void Agenda :: RemoveContato(string nome)
{
    int i,id_removido;
    if(last>0)
    {
        for(i=0;i<last;i++)
        {
            if(contatos[i]->getNome()==nome)
            {
                delete contatos[i];
                id_removido=i;
                break;
            }
        }
        for(i=id_removido;i<last-1;i++)
        {
            contatos[i]=contatos[i+1];
        }
        last--;
        contatos[last] = NULL;
    }
    else cout << "Agenda vazia!" << endl;
}

void Agenda :: ImprimeContatos()
{
    int i;
    string contato_completo;
    printf("============ AGENDA ==============\n");
    for(i=0;i<last;i++)
    {
        if(contatos[i]!=NULL)
        {
            contato_completo = contatos[i]->toString();
            cout << contato_completo << endl << endl;
        }
    }
}
