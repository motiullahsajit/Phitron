#include <bits/stdc++.h>

using namespace std;

// space complexity O(n)

class Array
{

private:
    int *arr;
    int size, capacity;

    void increase_size()
    {
        capacity = 2 * capacity;
        int *temp = new int[capacity];
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];

        delete[] arr;
        arr = temp;
    }

public:
    Array()
    {
        arr = new int[1];
        capacity = 1;
        size = 0;
    }

    void push_back(int x)
    {
        if (capacity == size)
            increase_size();

        arr[size] = x;
        size++;
    }

    void insert(int index, int x)
    {
        if (capacity == size)
            increase_size();
        for (int i = size - 1; i >= index; i--)
            arr[i + 1] = arr[i];

        arr[index] = x;
        size++;
    }
    void print_array()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";

        cout << "\n";
    }

    int get_size()
    {
        return size;
    }

    int get_element(int i)
    {
        if (i >= size)
        {
            cout << "Error " << i << " is out of bounds\n";
            return -1;
        }
        return arr[i];
    }

    void pop_back()
    {
        if (size == 0)
        {
            cout << "Current size is 0\n";
            return;
        }
        size--;
    }

    void erase(int index)
    {
        if (index >= size)
        {
            cout << "Position is out of bounds\n";
            return;
        }

        for (int i = index; i < size; i++)
            arr[i] = arr[i + 1];

        size--;
    }
};

int main()
{

    Array a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.print_array();
    a.pop_back();
    a.erase(1);
    int element = a.get_element(0);
    cout << "element: " << element << endl;
    a.print_array();

    return 0;
}