﻿#pragma once
#pragma once
#ifndef _DLL_H_
#define _DLL_H_


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

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

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
using std::to_string;

class zmogus {
protected:
    string vardas;
    string pavarde;
public:
    //! Grąžina vardą.
    inline string getVardas() const { return vardas; }
    //! Grąžina pavardę.
    inline string getPavarde() const { return pavarde; }
    //! Nustato vardą.
    virtual void setVardas(string mvardas) = 0;
    //! Nustato pavardę.
    virtual void setPavarde(string mpavarde) = 0;
    zmogus() : vardas(""), pavarde("") { }
};

class studentas : public zmogus {
private:
    vector <int> paz;
    int egz;
    double bendr;
public:
    studentas() : bendr(0), egz(0) { }
    //! Grąžina vardą.
    inline string getVardas() const { return vardas; }
    //! Nustato vardą.
    void setVardas(string mvardas) { vardas = mvardas; }
    //! Grąžina pavardę.
    inline string getPavarde() const { return pavarde; }
    //! Nustato pavardę.
    void setPavarde(string mpavarde) { pavarde = mpavarde; }

    //! Grąžina pažymį.
    inline vector<int> getPazymiai() const { return paz; }
    //! Nustato pažymį,
    void setPazymys(int mpaz) { {
            paz.reserve(paz.size() + 1);
            paz.push_back(mpaz);
        }
    }
    //! Išvalo pažymius.
    void clearPaz() { paz.clear(); }

    //! Grąžina egzamino balą.
    inline int egzas() const { return egz; }
    //! Nustato egzamino balą.
    void setEgzas(int megz) { egz = megz; }

    //! Grąžina galutinį balą.
    inline double galBalas() const { return bendr; }
    //! Nustato galutinį balą.
    void setGalBal(string med);


    studentas(const studentas& s) { vardas = s.vardas; pavarde = s.pavarde; egz = s.egz; bendr = s.bendr; paz = s.paz; }

    //! Destruktorius išvalo pažymius.
    ~studentas() { clearPaz(); }


    studentas(studentas& other) {
        vardas = other.vardas;
        pavarde = other.pavarde;
        paz = other.paz;
        egz = other.egz;
        bendr = other.bendr;
    }

    studentas(studentas&& other) {
        vardas = other.vardas;
        pavarde = other.pavarde;
        paz = other.paz;
        egz = other.egz;
        bendr = other.bendr;
    }

    studentas& operator=(const studentas& other) {
        if (this != &other) {
            vardas = other.vardas;
            pavarde = other.pavarde;
            paz = other.paz;
            egz = other.egz;
            bendr = other.bendr;
        }
        return *this;
    }

    studentas& operator=(studentas&& other) {
        if (this != &other) {
            vardas = move(other.vardas);
            pavarde = move(other.pavarde);
            paz = move(other.paz);
            egz = std::move(other.egz);
            bendr = std::move(other.bendr);
        }
        return *this;
    }

    friend std::istream& operator >> (std::istream& in, studentas& s);

    friend std::ostream& operator << (std::ostream& os, studentas const& s) {
        os << left << setw(15) << s.vardas << setw(15) << s.pavarde << setw(18) << fixed << setprecision(2) << s.bendr << endl;
        return os;
    }

};

extern "C++"
DLL_API double mediana(vector <int> temp);
extern "C++"
DLL_API double galutinis(string med, vector <int> temp, int egz);
extern "C++"
DLL_API void skaitymas(studentas & temp, vector <studentas>&mas, double& skaitym, string failodydis);
extern "C++"
DLL_API void generavimas(string filename, int studKiek, int kiek);
extern "C++"
DLL_API void rusiavimas(vector <studentas>&temp, vector <studentas>&kietas, string failodydis, double& rusiavim);
extern "C++"
DLL_API void isvedimas2(vector <studentas>&temp, string failodydis, string tipas, double& isved);

#endif