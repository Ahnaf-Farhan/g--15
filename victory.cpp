#include<iostream>
#include <iomanip>
using namespace std;
class Victory
{
    static const int year = 1971;
    public:
    Victory()
     {
        const string tag[] =
         {
            "Victory Day", "16 December",
            "Independence", "Bangladesh"
          };
        cout << "\n🇧🇩 16 | 12 | " << year << " 🇧🇩\n";
        for (int i = 0; i < 4; i++)
            cout << setw(18) << left << tag[i]
            << (i > 1 ? " -> TRUE" : "") << endl;
        cout << "\nState : "
             << (year == 1971 ? "SOVEREIGN" : "UNKNOWN") << endl;
    }
};
int main() {
    Victory bd;
    return 0;
}
