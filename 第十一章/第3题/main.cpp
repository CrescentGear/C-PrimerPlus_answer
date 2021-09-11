#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
#include <fstream>

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int n;
    double max_step=0;
    double min_step=0;
    double sum_step=0;
    //ofstream outfile;
    //outfile.open("temp.txt");
    std::cout << "Enter the n:" << endl;
    std::cin >> n;
    std::cout << "Enter terget distance (q to quit): ";
    std::cin >> target;
    std::cout << "Enter step length: ";
    std::cin >> dstep;
    for(int i=0;i<n;i++)
    { 
            //outfile << "Target Distance:" << target <<", Step Size:"<<dstep<<endl;
            while (result.magval() < target)
            {
               // outfile << steps << ":" << result<<endl;
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }
        
        /*
        outfile << steps << ":" << result << endl;
       
        outfile << "After " << steps << " steps, the subject "
            "has the following location:\n";
        outfile << result << endl;
        result.polar_mode();
        outfile << " or\n" << result << endl;
        outfile << "Average outward distance per step = "
            << result.magval() / steps << endl;
*/
        if (i==0)
        {
            max_step = steps;
            min_step = steps;
        }
        if (steps>max_step)
        {
            max_step = steps;
        }
         if (steps<min_step)
        {
             min_step = steps;
        }
         sum_step += steps;
        steps = 0;
        result.reset(0.0, 0.0);
    }  
    std::cout << "Max steps:" << max_step<<endl;
    std::cout << "Min steps:" << min_step << endl;
    std::cout << "Average steps:" << sum_step / n<<endl;

    std::cout << "Bye!\n";
    std::cin.clear();
    while (std::cin.get() != '\n')
        continue;
    return 0;
}
