/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarFallbackItem : _UIStatusBarItem {

	_UIStatusBarStringView* _label;

}

@property (nonatomic,retain) _UIStatusBarStringView * label;              //@synthesize label=_label - In the implementation block
-(void)_create_label;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)setLabel:(_UIStatusBarStringView *)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarStringView *)label;
@end
