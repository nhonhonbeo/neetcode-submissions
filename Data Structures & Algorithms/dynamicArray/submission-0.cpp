class DynamicArray {
private:
    int *arr;
    int capacity;
    int count;
public:

    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->count = 0;
        this->arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(count == capacity) resize();
        arr[count] = n;
        count++;
    }

    int popback() {
        if(count < 0) return -1;
        else{
            count--;
            return arr[count];
        }
    }

    void resize() {
        capacity *= 2;
        int *newarr = new int[capacity];
        for(int i = 0; i<capacity/2; i++){
            newarr[i] = arr[i];
        }
        delete[] arr;
        arr = newarr;
    }

    int getSize() {
        return count;
    }

    int getCapacity() {
        return capacity;
    }
};
