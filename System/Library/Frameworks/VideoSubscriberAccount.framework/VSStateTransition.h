/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSOptional;

@interface VSStateTransition : NSObject {

	VSOptional* _previousState;
	VSOptional* _triggeringEvent;
	VSOptional* _nextState;

}

@property (nonatomic,retain) VSOptional * previousState;                //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,retain) VSOptional * triggeringEvent;              //@synthesize triggeringEvent=_triggeringEvent - In the implementation block
@property (nonatomic,retain) VSOptional * nextState;                    //@synthesize nextState=_nextState - In the implementation block
-(id)init;
-(VSOptional *)nextState;
-(void)setNextState:(VSOptional *)arg1 ;
-(void)setPreviousState:(VSOptional *)arg1 ;
-(VSOptional *)previousState;
-(VSOptional *)triggeringEvent;
-(void)setTriggeringEvent:(VSOptional *)arg1 ;
@end

