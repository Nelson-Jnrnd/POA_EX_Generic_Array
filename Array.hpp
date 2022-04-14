//
// Created by NelsonWork on 14.04.2022.
//

#ifndef POA_EX_GENERIC_ARRAY_ARRAY_HPP
#define POA_EX_GENERIC_ARRAY_ARRAY_HPP


class Array {
    class Iterator {
        
    };
public:
    Array(const unsigned short size);
    Array(const Array& o);
    ~Array();
    Array& operator=(const Array& o);
    T& operator[](const unsigned short index);
    const short int size() const;
    Iterator begin();
    Iterator end();
};


#endif //POA_EX_GENERIC_ARRAY_ARRAY_HPP
