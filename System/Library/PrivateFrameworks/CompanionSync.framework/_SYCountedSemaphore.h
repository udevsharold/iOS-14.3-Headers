/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SYCountedSemaphore : NSObject {

	AI _sem_port;
	Ai _count;
	Ai _signals;
	AB _invalidated;

}
-(BOOL)waitWithTimeout:(double)arg1 ;
-(id)init;
-(id)initWithCount:(long long)arg1 ;
-(void)signal;
-(void)invalidate;
-(BOOL)_waitSemaphoreWithTimeout:(double)arg1 ;
-(void)_signalSemaphore;
-(void)_ensureSemaphore;
@end
