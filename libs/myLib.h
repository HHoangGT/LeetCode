//
// Created by hoang on 1/30/2024.
//

#ifndef CPP_PROJECTS_MYLIB_H
#define CPP_PROJECTS_MYLIB_H

using namespace std;

// Base Linked List Class for Stack and Queue
template <typename T>
class LinkedList
{
protected:
    struct Node
    {
        T data;
        Node *p_next;

        explicit Node(T x)
        {
            data = x;
            p_next = nullptr;
        }
    };

    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = tail = nullptr;
    }

    virtual void push(T x) = 0;

    virtual T pop() = 0;

    virtual T getDataOut() = 0;

    bool isEmpty()
    {
        return head == nullptr && tail == nullptr;
    }
};

// Queue Class
template <typename T>
class MyQueue : public LinkedList<T>
{
    // private:
    //     LinkedList *queue = new LinkedList();
public:
    using typename LinkedList<T>::Node;

    MyQueue() : LinkedList<T>() {}

    void push(T x) override
    {
        Node *temp = new Node(x);
        if (this->isEmpty())
        {
            this->head = this->tail = temp;
        }
        else
        {
            this->tail->p_next = temp;
            this->tail = temp;
        }
    }

    T pop() override
    {
        if (this->isEmpty())
        {
            return -1;
        }

        T x = this->head->data;
        Node *temp = this->head;
        this->head = this->head->p_next;
        if (this->head == nullptr)
        {
            this->tail = nullptr;
        }
        delete temp;
        return x;
    }

    T getDataOut() override
    {
        if (this->isEmpty())
        {
            return -1;
        }
        return this->head->data;
    }

    bool empty()
    {
        return this->isEmpty();
    }
};

// Stack Class
template <typename T>
class MyStack : public LinkedList<T>
{
public:
    using typename LinkedList<T>::Node;

    MyStack() : LinkedList<T>() {}

    void push(T x) override
    {
        Node *temp = new Node(x);
        if (this->isEmpty())
        {
            this->head = temp;
        }
        else
        {
            temp->p_next = this->head;
            this->head = temp;
        }
    }

    T pop() override
    {
        if (this->isEmpty())
        {
            return -1;
        }
        T x = this->head->data;
        Node *temp = this->head;
        this->head = this->head->p_next;
        delete temp;
        return x;
    }

    T getDataOut() override
    {
        if (this->isEmpty())
        {
            return -1;
        }
        return this->head->data;
    }

    bool empty()
    {
        return this->isEmpty();
    }
};

#endif // CPP_PROJECTS_MYLIB_H
