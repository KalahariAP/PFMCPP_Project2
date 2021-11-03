#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 bool 
 char
 double
 float
 int
 unsigned int

 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    bool input = true;
    bool output = false;
    bool mute = true; 
    char fader = 'f';
    char knob = 'k';
    char power = 'p';
    double volume = 5.5;
    double range = 50.2;
    double size = 10.1;
    float herz = 5.5f;
    float area = 50.2f;
    float distor = 10.1f; 
    int bassVol = 60;
    int guitarVol = -12;
    int drumSet = 7;
    unsigned int kick = 20;
    unsigned int snare = 12;
    unsigned int hihat = 5;
       
    ignoreUnused(number, input, output, mute, fader, knob, power, volume, range,
        size, herz, area, distor, bassVol, guitarVol, drumSet, kick, snare, hihat); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool getBandMembers(int bass, int drum, char guitar = 'G')
{
    ignoreUnused(bass, drum, guitar);
    return{};
}
/*
 2)
 */
bool getHand(int finger = 5, int bound = 27, char tendon = 'T')
{
    ignoreUnused(finger, bound, tendon);
    return{};
}
/*
 3)
 */
char getTeam(int sport = 5, int city = 1, int stadium = 4)
{
    ignoreUnused(sport, city, stadium);
    return{};
}
/*
 4)
 */
char getComputerName(int system, int serialNum = 1234, char model = 'M')
{
    ignoreUnused(system, serialNum, model);
    return{};
}
/*
 5)
 */
double getWeather(int summer, float temperature = 15.5f, int month = 7)
{
    ignoreUnused(summer, temperature, month);
    return{};
}
/*
 6)
 */
double getFlanger(int pedal, int depth, double rate = 8.2)
{
    ignoreUnused(pedal, depth, rate);
    return{};
}
/*
 7)
 */
int getClassAmp(float herz = 5.5f, float distor = 10.1f, char noise = 'N')
{
    ignoreUnused(herz, distor, noise);
    return{};
}
/*
 8)
 */
int getDelay(int freq, int time, double volume = 8.5)
{
    ignoreUnused(freq, time, volume);
    return{};
}
/*
 9)
 */
int getFilter(float kHerz = 300.5f, bool voltage = true, bool input = true)
{
    ignoreUnused(kHerz, voltage, input);
    return{};
}
/*
 10)
 */
unsigned int drumbox(unsigned int kick = 20, int snare = 4, int hihat = 16)
{
    ignoreUnused(kick, snare, hihat);
    return{};
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto band = getBandMembers(1, 1, 'G');
    //2)
    auto hand = getHand(5, 27, 'T');   
    //3)
    auto team = getTeam(5, 1, 50000);
    //4)
    auto computer = getComputerName(2, 1234, 'M');
    //5)
    auto weather = getWeather(4, 15.5f, 7);
    //6)
    auto flanger = getFlanger(1, 60, 8.2);
    //7)
    auto amplifier = getClassAmp(5.5f, 6, 'N');
    //8)
    auto delay = getDelay(1500, 3, 8.5);
    //9)
    auto filter = getFilter(300.5f, 500, 1);
    //10)
    auto sequence = drumbox(20, 8, 16);
    
    ignoreUnused(carRented, band, hand, team, computer, weather, flanger, amplifier, delay, filter, sequence);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
