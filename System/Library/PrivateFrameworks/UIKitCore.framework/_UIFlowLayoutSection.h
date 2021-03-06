/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet, NSMutableArray, _UIFlowLayoutInfo, NSArray;

@interface _UIFlowLayoutSection : NSObject {

	BOOL _isValid;
	CGRect _validRect;
	CGRect _rectToKeepValid;
	NSMutableSet* _invalidatedIndexPaths;
	BOOL _fixedItemSize;
	BOOL _lastRowIncomplete;
	NSMutableArray* _items;
	NSMutableArray* _rows;
	double _verticalInterstice;
	double _horizontalInterstice;
	double _headerDimension;
	double _footerDimension;
	_UIFlowLayoutInfo* _layoutInfo;
	double _otherMargin;
	double _beginMargin;
	double _endMargin;
	double _actualGap;
	double _lastRowBeginMargin;
	double _lastRowEndMargin;
	double _lastRowActualGap;
	long long _itemsCount;
	long long _itemsByRowCount;
	long long _indexOfIncompleteRow;
	SCD_Struct_UI46 _rowAlignmentOptions;
	CGSize _itemSize;
	NSRange _validItemRange;
	UIEdgeInsets _sectionMargins;
	CGRect _frame;
	CGRect _headerFrame;
	CGRect _footerFrame;

}

@property (nonatomic,readonly) NSMutableArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rows;                                             //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) double verticalInterstice;                                           //@synthesize verticalInterstice=_verticalInterstice - In the implementation block
@property (assign,nonatomic) double horizontalInterstice;                                         //@synthesize horizontalInterstice=_horizontalInterstice - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionMargins;                                         //@synthesize sectionMargins=_sectionMargins - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                        //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect headerFrame;                                                  //@synthesize headerFrame=_headerFrame - In the implementation block
@property (assign,nonatomic) CGRect footerFrame;                                                  //@synthesize footerFrame=_footerFrame - In the implementation block
@property (nonatomic,readonly) double headerDimension;                                            //@synthesize headerDimension=_headerDimension - In the implementation block
@property (nonatomic,readonly) double footerDimension;                                            //@synthesize footerDimension=_footerDimension - In the implementation block
@property (nonatomic,readonly) CGRect effectiveHeaderFrameWithSectionMarginsApplied; 
@property (nonatomic,readonly) CGRect effectiveFooterFrameWithSectionMarginsApplied; 
@property (assign,nonatomic,__weak) _UIFlowLayoutInfo * layoutInfo;                               //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI46 rowAlignmentOptions;                                 //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic) BOOL fixedItemSize;                                                  //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                     //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,readonly) double otherMargin;                                                //@synthesize otherMargin=_otherMargin - In the implementation block
@property (nonatomic,readonly) double beginMargin;                                                //@synthesize beginMargin=_beginMargin - In the implementation block
@property (nonatomic,readonly) double endMargin;                                                  //@synthesize endMargin=_endMargin - In the implementation block
@property (nonatomic,readonly) double actualGap;                                                  //@synthesize actualGap=_actualGap - In the implementation block
@property (nonatomic,readonly) double lastRowBeginMargin;                                         //@synthesize lastRowBeginMargin=_lastRowBeginMargin - In the implementation block
@property (nonatomic,readonly) double lastRowEndMargin;                                           //@synthesize lastRowEndMargin=_lastRowEndMargin - In the implementation block
@property (nonatomic,readonly) double lastRowActualGap;                                           //@synthesize lastRowActualGap=_lastRowActualGap - In the implementation block
@property (nonatomic,readonly) BOOL lastRowIncomplete;                                            //@synthesize lastRowIncomplete=_lastRowIncomplete - In the implementation block
@property (assign,nonatomic) long long itemsCount;                                                //@synthesize itemsCount=_itemsCount - In the implementation block
@property (nonatomic,readonly) long long itemsByRowCount;                                         //@synthesize itemsByRowCount=_itemsByRowCount - In the implementation block
@property (nonatomic,readonly) long long indexOfIncompleteRow;                                    //@synthesize indexOfIncompleteRow=_indexOfIncompleteRow - In the implementation block
@property (nonatomic,readonly) NSRange validItemRange;                                            //@synthesize validItemRange=_validItemRange - In the implementation block
@property (nonatomic,readonly) NSArray * invalidatedIndexPaths; 
-(NSMutableArray *)rows;
-(NSRange)validItemRange;
-(NSArray *)invalidatedIndexPaths;
-(_UIFlowLayoutInfo *)layoutInfo;
-(void)setRowAlignmentOptions:(SCD_Struct_UI46)arg1 ;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)logInvalidSizesForHorizontalDirection:(BOOL)arg1 warnAboutDelegateValues:(BOOL)arg2 ;
-(id)snapshot;
-(void)updateEstimatedSizeForSection:(long long)arg1 ;
-(CGRect)frame;
-(id)init;
-(double)verticalInterstice;
-(CGRect)effectiveHeaderFrameWithSectionMarginsApplied;
-(void)computeLayoutInRect:(CGRect)arg1 forSection:(long long)arg2 invalidating:(BOOL)arg3 invalidationContext:(id)arg4 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setHorizontalInterstice:(double)arg1 ;
-(id)addRowAtEnd:(BOOL)arg1 ;
-(double)horizontalInterstice;
-(double)actualGap;
-(double)lastRowEndMargin;
-(long long)indexOfIncompleteRow;
-(void)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3 ;
-(double)lastRowBeginMargin;
-(void)setHeaderFrame:(CGRect)arg1 ;
-(BOOL)lastRowIncomplete;
-(NSMutableArray *)items;
-(CGRect)headerFrame;
-(double)footerDimension;
-(SCD_Struct_UI46)rowAlignmentOptions;
-(void)logInvalidSizes;
-(void)computeLayout;
-(UIEdgeInsets)sectionMargins;
-(void)setFooterFrame:(CGRect)arg1 ;
-(void)setLayoutInfo:(_UIFlowLayoutInfo *)arg1 ;
-(CGRect)effectiveFooterFrameWithSectionMarginsApplied;
-(BOOL)fixedItemSize;
-(CGSize)itemSize;
-(long long)itemsByRowCount;
-(void)computeLayoutValidatingForwardForIndexPath:(id)arg1 ;
-(double)lastRowActualGap;
-(void)setEstimatedSize:(CGSize)arg1 forSection:(long long)arg2 ;
-(long long)estimatedIndexOfItemAtPoint:(CGPoint)arg1 ;
-(void)setHeaderDimension:(double)arg1 forSection:(long long)arg2 ;
-(id)rowsInRect:(CGRect)arg1 ;
-(id)addItem;
-(void)setSectionMargins:(UIEdgeInsets)arg1 ;
-(CGRect)footerFrame;
-(double)otherMargin;
-(void)setVerticalInterstice:(double)arg1 ;
-(void)addInvalidatedIndexPath:(id)arg1 ;
-(id)copyFromLayoutInfo:(id)arg1 ;
-(double)headerDimension;
-(long long)itemsCount;
-(double)beginMargin;
-(void)setFrame:(CGRect)arg1 ;
-(void)setFooterDimension:(double)arg1 forSection:(long long)arg2 ;
-(void)setItemsCount:(long long)arg1 ;
-(void)updateSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 ;
-(double)endMargin;
-(void)setFixedItemSize:(BOOL)arg1 ;
-(void)invalidate;
-(void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3 ;
@end

