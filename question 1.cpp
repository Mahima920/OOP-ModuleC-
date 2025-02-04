#include <iostream>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;
    int matchesPlayed;

public:
    void setCricketerData(string n, int a, int m) {
        name = n;
        age = a;
        matchesPlayed = m;
    }

    void displayCricketer() {
        cout << "Name: " << name << "\nAge: " << age 
             << "\nMatches Played: " << matchesPlayed << endl;
    }
};

class Bowler : public Cricketer {
private:
    int wicketsTaken;

public:
    void setBowlerData(string n, int a, int m, int w) {
        setCricketerData(n, a, m);
        wicketsTaken = w;
    }

    void displayBowler() {
        displayCricketer();
        cout << "Wickets Taken: " << wicketsTaken << endl;
    }
};

class Batsman : public Cricketer {
private:
    int runsScored;
    int centuries;

public:
    void setBatsmanData(string n, int a, int m, int r, int c) {
        setCricketerData(n, a, m);
        runsScored = r;
        centuries = c;
    }

    void displayBatsman() {
        displayCricketer();
        cout << "Runs Scored: " << runsScored 
             << "\nCenturies: " << centuries << endl;
    }
};

int main() {
    Bowler bowler;
    Batsman batsman;

    bowler.setBowlerData("Mitchell Starc", 33, 150, 250);
    cout << "\n=== Bowler Details ===\n";
    bowler.displayBowler();

    batsman.setBatsmanData("Virat Kohli", 35, 270, 12000, 45);
    cout << "\n=== Batsman Details ===\n";
    batsman.displayBatsman();

    return 0;
}
