#include <string>
    
using namespace std;
            
class BMI {
    public:
        BMI();
        void getBMI();
        float setBMI(int height, int weight);
        string BMICat(float setBMI);
    private:
        int height;
        int weight;
};
