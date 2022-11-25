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
		queue<T> auxiliar;
		while (fila.empty() != 1) {
			auxiliar.push(fila.front());
			fila.pop();
		}
		auxiliar.push(novo);
		while (auxiliar.empty() != 1) {
			fila.push(auxiliar.front());
			auxiliar.pop();
		}
	}
};

int main(){
	Queue<int> fila;
	fila.simulaPilha(4);
	fila.simulaPilha(5);
	fila.simulaPilha(6);

	int item = fila.popQueue();
	cout << item << endl;
	fila.popTodos();
	return 1;
}
