

void bubble_sort(int values[], int n)
{
    bool iter;

    do
    {
        iter = false;
        for (int i = 0; i < n-1; i++)
        {
            if (values[i] > values[i+1])
            {
                int temp = values[i];
                values[i] = values[i+1];
                values[i+1] = temp;
                iter = true;
            }
        }
    } while (iter);
    return;
}

void selection_sort(int values[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        int smallest_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (values[smallest_index] > values[j])
                smallest_index = j;
        }
        temp = values[smallest_index];
        values[smallest_index] = values[i];
        values[i] = temp;
    }
}