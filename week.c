//print integer value of day of week using enum.

#include<stdio.h>
enum week
{
	sun,mon=30,tue,wed,thu,fri,sat
};
main()
{
	enum week w;
	w=tue;
	printf("%d",w);
}
