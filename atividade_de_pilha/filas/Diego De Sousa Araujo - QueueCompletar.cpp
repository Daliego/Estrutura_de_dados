#include <queue>
#include <iostream>

using namespace std;

template <class T>
class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
	T popQueue(){
		if (fila.empty() != 1) {
			T inicio = fila.front();
			fila.pop();
			return inicio;
		}
		
	}
	
	
	void popTodos(){				
		while (fila.empty() != 1) {
			T inicio = popQueue();
			cout << inicio << endl;
		}

    }
    
    void simulaPilha(T novo){
		queue<T> filaAuxiliar;
		filaAuxiliar.push(novo);
		while (fila.empty() != 1) {	
			filaAuxiliar.push(fila.front());
			fila.pop();
		}
		while (filaAuxiliar.empty() != 1) {
			fila.push(filaAuxiliar.front());
			filaAuxiliar.pop();
		}
		
	}
};

int main(){
	Queue<int> fila;
	fila.simulaPilha(4);
	fila.simulaPilha(5);
	fila.simulaPilha(6);

	//int item = fila.popQueue();
	//cout << item << endl;
	fila.popTodos();
	return 1;
}
