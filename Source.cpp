#include "Interface.h"
#include "BPlusTree.h"
#include <iostream>
using namespace std;

int main()
{
	Interface obj;
	obj.useTrees();
	system("pause");
	return 0;
}
//int main()
//{
//	BPlusTree<string> B2(5);
//	BTree<string> B1(4);
//	string ID = "State";
//	B2.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_1.csv",ID);
//	//B2.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_2.csv",ID);
//	/*B1.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_3.csv",ID);
//	B1.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_4.csv",ID);
//	B1.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_5.csv",ID);
//	B1.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_6.csv", ID);
//	B1.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_7.csv", ID);
//	B1.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_8.csv", ID);
//	B1.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_9.csv", ID);
//	B1.BuildTree("../Resources/OriginalFiles/NCHS_-_Leading_Causes_of_Death__United_States_10.csv", ID);
//	B1.searchKey("New York");
//	B1.searchKey("New York","All causes");
//	B1.searchKey("New York","Unintentional injuries");*/
//	//B2.searchKey("New York","Virginia");
//	//B2.searchKey("New York",","West Virginia","Alzheimer's disease");
//	//cout<<endl<<endl<<endl;
//	//B1.UpdateKey("Alaska","Year","2016","3000");
//	//B2.UpdateKey("Alabama","West Virginia","Cause Name","Alzheimer's disease","WHAT THE FAST");
//	//B2.searchKey("Alabama","West Virginia");
//	//B2.searchKey("Alabama","West Virginia","Cause Name","Unintentional injuries");
//	system("pause");
//	return 0;
//}