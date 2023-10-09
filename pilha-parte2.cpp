#include <iostream>
#include <stack>


using namespace std;

int main() {

   
   stack <string> cartas;
   
   
   
   // o resultado da condição vai ser "pilha vazia" caso ela seja escrita antes da inserção de elementos, porque os elementos foram adcionados depois da condição
   
   cartas.push("Rei de Copas");
   cartas.push("Rei de Espadas");
   cartas.push("Rei de Ouros");
   cartas.push("Rei de Paus");
   
   
   if (cartas.empty()) {
   	
   	cout << "Pilha vazia\n\n";
   } else {
   	cout << "Pilha com cartas\n\n";
   }
   
   
   while(!cartas.empty()) { // enquanto cartas for vazio
   	
   	cartas.pop();
   	
   }
	
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	cout << "Carta	do topo: " << cartas.top() << "\n";
	
}
