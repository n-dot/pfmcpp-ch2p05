/*
 
 Chapter 2 Part 5 Task:
 User-Defined Types
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */
struct Refrigerator
{
    struct FoodItem
    {
        bool tastesGood = 0;
        double caloricContent = 100.01;
    };

    void consumeFoodItem(FoodItem thefood);
    void discardFoodItem(FoodItem thefood);

    FoodItem potato;
};
/*
 2)
 */
struct BagOfBagsOfBools
{
    struct BagOfBools
    {
        bool oneTruth = 0;
        bool anotherTruth = 1;
        bool aFalsehood = 1;
    };

    BagOfBools firstBag;
    BagOfBools secondBag;
    BagOfBools thirdBag;

    void considerThisBag(BagOfBools thisBag);
    void howGoodAreTheseTwoBags(BagOfBools thisBag,BagOfBools thatBag);
};


/*
 3)
 */

struct GiraffeTickler
{
    int numberOfFeathers = 5;

    struct Giraffe
    {
        double howtall = 100.5;
        int numberOfSpots = 500;
    };

    void tickleGiraffe(Giraffe targetGiraffe);

    Giraffe Tony;
    Giraffe Frank;
    Giraffe Esmerelda;
};

/*
 4)
 */

struct Hand
{
    int numberFingers = 5;
    bool isHandReal = 0;

    struct Finger
    {
        float FingerLength = 4.5f;
    };

    Finger index;
    Finger middle;
    Finger ring;
    Finger pinky;
    Finger thumb;

    void snap(Finger pushingOne, Finger staticOne, double snapForce);
};

/*
 5)
 */
struct Face
{
    struct Eye
    {
        float eyesize = 0.3f;
    };

    struct Nose
    {
        double nosesize = 0.4;
        int numberOfNostrils = 2;
    };

    struct Mouth
    {
        double mouthWidth = 2.1;
        double mouthHeight = 0.2;
    };

    Mouth theMouth;
    Eye leftEye;
    Eye rightEye;
    Nose theNose;

    void smile(Mouth theMouthThatSmiles);
    void wink(Eye leftEye, Eye rightEye);
    void blink(Eye leftEye, Eye rightEye);
};

/*
 6)
 */

struct BoxOfTeeth
{
    int numberOfTeeth;

    struct Tooth
    {
        double toothSize = 0.1;
    };

    Tooth jimsTooth, fredsTooth, janicesTooth, jeffsTooth;

    void ExamineTooth(Tooth thisTooth);
};

/*
 7)
 */
struct DonaldTrump
{
    int numberOfBrains = 0;
    bool isGood = 0;
    bool isTrash = 1;

    struct Demon
    {
        bool isGoodDemon = 0;
    };

    Demon greed;
    Demon trash;
    Demon hate;
    Demon evil;
    Demon envy;
    Demon theVoid;

    void doAnything(Demon motivatingFactor);
};
 

/*
 8)
 */
struct CowBoy
{
    int numberOfHats = 1;

    struct Partner
    {
        bool isHorse = 0;
    };

    struct Horse
    {
        bool isHorse = 1;
    };

    Partner jimbo;
    Partner steve;
    Partner dolores;
    Horse mike;

    void sayHowdy(Partner toThisPartner);
    void sayYeeHaw(Horse onThisHorse);
};

/*
 9)
 */
struct PencilSharpener
{
    double bladeSharpness = 9.999;

    struct Pencil
    {
        double sharpness = 0.1212;
        bool isMechanical = 0;
    };

    void sharpen(Pencil thepencil);

    Pencil ticonderoga;
};
/*
 10)
 */
struct Lobster
{
    struct Pincher
    {
        double strength = 999999.99;
    };

    struct Antenna
    {
        float pointiness = 5.3f;
    };

    Pincher leftPincher;
    Pincher rightPincher;
    Antenna leftAntenna;
    Antenna rightAntenna;

    void doPinch(Pincher thatWhichPinches);
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
