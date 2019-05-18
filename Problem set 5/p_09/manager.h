#ifndef MANAGER_H
#define MANAGER_H


class Manager
{
public:
   static Manager *getInstance();
private:
     Manager();
     static Manager* instance;
};

#endif // MANAGER_H
