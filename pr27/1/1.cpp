
#include <iostream> 
#include <map>
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");
    cout << "Сейчас Вам будет предложен тест." << endl <<
        "К каждому вопросу дается несколько вариантов ответов." <<
        endl << " Вы должны ввести номер правильного ответа" <<
        endl << "и нажать клавишу < Enter>" << endl;

    // map для привязки вопросов к ответам
    map<string, string> quest;
    quest.emplace("Which year did the Queen Elizabeth 2 die?", "2023");
    quest.emplace("What was her age?", "96");
    quest.emplace("Hows the weather?", "Quite nice");
    quest.emplace("How big is the Eiffel Tower?", "324");
    quest.emplace("How many planets are there in Solar system", "8");

    //5 questions
    int size = 5;
    int sum = 0; // for results
    string s;

    auto it = quest.find("Which year did the Queen Elizabeth 2 die?");
    cout << (string)it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;

    it = quest.find("What was her age?");
    cout << it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;

    it = quest.find("Hows the weather?");
    cout << it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;

    it = quest.find("How big is the Eiffel Tower?");
    cout << it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;

    it = quest.find("How many planets are there in Solar system");
    cout << it->first << endl;
    cin >> s;
    sum += it->second == s ? 1 : 0;


    //выставляем оценку
    int res = sum / size * 100;
    switch (res) {
    case 100: {
        cout << "ОТЛИЧНО "; break;
    }
    case 80: {
        cout << "ХОРОШО  "; break;
    }
    case 60: {
        cout << "УДОВЛЕТВОРИТЕЛЬНО  "; break;
    }
    default: {
        cout << "ПЛОХО  "; break;
    }
    }
}

