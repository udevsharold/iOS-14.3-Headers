/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface STCandyBarView : UIView {

	BOOL _useVibrancy;
	NSArray* _usageItems;
	NSArray* _viewItems;

}

@property (readonly) BOOL useVibrancy;                        //@synthesize useVibrancy=_useVibrancy - In the implementation block
@property (nonatomic,copy) NSArray * viewItems;               //@synthesize viewItems=_viewItems - In the implementation block
@property (nonatomic,copy) NSArray * usageItems;              //@synthesize usageItems=_usageItems - In the implementation block
-(void)updateConstraints;
-(id)initWithVibrancy:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateSectionViewImages;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)capImageWithHeight:(double)arg1 leadingLineCap:(int)arg2 trailingLineCap:(int)arg3 ;
-(NSArray *)viewItems;
-(NSArray *)usageItems;
-(void)layoutSubviews;
-(void)setUsageItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewItems:(NSArray *)arg1 ;
-(void)setUsageItems:(NSArray *)arg1 ;
-(BOOL)useVibrancy;
@end

