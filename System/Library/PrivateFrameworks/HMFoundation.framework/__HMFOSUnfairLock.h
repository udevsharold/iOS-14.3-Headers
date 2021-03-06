/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFUnfairLock.h>

@interface __HMFOSUnfairLock : HMFUnfairLock {

	os_unfair_lock_s _internal;
	unsigned _internalOptions;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)unlock;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)assertOwner;
-(void)lock;
-(void)assertNotOwner;
@end

