/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock;

@interface AALoginContextTransientStorage : NSObject {

	BOOL _hasBeenCleared;
	NSLock* _clearLock;

}
+(id)sharedStorage;
-(void)save:(id)arg1 ;
-(void)clear;
-(id)init;
-(void)_saveNonsensitiveParameters:(id)arg1 ;
-(void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3 ;
-(id)_readNonsensitiveParameters;
-(id)_keychainItemForUsername:(id)arg1 service:(id)arg2 ;
-(void)_deleteKeychainItemForUsername:(id)arg1 service:(id)arg2 ;
-(id)storedContext;
@end

