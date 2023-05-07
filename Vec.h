#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <limits>
#include <numeric>
#include <random>
#include <fstream>
#include <sstream>
#include <chrono>
#include <stdio.h>
#include "windows.h"

#include <deque>
using std::deque;

using std::cout;
using std::cin;
using std::endl;
using std::left;
using std::right;
using std::setw;
using std::setprecision;
using std::fixed;
using std::string;
using std::vector;
using std::numeric_limits;
using std::stringstream;
using std::setfill;
using std::stoi;
using std::to_string;

class zmogus {
  protected:
    string vardas;
    string pavarde;
  public:
    inline string getVardas() const { return vardas; }
    inline string getPavarde() const { return pavarde; }
    virtual void setVardas(string mvardas) = 0;
    virtual void setPavarde(string mpavarde) = 0;
    zmogus() : vardas(""), pavarde("") { }
};

class studentas: public zmogus {
    private:
        vector <int> paz;
        int egz;
        double bendr;
    public:
        studentas() : bendr(0), egz(0) { }

        inline string getVardas() const { return vardas; }
        void setVardas(string mvardas) { vardas = mvardas; }

        inline string getPavarde() const { return pavarde; }
        void setPavarde(string mpavarde) { pavarde = mpavarde; }

        inline vector<int> getPazymiai() const { return paz; }
        void setPazymys(int mpaz);
        void clearPaz() { paz.clear(); }
    
        inline int egzas() const { return egz; }
        void setEgzas(int megz) { egz = megz; }
    
        inline double galBalas() const { return bendr; }
        void setGalBal(string med);

        void readStudentai(studentas &temp, vector <studentas> &mas, double &skaitym, string failodydis);

        studentas(const studentas &s) { vardas = s.vardas; pavarde = s.pavarde; egz = s.egz; bendr = s.bendr; paz = s.paz; }
        ~studentas() { clearPaz(); }

        studentas& operator=(const studentas& other) {
          if (this == &other)
            return *this;
          vardas = other.vardas;
          pavarde = other.pavarde;
          egz = other.egz;
          bendr = other.bendr;
          paz = other.paz;
          return *this;
        }

        studentas(studentas&& other) noexcept {
          vardas = move(other.vardas);
          pavarde = move(other.pavarde);
          paz = move(other.paz);
          egz = std::move(other.egz);
          bendr = std::move(other.bendr);
        }

        //move assignment operator
	      studentas& operator=(studentas&& other) noexcept {
	      	if (this != &other) {
	      		vardas = move(other.vardas);
	      		pavarde = move(other.pavarde);
	      		paz = move(other.paz);
	      		egz = other.egz;
	      		bendr = other.bendr;
	      	}
	      	return *this;
	      }

        friend std::istream& operator >> (std::istream& in, studentas& s);

};

void pild (studentas &temp);
void skaitymas (studentas &temp, vector <studentas> &mas, double &skaitym, string failodydis);
double mediana (studentas& temp);
double vidurkis(studentas& temp, int a);
bool palyginimasv (studentas &a, studentas &b);
bool palyginimasp (studentas &a, studentas &b);
void isvedimas(vector<studentas> &temp);
void rusiavimas (vector <studentas> &temp, vector <studentas> &vargsas, string failodydis, double &rusiavim); 
void isvedimas2 (vector <studentas> &temp, string failodydis, string tipas, double &isved);
