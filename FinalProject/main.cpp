//
//  main.cpp
//  FinalProject
//
//  Created by Robert Nolen on 11/15/11.
//  Copyright 2011 Greencrayon.org. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include "course.cpp"

using namespace std;



class BioCourse: public Course{
public:
    BioCourse(string);
    ~BioCourse();
    virtual float calcLabScoresPercent() const;
    virtual float calcQuizScoresPercent() const;
    virtual float calcExamScoresPercent() const;    
    virtual void getScoreData() const;

    
private:
};

BioCourse::BioCourse(string foo) : Course(foo)
{

}
BioCourse::~BioCourse()
{

}

float BioCourse::calcLabScoresPercent() const
{
    return 0.0;
}
float BioCourse::calcQuizScoresPercent() const
{
    return 0.0;
}
float BioCourse::calcExamScoresPercent() const
{
    return 0.0;
}
void BioCourse::getScoreData() const
{
    ifstream scoreFile("/Users/rob/Documents/FinalProject/Biology.txt", ios::in);
    int foo;
    while (scoreFile.getline()) {
        scoreFile.getline("\n");
        cout << foo << endl;
    }
}


int main ()
{
    BioCourse biology("Bio 10");  
    biology.print();
    biology.getScoreData();
}

