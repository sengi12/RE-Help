#include <iostream>

using namespace std;

class Movie {
    //private = 
    private:
        string rating;
    //public = any other program can access this
    public:
        string title;
        string director;

        Movie (string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
            // G , PG, PG-13, R, NR 
        }

        void setRating(string aRating){
            if ( aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                rating = aRating;
            }
            else {
                rating = "NR";
            }
        }
        
        string getRating(){
            return rating;
        }
};

int main(){
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    cout << "Rating : " << avengers.getRating() << endl;
}