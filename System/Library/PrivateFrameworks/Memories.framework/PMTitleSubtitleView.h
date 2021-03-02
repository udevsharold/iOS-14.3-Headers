/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSString, NSLayoutConstraint, UIViewController, PXTitleSubtitleUILabel, UIView, PXExtendedTraitCollection;

@interface PMTitleSubtitleView : UIView <PXChangeObserver> {

	CGPoint _ptOffset;
	double _titleScale;
	NSString* _titleFontName;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _leftConstraint;
	UIViewController* _viewController;
	PXTitleSubtitleUILabel* _label;
	UIView* _dark;
	PXExtendedTraitCollection* _extendedTraitCollection;
	CGRect _specSize;

}

@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                            //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftConstraint;                              //@synthesize leftConstraint=_leftConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                         //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) PXTitleSubtitleUILabel * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * dark;                                                    //@synthesize dark=_dark - In the implementation block
@property (nonatomic,retain) PXExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (assign,nonatomic) CGRect specSize;                                                  //@synthesize specSize=_specSize - In the implementation block
@property (assign,nonatomic) double titleScale;                                                //@synthesize titleScale=_titleScale - In the implementation block
@property (assign,nonatomic) CGPoint ptOffset; 
@property (nonatomic,readonly) double heightOfTitleArea; 
@property (nonatomic,retain) NSString * titleFontName;                                         //@synthesize titleFontName=_titleFontName - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * subtitleText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExtendedTraitCollection:(PXExtendedTraitCollection *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(NSString *)subtitleText;
-(UIView *)dark;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setTitleFontName:(NSString *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDark:(UIView *)arg1 ;
-(NSString *)titleFontName;
-(void)layoutSubviews;
-(NSString *)titleText;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabel:(PXTitleSubtitleUILabel *)arg1 ;
-(PXTitleSubtitleUILabel *)label;
-(UIViewController *)viewController;
-(NSLayoutConstraint *)leftConstraint;
-(void)setLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(double)toolbarHeight;
-(void)registerForChangesFromViewController:(id)arg1 ;
-(double)heightOfTitleArea;
-(void)setTitleScale:(double)arg1 ;
-(double)titleScale;
-(void)updateTitleAnimationFromVideoComposition:(id)arg1 ;
-(void)setPtOffset:(CGPoint)arg1 ;
-(void)updateSubtitleTitleLabelForSize:(CGSize)arg1 ;
-(CGPoint)ptOffset;
-(void)updateSpecIfNeeded;
-(void)updateDarkFrame;
-(CGRect)specSize;
-(void)setSpecSize:(CGRect)arg1 ;
-(void)updateFeatureSpecWithExtendedTraitCollection:(id)arg1 ;
-(void)updateSpecialConstraints;
-(void)setSpecForVerticalExport;
@end
