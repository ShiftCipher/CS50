bool linear_search(int value, int values[], int n)
{
    for (int i = 0; i < n; i++)
        if (values[i] == value)
            return true;

    return false;
}

bool binary_search(int value, int values[], int n)
{
    int ending = n-1;
    int beggining = 0;

    while (ending >= beggining)
    {
        int middle = (beggining + ending) / 2;
        if (values[middle] == value)
            return true;
        else if (values[middle] > value)
            ending = middle - 1;
        else
            beggining = middle + 1;
    }

    return false;
}