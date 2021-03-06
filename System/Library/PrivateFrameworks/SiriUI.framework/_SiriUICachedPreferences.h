/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface _SiriUICachedPreferences : NSObject {

	NSUserDefaults* _textInputDefaults;
	BOOL _textInputEnabled;
	BOOL _HTTForTextInputEnabled;
	BOOL _siriMiniIsEnabled;
	BOOL _streamingDictationIsEnabled;
	BOOL _siriSafeForLockScreen;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updatePreferences;
-(BOOL)isTextInputEnabled;
-(BOOL)isHTTForTextInputEnabled;
-(BOOL)isSiriMiniEnabled;
-(BOOL)isStreamingDictationEnabled;
-(BOOL)isSiriSafeForLockScreen;
-(void)_setSiriSafeForLockScreen:(BOOL)arg1 ;
@end

