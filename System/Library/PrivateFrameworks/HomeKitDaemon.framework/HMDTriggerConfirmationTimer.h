/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFTimer.h>

@class NSUUID;

@interface HMDTriggerConfirmationTimer : HMFTimer {

	NSUUID* _executionSessionID;

}

@property (nonatomic,readonly) NSUUID * executionSessionID;              //@synthesize executionSessionID=_executionSessionID - In the implementation block
-(id)description;
-(id)initWithExecutionSessionID:(id)arg1 timeoutInterval:(double)arg2 ;
-(NSUUID *)executionSessionID;
@end
