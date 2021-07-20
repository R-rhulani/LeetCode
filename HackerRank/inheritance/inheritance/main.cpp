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

class Student :  public Person{
    private:
        vector<int> testScores;
    public:

            Student(string firstName, string lastName, int id, vector<int>Scores) : Person (firstName, lastName, id)
                {
                    testScores = Scores;
                }
        char calculate()
        {

            char grade;
            int size=testScores.size(),average;
            float scr=0.0;
            for(int j=0; j<size;j++)
            {
                scr+=testScores[j];
            }
            average=scr/size;
            if(average>= 90 && average <=100)
                grade = 'O';
            if(average>= 80 && average <90)
                grade = 'E';
            if(average>= 70 && average <80)
                grade = 'A';
            if(average>= 55 && average <70)
                grade = 'P';
            if(average>= 40 && average <55)
                grade = 'D';
            if(average<40)
                grade = 'T';
            return grade;
        }

};

int main() {
    string firstName;
      string lastName;
    int id;
      int numScores;
    cin >> firstName >> lastName >> id >> numScores;
      vector<int> scores;
      for(int i = 0; i < numScores; i++){
          int tmpScore;
          cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
