/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIFontMetrics, NSString;

@interface AXDynamicTypeImageView : UIImageView {

	UIFontMetrics* _fontMetrics;
	NSString* _minimumContentSizeCategory;
	NSString* _maximumContentSizeCategory;

}

@property (nonatomic,retain) UIFontMetrics * fontMetrics;                      //@synthesize fontMetrics=_fontMetrics - In the implementation block
@property (nonatomic,copy) NSString * minimumContentSizeCategory;              //@synthesize minimumContentSizeCategory=_minimumContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * maximumContentSizeCategory;              //@synthesize maximumContentSizeCategory=_maximumContentSizeCategory - In the implementation block
-(void)setMaximumContentSizeCategory:(NSString *)arg1 ;
-(void)_commonInit;
-(id)initWithImage:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIFontMetrics *)fontMetrics;
-(CGSize)_scaledSizeForSize:(CGSize)arg1 ;
-(void)setFontMetrics:(UIFontMetrics *)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(NSString *)minimumContentSizeCategory;
-(NSString *)maximumContentSizeCategory;
-(void)setMinimumContentSizeCategory:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
