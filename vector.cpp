#include "funkcijos.cpp"

int main (){
    vector <studentas> mas;
    studentas tempas;
    vector <studentas> vargsas;
    vector <studentas> kietas;

    int x;
    cout << "Iveskite 1 jeigu norite generuoti failus, o jeigu norite nuskaityti 0: ";
    cin >> x;

    cout << setfill('-') << setw(50) << '-' << setfill(' ') << endl;
    cout<<"Testavimas vyksta naudojant vector" << endl;
    cout << setfill('-') << setw(50) << '-' << setfill(' ') << endl;    

    if (x == 0){
        string failodydis;

        cout << "Iveskite failo pav is kurio nuskaityti duomenis: "; cin >>failodydis;

        double skaitym, rusiavim, isved, bendras;

        skaitymas (tempas, mas, skaitym, failodydis);
        rusiavimas(mas, vargsas, failodydis, rusiavim);
        isvedimas2(vargsas, failodydis, "vargsai.txt", isved);
        bendras=skaitym+rusiavim+isved;
        isvedimas2(mas, failodydis, "kietas.txt", isved);
        bendras+=isved;
        cout << failodydis << " Elementu failo visas laikas: " << fixed << setprecision(2)<< bendras << endl;
        cout << setfill('-') << setw(50) << '-' << setfill(' ') << endl;

        mas.clear();
        vargsas.clear();
        kietas.clear();

        }   else {
        auto start = std::chrono::high_resolution_clock::now();

        remove("1000.txt");  
        remove("10000.txt"); 
        remove("100000.txt");  
        remove("1000000.txt");
        remove("10000000.txt"); 

        generavimas("1000.txt", 1000, 15);

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff = end - start;
        std::cout << "1000" << " failu elemento generavimas uztruko: " << diff.count() << " s\n";

        cout << setfill('-') << setw(50) << '-' << setfill(' ') << endl;

        start = std::chrono::high_resolution_clock::now();

        generavimas("10000.txt", 10000, 15);

        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "10000" << " failu elemento generavimas uztruko: " << diff.count() << " s\n";

        cout << setfill('-') << setw(50) << '-' << setfill(' ') << endl;

        start = std::chrono::high_resolution_clock::now();

        generavimas("100000.txt", 100000, 15);

        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "100000" << " failu elemento generavimas uztruko: " << diff.count() << " s\n";

        cout << setfill('-') << setw(50) << '-' << setfill(' ') << endl;

        start = std::chrono::high_resolution_clock::now();

        generavimas("1000000.txt", 1000000, 15);

        end = std::chrono::high_resolution_clock::now();
        diff = end - start;
        std::cout << "1000000" << " failu elemento generavimas uztruko: " << diff.count() << " s\n";

        cout << setfill('-') << setw(50) << '-' << setfill(' ') << endl;

        start = std::chrono::high_resolution_clock::now();

        // generavimas("10000000.txt", 10000000, 15);

        // end = std::chrono::high_resolution_clock::now();
        // diff = end - start;
        // std::cout << "10000000" << " failu elemento generavimas uztruko: " << diff.count() << " s\n";

        // cout << setfill('-') << setw(50) << '-' << setfill(' ') << endl;
    }

    // cout<<"Spauskite 1 jeigu norite, kad nuskaitytu is failo arba 0 jeigu norite ranka vesti/generuoti duomenis: ";
    // int sk;
    // cin>>sk;
    // if (sk==1)
    // {
    //     skaitymas(tempas, mas);
    // } else {
    //     char uzkl='n';
    //     do {
    //         pild(tempas);
    //         mas.push_back(tempas);
    //         tempas.paz.clear();
    //         cout<<"Baigti darba spausk n, testi - bet koks klavisas: ";
    //         cin>>uzkl;
    //     } while (uzkl != 'n' && uzkl!= 'N');
    // }  
    // isvedimas (mas);
    mas.clear();

    cout << "Ar istrinti sugeneruotus failus? Jeigu taip spauskite 1. "; cin >> x;
    if (x == 1) {
        remove("vargsai.txt");  
        remove("kietas.txt"); 
    }   
}