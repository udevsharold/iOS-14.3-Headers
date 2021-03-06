/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNMultiValueUpdate.h>

@class NSOrderedSet;

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate {

	NSOrderedSet* _values;

}

@property (nonatomic,copy,readonly) NSOrderedSet * values;              //@synthesize values=_values - In the implementation block
-(NSOrderedSet *)values;
-(long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2 ;
-(id)initWithValues:(id)arg1 ;
-(id)description;
-(void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(BOOL)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 logger:(id)arg4 error:(id*)arg5 ;
@end

