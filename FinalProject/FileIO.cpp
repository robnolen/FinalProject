//
//  FileIO.cpp
//  FinalProject
//
//  Created by Robert Nolen on 12/6/11.
//  Copyright 2011 Greencrayon.org. All rights reserved.
//


#include "FinalProject.h"
#include <fstream>
#include <sstream>

std::stringstream getFileContents(stdString fileName)
{
    std::stringstream foo;
    std::ifstream stream (fileName.c_str(), std::ios::in);
    stdString line;
    while (stream.getline(line))
    {   
        stream >> foo;
    }
    return foo;
}
