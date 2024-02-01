#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;


int main()
{
  ifstream inFile;
  inFile.open("Ch8_Ex4Data.txt");
    int testscore;
    string line, token;
  
    int scores[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  
    while(getline(inFile, line))
    {
        stringstream str(line);

    
        while(getline(str, token, ',')) {
        
            testscore = stoi(token);

           
            if(testscore >= 0 && testscore <= 24)
                  scores[0]++;
           
            else if (testscore >= 25 && testscore <= 49)
                  scores[1]++;
            
            else if (testscore >= 50 && testscore <= 74)
                  scores[2]++;
            
            else if (testscore >= 75 && testscore <= 99)
                  scores[3]++;
            
            else if (testscore >= 100 && testscore <= 124)
                  scores[4]++;
            
            else if (testscore >= 125 && testscore <= 149)
                  scores[5]++;
            
            else if (testscore >= 150 && testscore <= 174)
                  scores[6]++;
        
            else if (testscore >= 175 && testscore <= 200)
                  scores[7]++;
        }
    }

    cout << endl << "Results: " << endl;
    cout << fixed << left;
  
    for(int i = 0, start = 0, end = 24; i <= 7; i++, start += 25, end += 25)
    {
        string range = to_string(start) + "-" + to_string(end);
        cout << range << " " << scores[i] << endl;
    }

    inFile.close();

    return 0;
}