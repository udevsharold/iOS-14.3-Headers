/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPermissivePolicy.h>

@class NSDictionary;

@interface CNDictionaryPolicy : CNPermissivePolicy {

	NSDictionary* _policyDictionary;

}
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(BOOL)isContactPropertySupported:(id)arg1 ;
-(id)contactRestrictionsForLabeledProperty:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
@end
