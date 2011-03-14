/*
 *  meielement.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/1/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "meielement.h"
#include "meiattribute.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


MeiElement::MeiElement(string name) {
	this->name = name;	
}

string MeiElement::getName() {
	return name;
}

string MeiElement::getValue() {
	return value;
}

string MeiElement::getTail() {
	return tail;
}

void MeiElement::setValue(string value) {
	this->value = value;
}

vector<MeiAttribute> MeiElement::getAttributes() {
	return attributes;
}

bool MeiElement::hasAttribute(MeiAttribute attribute) {
	for (vector<MeiAttribute>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
		if ((*iter).getName() == attribute.getName()) return true;
	}
	return false;
}

void MeiElement::addAttribute(MeiAttribute attribute) {
	attributes.push_back(attribute);
}

void MeiElement::removeAttribute(string attributeName) {
	vector<MeiAttribute>::iterator iter = attributes.begin();
	while (iter != attributes.end()) {
		if ((*iter).getName() == attributeName) {
			iter = attributes.erase(iter);
		}
		else {
			++iter;
		}
	}
}

vector<MeiElement> MeiElement::getChildren() {
	return children;
}

bool MeiElement::hasChild(MeiElement child) {
	for (vector<MeiElement>::iterator iter = children.begin(); iter != children.end(); ++iter) {
		if (meiCompare((*iter), child)) return true;
	}
	return false;	
}

void MeiElement::addChild(MeiElement child) {
	children.push_back(child);
}

void MeiElement::removeChild(MeiElement child) {
	vector<MeiElement>::iterator iter = children.begin();
	while (iter != children.end()) {
		if (meiCompare((*iter), child)) {
			iter = children.erase(iter);
		}
		else {
			++iter;
		}
	}
}

// Temporarily use this method to compare MeiElements, to be later replaced by an overloaded == operator
bool MeiElement::meiCompare(MeiElement element1, MeiElement element2) {
	if(element1.getName() == element2.getName()) return true;
	else return false;
}

