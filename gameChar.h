struct unionStruct{
    enum{is_uint8, is_double, is_char} type;
    union {
        uint8 ival;
        double dval;
        char cval;
    } val;
}

//Struct of character stats information
struct charStats{
    unionStruct charData[22];

    /*Prototyping of every character trait
     *
     *
     * Physics characteristics
     * double weight;
     * double gravity;
    
     * Grounded horizontal movement characteristics
     * double maxAirSpeed;
     * double maxDashSpeed;
     * double dashAcceleration;
     * double runAcceleration;
     * double walkSpeed;
     * double maxWalkSpeed;
     * double friction;

     * Aerial horizontal movement characteristics
     * double maxAirSpeed;
     * double airAcceleration;

     * Aerial vertical movement characteristics
     * double jumpAcceleration;
     * double doublejumpAcceleration;
     * double maxFallSpeed;

     * Frame data
     * uint8 landingLag;
     * uint8 jumpSquat;
     * uint8 dashLength;

     * Aerial data
     * uint8 nairLLag;
     * uint8 fairLLag;
     * uint8 bairLLag;
     * uint8 uairLLag;
     * uint8 dairLLag;
    */

    /* Present Damon speaking to future Damon, maybe an array
     * of doubles would be a better method of handling this information
     * but for now this is how I feel like conceptualizing. This may be
     * and probably will be changed in the future
     * 
     * Also making this an array later will be better because I'll be able
     * to iterate through in when using loadChar. Really thinking I should
     * just make all this information in an array. Hmmmmmmm
    */
      };

//Read character stats and return a struct of said stats 
struct charStatStruct loadChar(char charText[]);
