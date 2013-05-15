//
//  Utils.cpp
//  SoulStone
//
//  Created by 易 文植 on 3/18/13.
//
//

#include "Utils.h"

USING_NS_CC;

void Utils::removeStringFromArray(CCArray* array, CCString* str) {
    int size = array->count();
    for (int i = 0; i < size; i++) {
        CCString* s = (CCString*)array->objectAtIndex(i);
        if (Utils::compareString(s, str)) {
            array->removeObject(s);
            break;
        }
    }
}

bool Utils::compareString(CCString* str1, CCString* str2) {
    return strcmp(str1->getCString(), str2->getCString()) == 0;
}

CCArray* Utils::getPetTypes() {
    return CCArray::createWithContentsOfFileThreadSafe("pet_types.plist");
}

CCAnimation* Utils::createAnimation(const char *animName) {
    return NULL;
}