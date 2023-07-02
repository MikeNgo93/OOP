class MerkelMain
{
    public:
        MerkelMain();

        /**Call this to start the simulation*/
        void init();
        void printMenu();
        void printHelp();
        void printMarketStats();
        void makeOffer();
        void makeBid();
        void viewWallet();
        void continueNextFrame();
        int getUserOption();
        void processUserOption(int userOption);
};