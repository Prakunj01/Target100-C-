int weird_array(int input[], int n)
{
    if (n < 2)
    {
        return 0;
    }
    // int count = 0;
    int maximum = 0;
    int len = 0;
    for (int i = 0; i < n; i++)
    { int count =0;
        for (int j = i; j < n; j++)
        {
            if (input[i] == input[j])
                count++;
            else
            {
                temp[len] = count;
                len++;
                if (maximum < count)
                {
                    maximum = count;
                }
                count = 0;
                break;
            }
        }
    }
    return maximum;
}