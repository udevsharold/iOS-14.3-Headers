/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarVPNDisconnectView, NSTimer;

@interface _UIStatusBarVPNDisconnectItem : _UIStatusBarItem {

	_UIStatusBarVPNDisconnectView* _disconnectView;
	NSTimer* _slashBeginTimer;

}

@property (nonatomic,retain) _UIStatusBarVPNDisconnectView * disconnectView;              //@synthesize disconnectView=_disconnectView - In the implementation block
@property (nonatomic,retain) NSTimer * slashBeginTimer;                                   //@synthesize slashBeginTimer=_slashBeginTimer - In the implementation block
-(id)dependentEntryKeys;
-(_UIStatusBarVPNDisconnectView *)disconnectView;
-(void)_create_disconnectView;
-(void)setDisconnectView:(_UIStatusBarVPNDisconnectView *)arg1 ;
-(NSTimer *)slashBeginTimer;
-(void)setSlashBeginTimer:(NSTimer *)arg1 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
@end

