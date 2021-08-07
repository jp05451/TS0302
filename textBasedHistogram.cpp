#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
//#define DEBUG
using namespace std;

int main()
{
				vector<int> grade;
				fstream f,output;
				f.open("grade.txt", ios::in);
				output.open("grades.Output", ios::out);
				if (f.is_open())
								cout << "success";
				int count[6] = {0};
				int input,i,test=0;
				while (f >> input)
				{
								grade.push_back(input);
				}
#ifdef DEBUG
				cout << test << endl;
				test++;
#endif // DEBUG

				for (i = 0; i < grade.size(); i++)
				{
								count[grade[i]]++;
				}
				for (i = 0; i <= 5; i++)
				{
								output << count[i] << " grade(s) of " << i << endl;
				}
				f.close();
				output.close();
}