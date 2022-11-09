#include <stack>
#include <iostream>

using namespace std;

template <class T>
class Stack: public stack<T> {
	protected:
		stack<T> pilha;
	public:
	T popStack(){
		T topo = pilha.top();
		pilha.pop();
		return topo;
	}
	
	
	void popAll(){
		while (pilha.empty() != 1) {
			T topo = popStack();
			cout << topo << endl;
		}
    }
	
	void simulaFila(T novo){
		stack<T> pilhaAuxiliar;
		T auxiliar;
		while (pilha.empty() != 1) {
			auxiliar = popStack();
			pilhaAuxiliar.push(auxiliar);
		}
		pilhaAuxiliar.push(novo);
		while (pilhaAuxiliar.empty() != 1) {
			auxiliar = popStack();
			pilhaAuxiliar.push(auxiliar);
		}
	}

};

int main(){
	Stack<int> pilha;
	pilha.simulaFila(4);
	pilha.simulaFila(5);

	//pilha.popAll();
    cout << pilha.top() << endl;
}
