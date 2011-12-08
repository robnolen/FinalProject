//
//  main.cpp
//  FinalProject
//
//  Created by Robert Nolen on 11/15/11.
//  Copyright 2011 Greencrayon.org. All rights reserved.
//

#include "FinalProject.h"
#include "course.cpp"




class BioCourse: public Course{
public:
    BioCourse(stdString);
    ~BioCourse();
    virtual float calcLabScoresPercent() const;
    virtual float calcQuizScoresPercent() const;
    virtual float calcExamScoresPercent() const;    
    virtual void getScoreData() const;

    
private:
};

BioCourse::BioCourse(stdString foo) : Course(foo)
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
 
}


int main ()
{
    BioCourse biology("Bio 10");  
    biology.print();
    biology.getScoreData();
}

