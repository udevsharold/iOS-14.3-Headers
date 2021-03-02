/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACardDAV/DAContact.h>

@class CNMutableContact, NSString;

@interface DAContactsContact : NSObject <DAContact> {

	BOOL _markedForDeletion;
	CNMutableContact* _mutableContact;

}

@property (nonatomic,readonly) CNMutableContact * mutableContact;              //@synthesize mutableContact=_mutableContact - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                           //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isContainer;
-(BOOL)isGroup;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)externalIdentifier;
-(id)initWithContact:(id)arg1 ;
-(void)setETag:(id)arg1 ;
-(BOOL)isContact;
-(void)updateSaveRequest:(id)arg1 ;
-(int)legacyIdentifier;
-(void)markForDeletion;
-(CNMutableContact *)mutableContact;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(BOOL)isAccount;
-(BOOL)markedForDeletion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(id)eTag;
-(void*)asPerson;
-(id)asContact;
@end
