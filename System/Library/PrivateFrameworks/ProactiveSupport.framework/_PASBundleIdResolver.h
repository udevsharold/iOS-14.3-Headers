/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {

	NSString* _exePath;
	_PASLock* _lock;

}
-(void)_populateResultWithLockWitness:(id)arg1 ;
-(id)initWithProcessIdentifier:(int)arg1 ;
-(id)bundleIdentifierOrProcessName:(BOOL*)arg1 ;
@end

