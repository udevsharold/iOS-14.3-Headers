/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACardDAV/DAContact.h>

@class NSString;

@interface DAABLegacyContact : NSObject <DAContact> {

	void* _person;

}

@property (nonatomic,readonly) void* person;                        //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isContainer;
-(BOOL)isGroup;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)externalIdentifier;
-(void)setETag:(id)arg1 ;
-(BOOL)isContact;
-(void*)person;
-(void)updateSaveRequest:(id)arg1 ;
-(void)dealloc;
-(int)legacyIdentifier;
-(void)markForDeletion;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(BOOL)isAccount;
-(id)eTag;
-(void*)asPerson;
-(id)asContact;
-(id)initWithABPerson:(void*)arg1 ;
@end
