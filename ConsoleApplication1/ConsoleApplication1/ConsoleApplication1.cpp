#include <stdio.h>
#include "stdafx.h"
#include "person.h"
#include "author.h"
#include "edition.h"
#include "book.h"
#include "textbook.h"
#include "journal.h"
#include "publhouse.h"
#include "locale" 
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"rus");
edition a;
a.setpub();
a.set_edition();
author b;
b.setname();
b.author_set();
book as;
as.book_set_name();
as.book_circulation();
as.book_set();
journal x;
x.book_set_name();
x.book_circulation();

textbook c;
c.dat;
cout<<"*******************************************************"<<endl;
a.getpub();
a.get_edition();
b.getname();
b.author_get();
as.book_get_name();
as.book_get();
cout<<"������: "<<endl;
x.book_get_name();
cout<<"�������: "<<endl;
c.get_textname();
c.dat->getDate_In();
cout<<"*******************************************************"<<endl;
	return 0;
	
}

