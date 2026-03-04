#include<iostream>
#include<fstream>
#include<locale>

class ArrayList
{
public:
    int size;
    int capacity;
    double* data;

    ArrayList()
    {
        size = 0;
        capacity = 4;
        data = new double[capacity] {0};
    }
    ~ArrayList()
    {
        delete[]data;
    }
    int getsize()
    {
        return size;
    }
    void resize(int newCapacity)
    {
        double* newData = new double[newCapacity] {0};
        for (int i = 0; i < size; ++i)
        {
            newData[i] = data[i];
        }
        delete[]data;
        data = newData;
        capacity = newCapacity;
    }
    void add(double value)
    {
        if (size == capacity)
        {
            resize(capacity * 2);
        }
        data[size] = value;
        ++size;
    }
    int get(int index)
    {
        if (0 <= index && index < size)
        {
            return data[index];
        }
        return -1;
    }
    void set(int index, int value)
    {
        if (0 <= index && index < size)
        {
            data[index] = value;
        }
        if (index == size)
        {
            add(value);
        }
    }
    void print()
    {
        std::cout << "[" << size << "/" << capacity << "]{";
        for (int i = 0; i < size; ++i)
        {
            std::cout << data[i] << "";
        }
        std::cout << "}" << std::endl;
    }
    void remove(int index)
    {
        if (index < 0 || index >= size)
        {
            return;
        }
        for (int i = index; i < size - 1; ++i)
        {
            data[i] = data[i + 1];
        }
        --size;
    }

    void insert(int index, double value)
    {
        if (index < 0 || index > size)
        {
            return;
        }
        if (size == capacity)
        {
            resize(capacity * 2);
        }
        for (int i = size; i > index; --i)
        {
            data[i] = data[i - 1];
        }
        data[index] = value;
        ++size;
    }

    void clear()
    {
        size = 0;
    }

    bool contains(double value)
    {
        for (int i = 0; i < size; ++i)
        {
            if (data[i] == value)
            {
                return true;
            }
        }
        return false;
    }

    void saveToFile(const char* filename)
    {
        std::ofstream file(filename, std::ios::binary);
        file.write((char*)&size, sizeof(int));
        file.write((char*)&capacity, sizeof(int));
        file.write((char*)data, size * sizeof(double));
        file.close();
    }

    void loadFromFile(const char* filename)
    {
        std::ifstream file(filename, std::ios::binary);
        int newSize, newCapacity;
        file.read((char*)&newSize, sizeof(int));
        file.read((char*)&newCapacity, sizeof(int));

        double* newData = new double[newCapacity];
        file.read((char*)newData, newSize * sizeof(double));

        delete[] data;
        data = newData;
        size = newSize;
        capacity = newCapacity;
        file.close();
    }
};

int main()
{
    setlocale(LC_ALL, "");
    ArrayList list;
    list.add(0.5);
    list.add(1.5);
    list.add(2.5);

    list.insert(1, 3.14);
    std::cout << "После insert: ";
    list.print();

    std::cout << "Содержит 3.14 " << list.contains(3.14) << std::endl;

    list.saveToFile("list.bin");
    std::cout << "Сохранено в файл" << std::endl;

    list.clear();
    std::cout << "После clear: ";
    list.print();

    list.loadFromFile("list.bin");
    std::cout << "После загрузки: ";
    list.print();

    return 0;
}