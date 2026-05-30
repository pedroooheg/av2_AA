
using namespace std;

string removeLeadingZeros(string s)
{
    size_t pos = s.find_first_not_of('0');

    if (pos == string::npos)
        return "0";

    return s.substr(pos);
}

long long binaryToDecimal(const string &s)
{
    long long result = 0;
