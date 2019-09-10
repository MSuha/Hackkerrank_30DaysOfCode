#include <iostream>
#include <vector>

using namespace std;


class Person{
protected:
    string firstName;
    string lastName;
    int id;
public:
    Person(string firstName, string lastName, int identification){
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson(){
        cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
    }

};

class Student : public Person{
private:
    vector<int> testScores;
public:
    Student(string firstName, string lastName, int id, vector<int> scores ):
            Person(firstName, lastName, id),
            testScores(scores)
    {

    }

    char calculate(){
        float sum = 0.0, sum_avg = 0.0;

        for(int i = 0; i < testScores.size(); i++){
            sum += testScores[i];
        }

        sum_avg = sum / testScores.size();

        if(sum_avg >= 90){
            return 'O';
        }
        else if(sum_avg >= 80){
            return 'E';
        }
        else if (sum_avg >= 70) {
            return 'A';
        }
        else if (sum_avg >= 55) {
            return 'P';
        }
        else if (sum_avg >= 40) {
            return 'D';
        }
        else{
            return 'T';
        }
    }
};

int main() {