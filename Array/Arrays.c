#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 7
int size = 0;

void InsAtBeg(int arr[], int x)
{

    if (size >= CAPACITY)
    {
        printf("Array Is Full");
        return;
    }
    if (size == 0)
    {
        arr[0] = x;
        size++;
        return;
    }

    for (int i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = x;
    size++;
}

void InsAtEnd(int arr[], int x)
{

    if (size >= CAPACITY)
    {
        printf("Array Is Full");
        return;
    }
    arr[size++] = x;
}

void InsAtIndex(int arr[], int x, int index)
{
    if (size >= CAPACITY)
    {
        printf("Array Is Full");
        return;
    }

    if (index == 0)
    {
        InsAtBeg(arr, x);
        return;
    }
    else if (index == size - 1)
    {
        InsAtEnd(arr, x);
        return;
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    size++;
    arr[index] = x;
}

void DelAtEnd(int arr[])
{
    if (size <= 0)
    {
        printf("Array is empty");
        return;
    }
    size--;
}

void DelAtBeg(int arr[])
{
    if (size <= 0)
    {
        printf("Array is empty");
        return;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

void DelAtIndex(int arr[], int index)
{
    if (size <= 0)
    {
        printf("Array is empty");
        return;
    }
    else if (index == 0)
    {
        DelAtBeg(arr);
        return;
    }
    else if (index >= size - 1)
    {
        DelAtEnd(arr);
        return;
    }
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}
void display(int arr[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void main()
{
    int arr[CAPACITY] = {0};

    InsAtBeg(arr, 10);
    InsAtBeg(arr, 5);
    display(arr);
    InsAtEnd(arr, 51);
    display(arr);
    InsAtIndex(arr, 100, 2);
    display(arr);

    DelAtIndex(arr, 2);
    display(arr);
    DelAtBeg(arr);
    display(arr);
    DelAtEnd(arr);
    display(arr);
}