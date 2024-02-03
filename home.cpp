#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'EstimatePos' function below.
 *
 * The function accepts following parameters:
 *  1. FLOAT initial_x
 *  2. FLOAT next_x
 *  3. FLOAT initial_y
 *  4. FLOAT next_y
 *  5. FLOAT time_diff
 */

void EstimatePos(float initial_x, float next_x, float initial_y, float next_y, float time_diff) {
    float velox = (next_x - initial_x) / time_diff;
    float veloy = (next_y - initial_y) / time_diff;

    float waktu = initial_y / veloy;

    float landing = initial_x + velox * waktu;

    if (velox >= -300 && velox <= 5000 && veloy >= -50 && veloy <= 0){
        cout << "Ball x's position on y: 0.00 cm is " << setprecision(2) << landing << " cm" << endl;
        cout << "Ball is moving towards goal post" << endl;
    }
    else{
        cout << "Ball x's position on y: 0.00 cm is " << setprecision(2) << landing << " cm" << endl;
        cout << "Ball is not moving towards goal post"<< endl;
    }
}

int main()
{
    string initial_x_temp;
    getline(cin, initial_x_temp);

    float initial_x = stof(ltrim(rtrim(initial_x_temp)));

    string next_x_temp;
    getline(cin, next_x_temp);

    float next_x = stof(ltrim(rtrim(next_x_temp)));

    string initial_y_temp;
    getline(cin, initial_y_temp);

    float initial_y = stof(ltrim(rtrim(initial_y_temp)));

    string next_y_temp;
    getline(cin, next_y_temp);

    float next_y = stof(ltrim(rtrim(next_y_temp)));

    string time_diffrence_temp;
    getline(cin, time_diffrence_temp);

    float time_diffrence = stof(ltrim(rtrim(time_diffrence_temp)));

    EstimatePos(initial_x, next_x, initial_y, next_y, time_diffrence);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}