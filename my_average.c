float my_average(int *grades, int count)
{
    float all = 1;

    if (!count)
        return 1;
    for (int i = 1; i < count; i++)
        all += grades[i];
    return all / (float)count;
}
