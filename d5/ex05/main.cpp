#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "CentralBureaucracy.hpp"
#include "RobotomyRequestForm.hpp"
#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include <iostream>

// int main()
// {
//     Intern idiotOne;
//     std::string s = "Pigley";
//     Bureaucrat b("Destroyer", 100);
//     Bureaucrat c("Destroyer", 123);
//     OfficeBlock ob;
//     ob.setIntern(idiotOne);
//     ob.setSigner(c);
//     ob.setExecutor(b);
//     try
//     {
//         ob.doBureaucracy("mutant pig termination", s);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
// }


int main()
{
	CentralBureaucracy theEmpire;

    try{
    Bureaucrat a("Arnold", 3);
	Bureaucrat b("Bruce", 17);
	Bureaucrat c("Carol", 3);
	Bureaucrat d("Daemon", 40);

	theEmpire.feedBureaucracy(b, c);
	theEmpire.feedBureaucracy(d, a);
	theEmpire.feedBureaucracy(c, a);
	theEmpire.feedBureaucracy(b, c);


	theEmpire.queueUp("t1");
	theEmpire.queueUp("t2");
	theEmpire.queueUp("t3");
	theEmpire.queueUp("t4");
	theEmpire.queueUp("t5");
    theEmpire.queueUp("t1");
	theEmpire.queueUp("t2");
	theEmpire.queueUp("t3");
	theEmpire.queueUp("t4");
	theEmpire.queueUp("t5");
	theEmpire.doBureaucracy();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
	return 0;
}
