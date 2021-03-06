/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHHapticPatternPlayer <NSObject>
@property (assign) BOOL isMuted; 
@required
-(BOOL)isMuted;
-(BOOL)startAtTime:(double)arg1 error:(id*)arg2;
-(BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2;
-(void)setIsMuted:(BOOL)arg1;
-(BOOL)cancelAndReturnError:(id*)arg1;
-(BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3;

@end

