/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIPreviewInteractionHighlighting.h>

@class UIView, NSString;

@interface _UIPreviewInteractionCustomViewHighlighter : NSObject <_UIPreviewInteractionHighlighting> {

	BOOL _customViewFlipsHorizontalAxis;
	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;                             //@synthesize customView=_customView - In the implementation block
@property (assign,nonatomic) BOOL customViewFlipsHorizontalAxis;              //@synthesize customViewFlipsHorizontalAxis=_customViewFlipsHorizontalAxis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3 ;
-(void)setCustomViewFlipsHorizontalAxis:(BOOL)arg1 ;
-(BOOL)customViewFlipsHorizontalAxis;
-(void)prepareHighlightWithPreviewingContext:(id)arg1 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(UIView *)customView;
@end
