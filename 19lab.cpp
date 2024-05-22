#include <iostream>
#include <list>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

struct WordPage
{
    string word;
    list<int> pages;
};

int main()
{
    list<WordPage> book;

    int flag;
    int count;
    string s;
    list<int> page;
    struct WordPage tmp;

    cout << "List length -  ";
    cin >> flag;
    cout << endl;

    while (flag > 0)
    {
        cout << "\nEnter a word - ";
        cin >> s;

        count = rand() % 10;

        for (int i = 0; i < count; i++)
        {
            page.push_back(rand() % 999);
        }

        tmp.word = s;
        tmp.pages = page;

        book.push_back(tmp);

        page.clear();

        flag--;
    }

    flag = 1;
    while (true)
    {
        cout << "\nSelect what you want to do\nOutput Index words - 2\nOutput pages of a specific Index word - 3\nExit - 0\n";
        cin >> flag;
        cout << endl;

        if (flag == 2)
        {
            cout << "\nWords in a book: ";
            for (auto it = book.begin(); it != book.end(); it++)
            {
                cout << " " << it->word;
            }
            cout << endl;
        }
        else if (flag == 3)
        {
            cout << "\nWhat word? - ";
            cin >> s;

            bool found = false;
            for (auto it = book.begin(); it != book.end(); it++)
            {
                if (it->word == s)
                {
                    found = true;
                    cout << "\nPages where the word appears " << s << ": ";
                    for (auto page_it = it->pages.begin(); page_it != it->pages.end(); page_it++)
                    {
                        cout << " " << *page_it;
                    }
                    cout << endl;
                }
            }

            if (!found)
            {
                cout << "\nCouldn't find the word " << s << " ? ?????." << endl;
            }
        }
        else if (flag == 0)
        {
            break;
        }
        else
        {
            cout << "\nUnknown team. Try again." << endl;
        }
    }

    return 0;
}
    
