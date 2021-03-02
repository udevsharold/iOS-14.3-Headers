/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/WFGlyphPickerTabBarDelegate.h>

@protocol WFGlyphPickerDelegate;
@class UISegmentedControl, UICollectionView, UICollectionViewFlowLayout, NSArray, WFGlyphPickerTabBar, NSString;

@interface WFGlyphPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource, WFGlyphPickerTabBarDelegate> {

	BOOL _useOutlineGlyphsOnly;
	unsigned short _selectedGlyphCharacter;
	id<WFGlyphPickerDelegate> _delegate;
	UISegmentedControl* _segmentedControl;
	double _glyphDimension;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSArray* _glyphSections;
	long long _control;
	WFGlyphPickerTabBar* _tabBar;
	UIEdgeInsets _sectionInset;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,copy) NSArray * glyphSections;                                                 //@synthesize glyphSections=_glyphSections - In the implementation block
@property (assign,nonatomic) long long control;                                                     //@synthesize control=_control - In the implementation block
@property (assign,nonatomic,__weak) WFGlyphPickerTabBar * tabBar;                                   //@synthesize tabBar=_tabBar - In the implementation block
@property (assign,nonatomic) BOOL useOutlineGlyphsOnly;                                             //@synthesize useOutlineGlyphsOnly=_useOutlineGlyphsOnly - In the implementation block
@property (assign,nonatomic,__weak) id<WFGlyphPickerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned short selectedGlyphCharacter;                                 //@synthesize selectedGlyphCharacter=_selectedGlyphCharacter - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                                 //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                                             //@synthesize sectionInset=_sectionInset - In the implementation block
@property (assign,nonatomic) double glyphDimension;                                                 //@synthesize glyphDimension=_glyphDimension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)numberOfSections;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(WFGlyphPickerTabBar *)tabBar;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(double)glyphDimension;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)control;
-(void)setTabBar:(WFGlyphPickerTabBar *)arg1 ;
-(UIEdgeInsets)sectionInset;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(void)safeAreaInsetsDidChange;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setDelegate:(id<WFGlyphPickerDelegate>)arg1 ;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(id<WFGlyphPickerDelegate>)delegate;
-(void)setControl:(long long)arg1 ;
-(void)glyphPickerTabBar:(id)arg1 didSelectTabAtIndex:(unsigned long long)arg2 ;
-(id)initWithControl:(long long)arg1 glyphDimension:(double)arg2 sectionInset:(UIEdgeInsets)arg3 ;
-(id)initWithControl:(long long)arg1 glyphDimension:(double)arg2 sectionInset:(UIEdgeInsets)arg3 useSystemGlyphsOnly:(BOOL)arg4 useOutlineGlyphsOnly:(BOOL)arg5 ;
-(void)setSelectedGlyphCharacter:(unsigned short)arg1 ;
-(unsigned short)glyphCharacterAtIndexPath:(id)arg1 ;
-(id)indexPathForGlyphCharacter:(unsigned short)arg1 ;
-(void)pickedSegment:(id)arg1 ;
-(void)scrollToSection:(long long)arg1 ;
-(unsigned short)selectedGlyphCharacter;
-(void)setGlyphDimension:(double)arg1 ;
-(NSArray *)glyphSections;
-(void)setGlyphSections:(NSArray *)arg1 ;
-(BOOL)useOutlineGlyphsOnly;
-(void)setUseOutlineGlyphsOnly:(BOOL)arg1 ;
@end
