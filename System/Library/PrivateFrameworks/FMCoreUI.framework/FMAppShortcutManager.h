/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMAppShortcutManager : NSObject

@property (readonly) BOOL hasShortcutItems; 
+(id)sharedInstance;
-(void)setShortcutItems:(id)arg1 ;
-(void)setShortcutItem:(id)arg1 ;
-(id)createShortcutForItem:(id)arg1 ;
-(BOOL)hasShortcutItems;
-(void)removeShortcutItemWithIentifier:(id)arg1 ;
-(void)clearShortcutItems;
@end

