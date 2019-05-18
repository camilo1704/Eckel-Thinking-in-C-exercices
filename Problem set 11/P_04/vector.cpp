#include "vector.h"



template<class T, class A>
    vector_base<T,A>::vector_base(vector_base&& a)
        : alloc{a.alloc},
    elem{a.elem},
    space{a.space},
    last{a.space}
    {
    a.elem = a.space = a.last = nullptr; // no longer owns any memor y
    }
    template<class T, class A>
    vector_base<T,A>::& vector_base<T,A>::operator=(vector_base&& a)
    {
    swap(∗this,a);
    return ∗this;
}
