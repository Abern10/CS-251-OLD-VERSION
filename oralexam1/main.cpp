#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <map>

using namespace std;

void readFile(string fileName, vector<string> &file){
    file.clear();
   ifstream infile; string line;
   infile.open(fileName);
   if(infile){
   // appends data into vector
   while(!infile.eof()){
      if(getline(infile, line)){
        file.push_back(line);
      }
   }
   infile.close();
   }
}


int main(){
    string fileName, header, value, title, animeTitle;
    int animeEp = 0;
    vector<string> file;
    vector<string> parsedFile;
    map<string, int> anime;

    readFile("student1_DataFile.txt", file);

    header = file[0];

    cout << header << endl;

    for(int i = 1; i < file.size(); i++){
        stringstream ss(file[i]);
        while(getline(ss, value, ',')){
            parsedFile.push_back(value);
        }
    }
    for(int i = 0; i < parsedFile.size(); i++){
        if(i % 2 == 0){
            animeTitle = parsedFile[i];
        }
        else{
            animeEp = stoi(parsedFile[i]);
            pair<string, int> TitleandEp;
            TitleandEp.first = animeTitle;
            TitleandEp.second = animeEp;
            anime.insert(TitleandEp);
        }
    }
    auto pr = max_element(anime.begin(), anime.end(), [](const auto &x, const auto &y){
        return x.second < y.second;
    });
    cout << "Anime with highest episode count: ";
    cout << pr->first << endl << endl;
    cout << "List of movies: " << endl;

    for(auto &line : anime){
        if(line.second == 1){
            cout << line.first << " " << line.second << endl;
        }
    }
}