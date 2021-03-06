/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CalStopwatch : NSObject {

	BOOL _isRunning;
	unsigned long long _lastStartTime;
	unsigned long long _elapsedTime;
	BOOL _hasValidElapsedTime;
	NSMutableDictionary* _events;
	BOOL _usesSignalFlags;

}

@property (assign) BOOL usesSignalFlags;              //@synthesize usesSignalFlags=_usesSignalFlags - In the implementation block
-(double)markEventEnd:(id)arg1 ;
-(id)init;
-(void)setUsesSignalFlags:(BOOL)arg1 ;
-(void)reset;
-(double)markEventSplit:(id)arg1 ;
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(id)description;
-(id)elapsedTimeAsString:(int)arg1 ;
-(BOOL)usesSignalFlags;
-(void)start;
-(unsigned long long)elapsedTimeInNanoseconds;
-(void)markEventStart:(id)arg1 ;
-(void)stop;
@end

