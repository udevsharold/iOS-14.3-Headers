/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAContactsAccount.h>

@class NSString;

@interface DAABLegacyAccount : NSObject <DAContactsAccount> {

	void* _account;

}

@property (nonatomic,readonly) void* account;                       //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isContainer;
-(BOOL)isGroup;
-(id)externalIdentifier;
-(void*)account;
-(BOOL)isContact;
-(void)updateSaveRequest:(id)arg1 ;
-(void)dealloc;
-(int)legacyIdentifier;
-(id)initWithABAccout:(void*)arg1 ;
-(id)identifier;
-(void)markForDeletion;
-(BOOL)isAccount;
@end

