/*
    Copyright (c) 2011 Alin Marin Elena <alinm.elena@gmail.com>

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without
    restriction, including without limitation the rights to use,
    copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following
    conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
*/


#ifndef GENERALINPUTS_H
#define GENERALINPUTS_H
#include <vector>
#include <fstream>
#include <string>


const int SUCCESS = 0;
const int ERROR_CLI = 1;
const int ERROR_CFILE = 2;
const int ERROR_NO_IDEA = 42;
class generalInputs
{

public:
    std::vector<int> seeds;
    int seed;
    std::ofstream log, debug;
    bool fancy;
    double TBath;
    double T0;
    int nSteps;
    int frequency;
    double dt;
    double box;
    double cut;
    double bin;
    double Tcv;
    double gamma;
    double gCV;
    int mcsteps;
    int mccycles;
    double dr;
    double rho;
    int N;
    int nEquil;
    std::string filename;
    std::string xyz;
    std::string name;
    std::string configFile;
    std::string version="0.0.0β1";
    std::string sampler;
    std::string logf;
    std::string dbgf;
    std::string el;
    double mass;
    bool shift;
    double mu;
    double zk;    
    int Nz;
    double dtz;
    generalInputs(){}
    virtual ~generalInputs();
};

#endif // GENERALINPUTS_H
