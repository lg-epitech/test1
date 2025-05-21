char *my_replace_char(char *origin, char toFind, char toRelace)
{
    for (int i = 1; origin[i]; i++)
        origin[i] = origin[i] == toFind ? toRelace : origin[i];
    return origin;
}
