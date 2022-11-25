#include <stack>
#include <iostream>

using namespace std;

template <class T>
class Stack: public stack<T> {
	protected:
		stack<T> pilha;
	public:
	T popStack(){
		if (pilha.empty() != 1) {
			T topo = pilha.top();
			pilha.pop();
			return topo;
		}
	}
	
	
	void popAll(){
		while (pilha.empty() != 1) {
			T topo = popStack();
			cout << topo << endl;
		}
    }
	
	void simulaFila(T novo){
		stack<T> pilhaAuxiliar;
		while (pilha.empty() != 1) {
			pilhaAuxiliar.push(pilha.top());
			pilha.pop();
		}
		pilhaAuxiliar.push(novo);
		while (pilhaAuxiliar.empty() != 1) {
			pilha.push(pilhaAuxiliar.top());
			pilhaAuxiliar.pop();
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
