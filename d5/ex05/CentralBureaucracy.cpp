#include "CentralBureaucracy.hpp"
#include <ctime>
#include <iostream>

CentralBureaucracy::CentralBureaucracy() :_count(0), _intern(Intern()){
	return ;
}

CentralBureaucracy::~CentralBureaucracy(){
    this->deleteList();
}


CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &other)
{
	(void)other;
	return *this;
}

	CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy &other) {
        (void)other;
	    return *this;
    }

	CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &other) {
        *this = other;
	    return ;
    }


CentralBureaucracy::CentralBureaucracy(CentralBureaucracy &other){
	*this = other;
	return ;
}


void CentralBureaucracy::feedBureaucracy(Bureaucrat &signer, Bureaucrat &executor){
    if (_count >= 20) {
        throw CentralBureaucracy::ExceptionFull();
    }

	_office[_count].setIntern(_intern);
	_office[_count].setSigner(signer);
	_office[_count].setExecutor(executor);
	_count++;
	
}

void CentralBureaucracy::queueUp(std::string target){
	if (_list == nullptr)
	{
		_list = new t_list;
		_list->next = nullptr;
		_list->target = target;
        return ;
	}
	else {
			t_list *p = _list;
	while(p->next)
		p = p->next;
	p->next = new t_list;
	p->next->next = nullptr;
	p->next->target = target;
	}
}



void CentralBureaucracy::doBureaucracy(){

	std::string types[3] = {"shrubbery", "robotomy", "presidential"};
    int r = std::rand() % 3;
	while(_list)
	{
		std::string type = types[r];
		std::cout <<  _list->target <<  type << std::endl;
        int i;
   		 i = 0;
		while (i < _count)
		{
			srand (time(NULL));
			try
			{
				_office[i].doBureaucracy(type, _list->target);
				i++;
			}
			catch(const std::exception& err)
			{
				std::cerr << err.what() << std::endl;
				i++;
			}
		}
		_list = _list->next;
	}
}

void CentralBureaucracy::deleteList() {
    	while (_list)
	{
		t_list *p = _list;
		_list = _list->next;
		delete p;
	}
	return ;
}