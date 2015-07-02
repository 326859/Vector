int* new_vector_int(int size)
{
    int* arr = new int (arr[size]);
    return arr;
}

void delete_vector_int(int *arr, int size)
{
    int a = sizeof(int);
    for(int i = 0; i < size ;i++)
        delete (arr + a * i);
}
