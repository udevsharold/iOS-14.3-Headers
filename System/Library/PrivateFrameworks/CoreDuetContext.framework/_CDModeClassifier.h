/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, ATXModeClassifier;

@interface _CDModeClassifier : NSObject {

	NSUserDefaults* _userDefaults;
	ATXModeClassifier* _modeClassifier;

}

@property (retain) ATXModeClassifier * modeClassifier;              //@synthesize modeClassifier=_modeClassifier - In the implementation block
-(void)_enableFocusModesIfPossible;
-(id)init;
-(void)dealloc;
-(ATXModeClassifier *)modeClassifier;
-(void)setModeClassifier:(ATXModeClassifier *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

