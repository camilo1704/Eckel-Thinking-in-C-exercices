#ifndef FILE_PTR_H
#define FILE_PTR_H
#include <stdio.h>
#include <string.h>


class File_ptr {
FILE∗ p;
public:
    File_ptr(const char∗ n, const char∗ a) // open file n
        : p{fopen(n,a)}
        {
            if (p==nullptr) throw runtime_error{"File_ptr: Can't open file"};
        }

    File_ptr(const string& n, const char∗ a) // open file n
        :File_ptr{n.c_str(),a}
          { }

    explicit File_ptr(FILE∗ pp) // assume ownership of pp
        :p{pp}
        {
            if (p==nullptr) throw runtime_error("File_ptr: nullptr"};
        }
    void write(const void *ptr, size_t size, size_t n, File_ptr* file )
    {
       if (p==nullptr) throw runtime_error{"No hay nada para copiar"};
       fwrite(ptr,size,n,file->p);

    }
    void read(const void *ptr, size_t size, size_t n, File_ptr* file )
    {
        if (file==nullptr) throw runtime_error{"No hay nada para leer"};
        fread(ptr,size,n,file->p);

    }


#endif // FILE_PTR_H
