#pragma once

template <typename T>
class Observer
{
public:
    virtual void Update(T subject) = 0;
};