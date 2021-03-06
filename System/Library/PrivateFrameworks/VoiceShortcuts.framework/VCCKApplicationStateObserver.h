/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSDisplayLayoutMonitor;

@interface VCCKApplicationStateObserver : NSObject {

	BOOL _applicationVisible;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}

@property (nonatomic,readonly) FBSDisplayLayoutMonitor * layoutMonitor;                        //@synthesize layoutMonitor=_layoutMonitor - In the implementation block
@property (assign,getter=isApplicationVisible,nonatomic) BOOL applicationVisible;              //@synthesize applicationVisible=_applicationVisible - In the implementation block
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(FBSDisplayLayoutMonitor *)layoutMonitor;
-(BOOL)isApplicationVisible;
-(void)setApplicationVisible:(BOOL)arg1 ;
@end

