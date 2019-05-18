#include <thread>

template<class T, size_t N>
class Queue {
public:
void put(const T&);
void get(T*);
// variantes fancy
bool try_put(const T&);
template <class Rep, class Period>
bool try_put_for(const T&, const duration<Rep,Period> &rel_time);
template <class Clock, class Duration>
bool try_put_until(const T&, const time_point<Clock,Duration> &abs_time);
bool try_get(T*);
template <class Rep, class Period>
bool try_get_for(T*, const duration<Rep,Period> &rel_time);
template <class Clock, class Duration>
bool try_get_until(T*, const time_point<Clock,Duration> &abs_time);
};

int main()
{

    return 0;
}
