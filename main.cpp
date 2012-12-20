#include "splay.h"
#include <iostream>

int main(int argc, char* argv[])
{
	splay* root = NULL;
	KEY_TYPE vector[] = {9,8,7,6,5,4,3,2,1,0};
//	int vector[] = {15};
	const int length = sizeof(vector)/sizeof(int);
	int i;
	for(i = 0; i< length;i++)
		root = Insert(vector[i], root);
	
	std::cout<<"\nInOrder: \n";
	InOrder(root);

	KEY_TYPE input;
	char type;
		
	while(1)
	{
		std::cout<<"\nplease input type(S(s)/D(d)/I(i)) and key of the node you want to do with the tree(in a (type key) tuple): ";
		std::cin>>type>>input;
		switch(type)
		{
			case 'S':
			case 's':
				root = Search(input, root);
				std::cout<<"\nAfter Search "<<input<<std::endl;
				InOrder(root);
				break;
			case 'I':
			case 'i':
				root = Insert(input, root);
				std::cout<<"\nAfter Insert: "<<input<<std::endl;
				InOrder(root);
				break;
			case 'D':
			case 'd':
				root = Delete(input, root);
				std::cout<<"\nAfter Delete: "<<input<<std::endl;		
				InOrder(root);
				break;
			default:
				std::cout<<"\nInvalid type! type could only be s/S, i/I, d/D.\n";
		}
	}
	std::cout<<"\n";
	return 0;
}
