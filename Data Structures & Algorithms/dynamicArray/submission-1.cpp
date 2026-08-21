class DynamicArray {
public:
    int* m_array;
    int m_capacity;
    int m_size;

    DynamicArray(int capacity) {
        m_capacity = capacity;

        m_array = new int[capacity];

        m_size = 0;
    }

    int get(int i) {
        return m_array[i];
    }

    void set(int i, int n) {
        m_array[i] = n;
    }

    void pushback(int n) {
        if(m_size == m_capacity){
            resize();
        }
        
        m_array[m_size] = n;
        
        m_size++;
    }

    int popback() {
        m_size--;
        return m_array[m_size];
    }

    void resize() {
        m_capacity *= 2;
        int* newArray = new int[m_capacity];
        for(int i = 0; i < m_size; i++){
            newArray[i] = m_array[i];
        }

        delete[] m_array;
        m_array = newArray;
    }

    int getSize() {
        return m_size;
    }

    int getCapacity() {
        return m_capacity;
    }
};
