/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface VMUDebugTimer : NSObject {

	NSDate* _programStartTime;
	NSDate* _eventStartTime;
	NSString* _eventMessage;

}
+(id)sharedTimer;
+(id)sharedTimerIfCreated;
-(id)init;
-(void)_endEvent;
-(void)stop;
-(void)startWithMessage:(id)arg1 ;
@end

