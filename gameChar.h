//Struct of character stats information
struct charStats{
    
    //Physics characteristics
    double weight;
    double gravity;
    
    //Grounded horizontal movement characteristics
    double initialDashSpeed;
    double maxDashSpeed;
    double dashAcceleration;
    double runAcceleration;

    double intialWalkSpeed;
    double maxWalkSpeed;
    double walkAcceleration;
    double friction;

    //Aerial horizontal movement characteristics
    double maxAirSpeed;
    double airAcceleration;

    //Aerial vertical movement characteristics
    double jumpAcceleration;
    double doublejumpAcceleration;
    double maxFallSpeed;
    double fastFallAcceleration;
    double maxFastFallSpeed;

    //Frame data
    uint8 landingLag;
    uint8 jumpSquat;
    uint8 dashLength;

    //Aerial data
    uint8 nairLLag;
    uint8 fairLLag;
    uint8 bairLLag;
    uint8 uairLLag;
    uint8 dairLLag;
    
      };

//Read character stats and return a struct of said stats 
struct charStats loadChar(char charText[]);
