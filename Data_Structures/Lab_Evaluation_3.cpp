#include <iostream>
using namespace std;

#define MAX_SIZE 15

class Stack {
private:
    int top;
    int arr[MAX_SIZE];
public:
    Stack() {
        top = -1;
    }

    bool push(int x) {
        if (isFull()) {
            cout << "Stack overflow" << endl;
            return false;
        }
        // Increment top index and add element to array
        arr[++top] = x;
        return true;
    }

    bool isEmpty() {
        return (top < 0);
    }

    bool isFull() {
        return (top >= MAX_SIZE - 1);
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "\nStack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }

    double average() {
        if (isEmpty()) {
            return 0.0;
        }
        int sum = 0;
        for (int i = 0; i <= top; i++) {
            sum += arr[i];
        }
        return (double) sum / (top + 1);
    }
};

int main() {
    Stack stk;
    cout << "Input some elements onto the stack:";
    stk.push(7);
    stk.push(4);
    stk.push(2);
    stk.push(5);
    stk.push(1);
    stk.push(0);
    stk.display();

    double avg_val = stk.average();
    printf("Average of the said stack values: %0.2f\n", avg_val);

    return 0;
}