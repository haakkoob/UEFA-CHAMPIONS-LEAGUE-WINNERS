#include <iostream>
#include <vector>
#include <string>

class LCWinner {

protected:

    std::string team_name;
    int year;

public:

    LCWinner(const std::string& n, int y) : team_name(n), year(y) {}

    virtual ~LCWinner() {}

    int get_year()  const { return year; }

    virtual void print_info() const = 0; 

};


class FinalMatch : public LCWinner {

private:

    std::string opponent;
    std::string score;

public:

    FinalMatch(const std::string& n, int y, const std::string& o, const std::string& sc) : LCWinner(n,y), opponent(o), score(sc) {}

    void print_info() const override {

         std::cout << std::endl;
         std::cout << "-----------------------------------" << std::endl;  
         std::cout << "-----------------------------------" << std::endl;
    
         std::cout << std::endl;
         std::cout << team_name << " CHAMPION!!! " << std::endl;
         std::cout << team_name << " " << score << " " << opponent << std::endl;
         std::cout << std::endl;

         std::cout << "----------------------------------" << std::endl;
         std::cout << "----------------------------------" << std::endl;


         std::cout << std::endl;
     }
    
};

class Penalty : public LCWinner {

private:

    std::string opponent;
    std::string main_score;
    std::string pen_score;

public:

    Penalty(const std::string& n, int y, const std::string& o, const std::string& ms, const std::string& p) : LCWinner(n,y), opponent(o), main_score(ms), pen_score(p)  {}

    void print_info() const override {

        std::cout << std::endl;

    
        std::cout << "------------------------------------" << std::endl;
        std::cout << "------------------------------------" << std::endl;

        std::cout << std::endl;
        std::cout << team_name << " CHAMPION!!!" << std::endl;
        std::cout << team_name << " " << main_score << " (" << pen_score << ") " << opponent << std::endl;
        std::cout << std::endl;

        std::cout << "------------------------------------" << std::endl;
        std::cout << "------------------------------------" << std::endl;
        

        std::cout << std::endl;
    }
};


int main() {
    
    std::cout << std::endl << "=== WELCOME UEFA CHAMPIONS LEAGUE ===" << std::endl;
    std::cout << std::endl;


    std::vector<LCWinner*> history;

    history.push_back(new FinalMatch("Real Madrid", 2000, "Valencia", "4-1"));
    history.push_back(new Penalty("Bayern Munchen", 2001, "Valencia", "1-1", "5-4"));
    history.push_back(new FinalMatch("Real Madrid", 2002, "Leverkusen", "2-1"));
    history.push_back(new Penalty("Milan", 2003, "Juventus", "0-0", "3-2"));
    history.push_back(new FinalMatch("Porto", 2004, "Monaco", "3-0"));
    history.push_back(new Penalty("Liverpool", 2005, "Milan", "3-3", "3-2"));
    history.push_back(new FinalMatch("Barcelona", 2006, "Arsenal", "2-1"));
    history.push_back(new FinalMatch("Milan", 2007, "Liverpool", "2-1"));
    history.push_back(new Penalty("Manchester United", 2008, "Chelsea", "1-1", "6-5"));
    history.push_back(new FinalMatch("Barcelona", 2009, "Manchester United", "2-0"));
    history.push_back(new FinalMatch("Inter", 2010, "Bayern Munchen", "2-0"));
    history.push_back(new FinalMatch("Barcelona", 2011, "Manchester United", "3-1"));
    history.push_back(new Penalty("Chelsea", 2012, "Bayern Munchen", "1-1", "4-3"));
    history.push_back(new FinalMatch("Bayern Munchen", 2013, "Borussia Dortmund", "2-1"));
    history.push_back(new FinalMatch("Real Madrid", 2014, "Atletico Madrid", "4-1"));
    history.push_back(new FinalMatch("Barcelona", 2015, "Juventus", "3-1"));
    history.push_back(new Penalty("Real Madrid", 2016, "Atletico Madrid", "1-1", "5-3"));
    history.push_back(new FinalMatch("Real Madrid", 2017, "Juventus", "4-1"));
    history.push_back(new FinalMatch("Real Madrid", 2018, "Liverpool", "3-1"));
    history.push_back(new FinalMatch("Liverpool", 2019, "Tottenham", "2-0"));
    history.push_back(new FinalMatch("Bayern Munchen", 2020, "Paris-Saint-Germain", "1-0"));
    history.push_back(new FinalMatch("Chelsea", 2021, "Manchester City", "1-0"));
    history.push_back(new FinalMatch("Real Madrid", 2022, "Liverpool", "1-0"));
    history.push_back(new FinalMatch("Manchester City", 2023, "Inter", "1-0"));
    history.push_back(new FinalMatch("Real Madrid", 2024, "Borussia Dortmund", "2-0"));
    history.push_back(new FinalMatch("Paris-Saint-Germain", 2025, "Inter", "5-0"));
    history.push_back(new Penalty("Paris-Saint-Germain", 2026, "Arsenal", "1-1", "4-3"));


    int year;

    while(1) {

        std::cout << "Plaese enter the year (press 1 to exit) " << std::endl;

        std::cin >> year;

        if (year == 1) {

            return 0;
        }

        else if (year > 2026 || year < 2000) {

            std::cout << "===============================" << std::endl;
            std::cout << "ALSHKERT" << std::endl;
            std::cout << "===============================" << std::endl;
            std::cout << std::endl;
        }

        for (int i = 0; i < history.size(); ++i) {

            if (year ==  history[i]->get_year()) {

                history[i]->print_info();
            }
        }
    }


   
}

