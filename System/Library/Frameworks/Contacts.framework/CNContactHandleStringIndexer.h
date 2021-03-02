/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNCache, NSArray, NSDictionary;

@interface CNContactHandleStringIndexer : NSObject {

	CNCache* _indexImpl;
	NSArray* _targetHandleStrings;

}

@property (nonatomic,readonly) CNCache * indexImpl;                        //@synthesize indexImpl=_indexImpl - In the implementation block
@property (nonatomic,readonly) NSArray * targetHandleStrings;              //@synthesize targetHandleStrings=_targetHandleStrings - In the implementation block
@property (nonatomic,readonly) NSDictionary * index; 
+(id)indexByMatchingIndexWithRawHandles:(id)arg1 toTargetHandleStrings:(id)arg2 ;
-(id)init;
-(NSDictionary *)index;
-(id)description;
-(CNCache *)indexImpl;
-(void)indexContact:(id)arg1 ;
-(void)indexContacts:(id)arg1 ;
-(id)initWithTargetHandleStrings:(id)arg1 ;
-(id)indexWithRawHandles;
-(void)indexEmailAddressesOnContact:(id)arg1 ;
-(void)indexPhoneNumbersOnContact:(id)arg1 ;
-(NSArray *)targetHandleStrings;
@end
