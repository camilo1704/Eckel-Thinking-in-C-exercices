#include <QCoreApplication>

template <class T, class A = allocator<T>>
struct vector_base {
    A alloc;
    T∗ elem;
    T∗ space;
    T∗ last;
    vector_base(const A& a, typename A::size_type n)
        : alloc{a}, elem{alloc.allocate(n)}, space{elem+n}, last{elem+n} { }
    ~vector_base() { alloc.deallocate(elem,last−elem); }
    vector_base(const vector_base&) = delete;
    vector_base& operator=(const vector_base&) = delete;
    vector_base(vector_base&&);
    vector_base& operator=(vector_base&&);
};

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


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
