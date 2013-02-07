#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int i = 0;
    int numbers[10000];
    int savedArray[10000];
    string line;

    ifstream myfile;
    myfile.open("data10k.txt");
    while(myfile.good()){
        getline(myfile, line);
        stringstream(line)>>numbers[i];
            savedArray[i] = numbers[i];
            for(int n=0; n<i; n++){
                if(numbers[i]<savedArray[n]){
                    for(int k=i; k>n; k--){
                        savedArray[k] = savedArray[k-1];
                    }
                    savedArray[n] = numbers[i];
                    break;
                }
            }
    i++;
    }

    for(int b=0; b<10000; b++){
    cout << savedArray[b]<< endl;}


    myfile.close();
    return 0;
}






