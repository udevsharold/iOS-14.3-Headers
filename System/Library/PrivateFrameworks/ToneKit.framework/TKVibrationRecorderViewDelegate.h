/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKVibrationRecorderViewDelegate <NSObject>
@required
-(void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
-(void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
-(void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
-(void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
-(BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
-(void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
-(void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;

@end

