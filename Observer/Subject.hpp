#pragma once

#include <vector>
#include "Observer.hpp"

template <typename T>
class Subject
{
public:
    void Attach(Observer<T> *observer)
    {
        observers.push_back(observer);
    }

    void Detach(Observer<T> *observer)
    {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

protected:
    void Notify(T data)
    {
        for (Observer<T> *observer : observers)
        {
            observer->Update(data);
        }
    }

private:
    std::vector<Observer<T> *> observers;
};
