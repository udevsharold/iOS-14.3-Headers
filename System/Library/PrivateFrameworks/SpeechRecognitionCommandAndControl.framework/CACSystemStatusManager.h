/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CACSystemStatusManager : NSObject {

	BOOL _isDictationRunning;

}

@property (assign,nonatomic) BOOL isDictationRunning;              //@synthesize isDictationRunning=_isDictationRunning - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)isSystemDictationRunning;
-(void)_systemDictationStatusDidChange:(BOOL)arg1 ;
-(void)setIsDictationRunning:(BOOL)arg1 ;
-(BOOL)isDictationRunning;
@end

