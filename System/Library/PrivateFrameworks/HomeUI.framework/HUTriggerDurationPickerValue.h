/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HUTriggerDurationPickerValue : NSObject {

	NSNumber* _duration;

}

@property (nonatomic,readonly) NSNumber * duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasDuration; 
+(id)valueWithDuration:(double)arg1 ;
+(id)valueWithNoDuration;
-(BOOL)hasDuration;
-(id)init;
-(id)initWithDuration:(id)arg1 ;
-(NSNumber *)duration;
@end

