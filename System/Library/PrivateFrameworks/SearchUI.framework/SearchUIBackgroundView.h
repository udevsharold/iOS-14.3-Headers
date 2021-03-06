/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SearchUIBackgroundView : UIView {

	BOOL _shouldUseInsetRoundedSections;
	BOOL _inPreviewPlatter;
	UIView* _platterView;

}

@property (retain) UIView * platterView;                                                   //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                           //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (assign,getter=isInPreviewPlatter,nonatomic) BOOL inPreviewPlatter;              //@synthesize inPreviewPlatter=_inPreviewPlatter - In the implementation block
-(void)setPlatterView:(UIView *)arg1 ;
-(id)init;
-(UIView *)platterView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(BOOL)isInPreviewPlatter;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setInPreviewPlatter:(BOOL)arg1 ;
@end

