#pragma once
#include <exception>

template <typename T>
class Array {
private:
    unsigned int m_size;
    T* m_data;
public:
    Array() : m_size(0), m_data(nullptr) {}
    Array(unsigned int size) : m_size(size), m_data(new T[size]) {
        for (unsigned int i = 0; i < m_size; ++i) {
            m_data[i] = T();
        }
    }
    Array(const Array& other) : m_size(other.m_size), m_data(new T[other.m_size]) {
        for (unsigned int i = 0; i < m_size; ++i) {
            m_data[i] = other.m_data[i];
        }
    }
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] m_data;
            m_size = other.m_size;
            m_data = new T[other.m_size];
            for (unsigned int i = 0; i < m_size; ++i) {
                m_data[i] = other.m_data[i];
            }
        }
        return *this;
    }
    ~Array() {
        delete[] m_data;
    }
    T& operator[](unsigned int index) {
        if (index >= m_size) {
            throw std::exception();
        }
        return m_data[index];
    }
    unsigned int size() const {
        return m_size;
    }
};
