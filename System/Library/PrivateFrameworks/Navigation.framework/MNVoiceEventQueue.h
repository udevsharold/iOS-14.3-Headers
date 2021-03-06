/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNVoiceEventQueueDelegate;
@class NSMutableArray;

@interface MNVoiceEventQueue : NSObject {

	NSMutableArray* _queue;
	id<MNVoiceEventQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNVoiceEventQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)removeAllEvents;
-(void)addEvent:(id)arg1 ;
-(void)setDelegate:(id<MNVoiceEventQueueDelegate>)arg1 ;
-(id<MNVoiceEventQueueDelegate>)delegate;
-(void)_removeEventsMatching:(id)arg1 includeEventToMatch:(BOOL)arg2 ;
-(BOOL)hasAnotherEvent;
-(id)dequeueNextEvent;
@end

