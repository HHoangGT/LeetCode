#ifndef LEETCODE_TIMENEEDEDTOBUYTICKETS2073_H
#define LEETCODE_TIMENEEDEDTOBUYTICKETS2073_H

#include "../libs/template.h"
#include <unordered_map>

class Solution
{
private:
    template <typename T>
    struct Node
    {
        T val;
        Node *next;
        Node(T val) : val(val), next(nullptr) {}
    };

    template <typename T>
    class Queue
    {
    public:
        Node<T> *head;
        Node<T> *tail;
        Queue() : head(nullptr), tail(nullptr) {}
        ~Queue()
        {
            while (!empty())
                pop();
        }
        bool empty() { return head == nullptr; }
        void push(T val)
        {
            Node<int> *node = new Node<T>(val);
            if (empty())
            {
                head = tail = node;
            }
            else
            {
                tail->next = node;
                tail = node;
            }
        }
        void pop()
        {
            if (empty())
                return;
            Node<T> *node = head;
            head = head->next;
            delete node;
        }
    };

public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int n = tickets.size();
        int counter = 0;
        unordered_map<int, int> cnt;

        Queue<int> q;
        for (int i = 0; i < n; i++)
        {
            cnt[i] = tickets[i];
            q.push(tickets[i]);
        }
        int index = 0;
        while (cnt[k] > 0)
        {
            int val = q.head->val;
            q.pop();
            if (val > 0)
            {
                val--;
                counter++;
                q.push(val);
                cnt[index] = val;
            }
            else
            {
                q.push(0);
                cnt[index] = 0;
            }
            index = (index + 1) % n;
        }
        return counter;
    }
};

#endif // LEETCODE_TIMENEEDEDTOBUYTICKETS2073_H