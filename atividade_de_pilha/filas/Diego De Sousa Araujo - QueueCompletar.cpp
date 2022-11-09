#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
	T popQueue(){
		T inicio = fila.front();
		fila.pop();
		return inicio;
	}
	
	
	void popTodos(){				
		while (fila.empty() != 1) {
			T inicio = popQueue();
			cout << inicio << endl;
		}
    }
    
    void simulaPilha(T novo){
		fila.push(novo);
		T auxiliar = popQueue();
		while (auxiliar != novo) {
			auxiliar = popQueue();
			fila.push(auxiliar);
		}
	}
};

int main(){
	Queue<int> fila;
	fila.simulaPilha(4);
	fila.simulaPilha(5);

	int item = fila.popQueue();
	cout << item << endl;
	fila.popTodos();
}
