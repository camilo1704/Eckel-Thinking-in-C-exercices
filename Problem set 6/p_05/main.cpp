
int main()
{
    extern void func1(int);
    extern void func2(int);
    extern void print1();
    extern void print2();

    func1(22);
    func2(23);
    print1();
    print2();//es distinto para cada cpp
    return 0;
}
