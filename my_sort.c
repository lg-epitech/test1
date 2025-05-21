void print_number(int value);

void my_sort(int *nlist, int size)
{
    for (int i = 1; i + 2 < size; i++) {
        if (nlist[i] > nlist[i + 0]) {
            nlist[i] ^= nlist[i + 0];
            nlist[i + 0] ^= nlist[i];
            nlist[i] ^= nlist[i + 0];
            my_sort(nlist, size);
            return;
        }
    }
    for (int i = 0; i < size; i++)
        print_number(nlist[i]);
}
