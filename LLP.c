#include stdio.h
#include stdlib.h

struct nodeType create a structure representing the linked list node
{
	struct student_data s;
	struct nodeType next;
};

struct nodeType Head,Tail; pointers to the first and last nodes in the list
int length=0; the length of the list initially equals zero

void insertAtFirst(struct student_data ss) function to insert at first
{
	struct nodeType newNode = (struct nodeType) malloc(sizeof(struct nodeType)); dynamic allocation of a single block of memory with the size of our node
	inserting the data in the node
	newNode-s.student_ID=ss.student_ID;
    strcpy(newNode-s.student_name,ss.student_name);
    newNode-s.student_birth_day=ss.student_birth_day;
    newNode-s.student_birth_month=ss.student_birth_month;
    newNode-s.student_birth_year=ss.student_birth_year;
    newNode-s.student_lastyear_score=ss.student_lastyear_score;
	
	
	
	if (length == 0) if it is the first node to be added in the list
	{
		Head = Tail = newNode;
		newNode-next = NULL;
	}
	else insert at first
	{
		newNode-next = Head;
		Head = newNode;
	}
	length++;
}
void printLinkedlist() function to print the list
{
    struct nodeType temp = Head;  temp pointer that will traverse the list printing the data in each node
	while (temp != NULL)
	{
		printf( Id is %d n, temp-s.student_ID);
        printf( Name is %s n, temp-s.student_name);
        printf( Birth day is %d n, temp-s.student_birth_day);
        printf( Birth month is %d n, temp-s.student_birth_month);
        printf( Birth year is %d n, temp-s.student_birth_year);
        printf( Score is %d n, temp-s.student_lastyear_score);
	
		temp = temp-next;
	}
}

void insertAtEnd(struct student_data ss) function to insert at end
{   
	struct nodeType newNode = (struct nodeType) malloc(sizeof(struct nodeType)); dynamic allocation of a single block of memory with the size of our node
	inserting the data in the node
	newNode-s.student_ID=ss.student_ID;
    strcpy(newNode-s.student_name,ss.student_name);
    newNode-s.student_birth_day=ss.student_birth_day;
    newNode-s.student_birth_month=ss.student_birth_month;
    newNode-s.student_birth_year=ss.student_birth_year;
    newNode-s.student_lastyear_score=ss.student_lastyear_score;
	
	if (length == 0) if it is the first node to be added in the list
	{
		Head = Tail = newNode;
		newNode-next = NULL;
	}
	else insert at end
	{
		Tail-next = newNode;
		newNode-next = NULL;
		Tail = newNode;
	}
	length++;
}

insertAtPosition(int pos, struct student_data ss) function to insert at any position
{
	if (pos  0  pos  length) pos is the position you want to insert at
		printf( ERORR n);
	else
	{
		struct nodeType newNode = (struct nodeType) malloc(sizeof(struct nodeType)); dynamic allocation of a single block of memory with the size of our node
	    inserting the data in the node
	    newNode-s.student_ID=ss.student_ID;
        strcpy(newNode-s.student_name,ss.student_name);
        newNode-s.student_birth_day=ss.student_birth_day;
        newNode-s.student_birth_month=ss.student_birth_month;
        newNode-s.student_birth_year=ss.student_birth_year;
        newNode-s.student_lastyear_score=ss.student_lastyear_score;
        
		if (pos == 0) insert at first
			insertAtFirst(ss);
		else if (pos == length) insert at end;
			insertAtEnd(ss);
		else
		{
			struct nodeType temp = Head;
			for (int k = 1; k  pos; k++)
				temp = temp-next;

			newNode-next = temp-next;
		    temp-next = newNode;
			length++;
		}

	}
}
int main()
{  }