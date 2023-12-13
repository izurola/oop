#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
struct Node
{
    T data;
    Node<T> *next;
};

template <typename T>
class List
{
private:
    int len;
    Node<T> *head;

public:
    List()
    {
        head = nullptr;
        len = 0;
    }
    int Length()
    {
        return len;
    }
    void Delete(int index)
    {
        if (index == 0)
        {
            Node<T> *temp = head;
            head = head->next;
            delete temp;
            len--;
            return;
        }
        int i = 0;
        Node<T> *cur = head;
        Node<T> *prev = nullptr;
        while (cur != nullptr && i < index)
        {
            prev = cur;
            cur = cur->next;
            i++;
        }
        if (cur == nullptr)
        {
            return;
        }
        prev->next = cur->next;
        delete cur;
        len--;
    }
    T Get(int index)
    {
        Node<T> *cur = head;
        int i = 0;
        while (cur != nullptr && i < index)
        {
            cur = cur->next;
            i++;
        }
        if (cur == nullptr)
            return T();
        return cur->data;
    }
    void Insert(T t, int index)
    {
        Node<T> *temp = new Node<T>;
        temp->data = t;
        temp->next = nullptr;

        if (index == 0)
        {
            temp->next = head;
            head = temp;
            len++;
            return;
        }
        Node<T> *cur = head;
        int i = 0;
        while (cur != nullptr && i < index - 1)
        {
            cur = cur->next;
            i++;
        }
        if (cur == nullptr)
            return;
        temp->next = cur->next;
        cur->next = temp;
        len++;
    }
    void Add(T t)
    {
        Node<T> *temp = new Node<T>;
        temp->data = t;
        temp->next = nullptr;
        if (head == nullptr)
        {
            head = temp;
            len++;
            return;
        }
        Node<T> *cur = head;
        while (cur->next != nullptr)
        {
            cur = cur->next;
        }
        cur->next = temp;
        len++;
    }
    void Print()
    {
        Node<T> *cur = head;
        while (cur != nullptr)
        {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }
};
int main()
{
    List<int>list;
    list.Add(1);
    list.Add(2);
    list.Add(3);
    list.Add(4);
    list.Insert(5, 4);
    list.Print();
    list.Delete(4);
    list.Print();
}
