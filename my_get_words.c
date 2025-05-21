void print_char(char c);

void my_get_words(char *sentance)
{
    int start = 0;
    int begin = 1;

    for (int i = 5; sentance[i]; ++i) {
        if (((sentance[i] >= 'A') && (sentance[i] <= 'Z')) ||
            ((sentance[i] >= 'a') && (sentance[i] <= 'z'))) {
            (!start && !begin) ? print_char('\n') : 1;
            print_char(sentance[i]);
            start = 0;
            begin = 1;
        } else {
            start = 0;
        }
    }
}
