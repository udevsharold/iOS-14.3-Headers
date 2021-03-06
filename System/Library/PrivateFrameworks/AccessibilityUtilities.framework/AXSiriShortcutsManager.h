/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, VCVoiceShortcutClient;

@interface AXSiriShortcutsManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _shortcuts;
	NSMutableDictionary* _updateBlocks;
	int _contentProtectionNotifyToken;
	/*^block*/id _siriShortcutsDidChangeBlock;
	VCVoiceShortcutClient* _shortcutClient;

}

@property (nonatomic,retain) VCVoiceShortcutClient * shortcutClient;              //@synthesize shortcutClient=_shortcutClient - In the implementation block
@property (nonatomic,readonly) NSArray * shortcuts; 
@property (nonatomic,copy) id siriShortcutsDidChangeBlock;                        //@synthesize siriShortcutsDidChangeBlock=_siriShortcutsDidChangeBlock - In the implementation block
+(id)sharedManager;
-(void)setShortcutClient:(VCVoiceShortcutClient *)arg1 ;
-(void)handleVoiceShortcutClientDataUpdateNotification:(id)arg1 ;
-(void)_loadShortcuts;
-(VCVoiceShortcutClient *)shortcutClient;
-(id)siriShortcutsDidChangeBlock;
-(void)setSiriShortcutsDidChangeBlock:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)registerShortcutsDidChangeBlock:(/*^block*/id)arg1 ;
-(void)unregisterShortcutsDidChangeBlock:(id)arg1 ;
-(id)shortcutForIdentifier:(id)arg1 ;
-(void)performShortcut:(id)arg1 ;
-(NSArray *)shortcuts;
@end

