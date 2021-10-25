#include "Contato.h"

string Contato :: getNome(){return this->nome;}

void Contato :: setNome(string nome){this->nome = nome;}

void Contato :: setTelefone(string telefone){this->telefone = telefone;}

void Contato :: setEndereco(string endereco){this->endereco = endereco;}

void Contato :: setRelacao(string relacao){this->relacao = relacao;}

string Contato :: toString()
{
    string aux;
    aux = "Nome: " + nome + "\nTelefone: " + telefone + "\nEndereco: " + endereco + "\nRelacao: " + relacao;
    return aux;
}
