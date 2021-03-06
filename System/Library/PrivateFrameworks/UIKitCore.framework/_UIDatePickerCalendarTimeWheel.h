/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UIFont, NSNumberFormatter, UICollectionView, UICollectionViewDiffableDataSource, _UIDatePickerCalendarTimeWheelDisplayModeDriver, _UIDatePickerCalendarTimeSoundDriver, NSString;

@interface _UIDatePickerCalendarTimeWheel : UIControl <UICollectionViewDelegate> {

	long long _expectedRawValue;
	long long _interval;
	long long _selectedValue;
	UIFont* _font;
	NSNumberFormatter* _formatter;
	UICollectionView* _collectionView;
	UICollectionViewDiffableDataSource* _dataSource;
	_UIDatePickerCalendarTimeWheelDisplayModeDriver* _displayModeDriver;
	_UIDatePickerCalendarTimeSoundDriver* _soundDriver;

}

@property (nonatomic,readonly) NSNumberFormatter * formatter;                                                    //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewDiffableDataSource * dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeWheelDisplayModeDriver * displayModeDriver;              //@synthesize displayModeDriver=_displayModeDriver - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeSoundDriver * soundDriver;                               //@synthesize soundDriver=_soundDriver - In the implementation block
@property (nonatomic,readonly) long long interval;                                                               //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode; 
@property (assign,nonatomic) long long selectedValue;                                                            //@synthesize selectedValue=_selectedValue - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                                      //@synthesize font=_font - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)displayMode;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(NSNumberFormatter *)formatter;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)interval;
-(void)_updateDataSource;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)selectedValue;
-(void)setBounds:(CGRect)arg1 ;
-(UICollectionView *)collectionView;
-(UICollectionViewDiffableDataSource *)dataSource;
-(id)initWithInterval:(long long)arg1 formatter:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setSelectedValue:(long long)arg1 ;
-(_UIDatePickerCalendarTimeSoundDriver *)soundDriver;
-(void)_updatePaging;
-(void)setFrame:(CGRect)arg1 ;
-(void)_updateCellForDisplayMode:(id)arg1 ;
-(void)_createHierarchy;
-(void)_createDataSource;
-(void)_updateSelection;
-(void)_performWithoutChangingSelection:(/*^block*/id)arg1 ;
-(id)_createLayout;
-(void)_updateSelectedValue:(long long)arg1 fromExtern:(BOOL)arg2 ;
-(id)_itemAtCenter;
-(_UIDatePickerCalendarTimeWheelDisplayModeDriver *)displayModeDriver;
-(BOOL)_updateContentOffset:(id)arg1 ;
-(void)_setSelectedRawValue:(long long)arg1 notify:(BOOL)arg2 ;
-(id)_itemForContentOffset:(CGPoint)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGPoint)_contentOffsetForProposedContentOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 inScrollView:(id)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
@end

