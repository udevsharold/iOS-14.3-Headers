/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PCSLockManager;

@interface PCSLockAssertion : NSObject {

	BOOL _held;
	NSString* _name;
	PCSLockManager* _manager;

}

@property (retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (retain) PCSLockManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (assign) BOOL held;                             //@synthesize held=_held - In the implementation block
-(void)setManager:(PCSLockManager *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)held;
-(void)dealloc;
-(PCSLockManager *)manager;
-(void)dropAssertion;
-(NSString *)name;
-(void)setHeld:(BOOL)arg1 ;
-(id)initAssertion:(id)arg1 manager:(id)arg2 ;
-(BOOL)holdAssertion;
@end

