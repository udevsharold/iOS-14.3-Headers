/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardEmojiSplit.h>

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit {

	BOOL _whiteText;
	unsigned long long _currentSelected;
	long long _lastUsedCategory;

}

@property (assign) BOOL whiteText;              //@synthesize whiteText=_whiteText - In the implementation block
-(void)setRenderConfig:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)updateToCategory:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(id)symbolForRow:(long long)arg1 ;
-(void)updateCategorySelectedIndicator:(long long)arg1 ;
-(id)titleForRow:(long long)arg1 fallback:(BOOL)arg2 ;
-(void)setWhiteText:(BOOL)arg1 ;
-(BOOL)whiteText;
-(void)didMoveToWindow;
@end
