/*
 *  meielement_test.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/1/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */


#include <gtest/gtest.h>

#include <mei/meielement.h>
#include <mei/meiattribute.h> 


// Test that ana MeiElement exists and the name can be retrieved
TEST(MeiElementTest, NameTest) {
    
	MeiElement element = MeiElement ("note"); 
	ASSERT_EQ("note", element.getName()); 
	
}

//Test that a value can be set to an MeiElement
TEST(MeiElementTest, ValueTest) {
	MeiElement element = MeiElement("note"); 
	element.setValue("3");
	
	ASSERT_EQ("3", element.getValue()); 
}


//Test that an attribute can be added to an MeiElement's attribute list
TEST(MeiElementTest, AttributeTest) {
	MeiElement element = MeiElement ("note"); 
	MeiAttribute attribute = MeiAttribute ("accid","sharp");
	
	vector<MeiAttribute> attr = element.getAttributes(); 
	ASSERT_EQ((unsigned int)0,attr.size()); 
	
	element.addAttribute(attribute);
	attr = element.getAttributes();
	ASSERT_EQ((unsigned int)1,attr.size()); 
		
}
