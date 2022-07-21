//! before changes
// int main(int argc, char* argv[]) { // What is the type of argv?
// int i = 5;
// // The & operator here gets the address of i and stores it into pi
// int* pi = &i;
// // The * operator here dereferences pi and stores the value -- 5 --
// // into j.
// int j = *pi;
// char c[] = "6.172";
// char* pc = c; // Valid assignment: c acts like a pointer to c[0] here.
// char d = *pc;
// printf("char d = %c\n", d); // What does this print?
// // compound types are read right to left in C.
// // pcp is a pointer to a pointer to a char, meaning that
// // pcp stores the address of a char pointer.
// char** pcp;
// pcp = argv; // Why is this assignment valid?
// const char* pcc = c; // pcc is a pointer to char constant
// char const* pcc2 = c; // What is the type of pcc2?
// // For each of the following, why is the assignment:
// *pcc = ’7’; // invalid?
// pcc = *pcp; // valid?
// pcc = argv[0]; // valid?
// char* const cp = c; // cp is a const pointer to char
// // For each of the following, why is the assignment:
// cp = *pcp; // invalid?
// cp = *argv; // invalid?
// *cp = ’!’; // valid?
// const char* const cpc = c; // cpc is a const pointer to char const
// // For each of the following, why is the assignment:
// cpc = *pcp; // invalid?
// cpc = argv[0]; // invalid?
// *cpc = ’@’; // invalid?
// return 0;
// }


//! after changes
int main(int argc, char* argv[]) { // What is the type of argv?
int i = 5;
// The & operator here gets the address of i and stores it into pi
int* pi = &i;
// The * operator here dereferences pi and stores the value -- 5 --
// into j.
int j = *pi;

char c[] = "6.172";
char* pc = c; // Valid assignment: c acts like a pointer to c[0] here.
char d = *pc;
printf("char d = %c\n", d); // What does this print? //? 6
// compound types are read right to left in C.
// pcp is a pointer to a pointer to a char, meaning that
// pcp stores the address of a char pointer.
char** pcp;
pcp = argv; // Why is this assignment valid?   //? because argv is an arr
const char* pcc = c; // pcc is a pointer to char constant
char const* pcc2 = c; // What is the type of pcc2? //? char*
// For each of the following, why is the assignment:
*pcc = ’7’; // invalid? //? because pcc is const variable that cant cange the value
pcc = *pcp; // valid? //? we can change the address
pcc = argv[0]; // valid? // ?we can change the address
char* const cp = c; // cp is a const pointer to char
// For each of the following, why is the assignment:
cp = *pcp; // invalid? //? cant change the address
cp = *argv; // invalid? //? cant change the address
*cp = ’!’; // valid? //? can change the value
const char* const cpc = c; // cpc is a const pointer to char const
// For each of the following, why is the assignment:
cpc = *pcp; // invalid? //? cant change the address
cpc = argv[0]; // invalid? //? cant change the value
*cpc = ’@’; // invalid? //? cant change the address
return 0;
}