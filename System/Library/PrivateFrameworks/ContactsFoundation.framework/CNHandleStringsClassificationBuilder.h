/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject {

	NSMutableArray* _emailAddresses;
	NSMutableArray* _phoneNumbers;
	NSMutableArray* _unknown;

}

@property (nonatomic,retain) NSMutableArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSMutableArray * phoneNumbers;                //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSMutableArray * unknown;                     //@synthesize unknown=_unknown - In the implementation block
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(id)build;
-(id)init;
-(NSMutableArray *)phoneNumbers;
-(NSMutableArray *)emailAddresses;
-(NSMutableArray *)unknown;
-(void)addPhoneNumber:(id)arg1 ;
-(void)addEmailAddress:(id)arg1 ;
-(void)setPhoneNumbers:(NSMutableArray *)arg1 ;
-(void)addUnknown:(id)arg1 ;
-(void)setUnknown:(NSMutableArray *)arg1 ;
@end

