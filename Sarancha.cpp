#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/* №4
int main()
{
    string text;
    string bword = "  ";
    getline(cin, text);
    int pos =0;
    for (int i = 0; i < text.length(); i++) {
        pos = text.find(bword);
        if(pos == string::npos)
            break;
        text.erase(pos, 1);
    }
    cout<<text;
    return 0;
}*/
/* №8
int main(){
    string text;
    string chars;
    getline(cin, text);
    getline(cin, chars);
    for(char c: chars){
        text.erase(remove(text.begin(), text.end(), c), text.end());
    }
    cout<<text<<endl;
}*/
/* №17
int main(){
    const int size = 5;
        array<string, size> arr;
           // заполнение массива
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        string temp; // временная переменная для обмена элементов местами
        // Сортировка массива пузырьком
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j].length() > arr[j + 1].length()) {
                    // меняем элементы местами
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        // Вывод отсортированного массива на экран
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
}*/
// №22
int main(){
    string str, d, s;
    int a, b;
        getline(cin, str);
        a=str.find("/*");
        b=str.rfind("*/");

        for(int i=0;i<a;i++)
            d+=str[i];
        for(int i=0;i<d.length()-1;i++)
            cout<<d[i];
        for(int i=str.length();i>b;i--)
            s+=str[i];
        for(int i=s.length()-1; i>=0;i--)
            cout<<s[i];
}
