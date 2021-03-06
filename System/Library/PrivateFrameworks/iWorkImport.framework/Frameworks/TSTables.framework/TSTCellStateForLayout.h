/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSTCell, TSWPColumn, TSTLayoutContentCachedKey;

@interface TSTCellStateForLayout : NSObject {

	BOOL mCellPropsRowHeight;
	BOOL mCellWraps;
	BOOL mForDrawing;
	BOOL mInDynamicLayout;
	SCD_Struct_TS57 mModelCellID;
	unsigned mVerticalAlignment;
	int mLayoutCacheFlags;
	TSTCell* mCell;
	SCD_Struct_TS94 mMergedRange;
	TSWPColumn* mWPColumn;
	id mCellContents;
	TSTLayoutContentCachedKey* mKeyVal;
	unsigned long long mPageNumber;
	unsigned long long mPageCount;
	CGSize mMinSize;
	CGSize mMaxSize;
	UIEdgeInsets mPaddingInsets;

}

@property (assign,nonatomic) SCD_Struct_TS57 modelCellID; 
@property (nonatomic,copy) TSTCell * cell; 
@property (assign,nonatomic) SCD_Struct_TS94 mergedRange; 
@property (nonatomic,retain) id cellContents; 
@property (assign,nonatomic) CGSize minSize; 
@property (assign,nonatomic) CGSize maxSize; 
@property (assign,nonatomic) UIEdgeInsets paddingInsets; 
@property (assign,nonatomic) unsigned verticalAlignment; 
@property (assign,nonatomic) BOOL cellPropsRowHeight; 
@property (assign,nonatomic) BOOL cellWraps; 
@property (assign,nonatomic) BOOL forDrawing; 
@property (assign,nonatomic) BOOL inDynamicLayout; 
@property (assign,nonatomic) int layoutCacheFlags; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) TSTLayoutContentCachedKey * keyVal; 
@property (nonatomic,retain) TSWPColumn * wpColumn; 
@property (assign,nonatomic) unsigned long long pageNumber; 
@property (assign,nonatomic) unsigned long long pageCount; 
-(TSTCell *)cell;
-(BOOL)hasContent;
-(id)init;
-(unsigned)verticalAlignment;
-(CGSize)maxSize;
-(void)setCell:(TSTCell *)arg1 ;
-(void)dealloc;
-(CGSize)minSize;
-(void)setPageNumber:(unsigned long long)arg1 ;
-(unsigned long long)pageCount;
-(TSTLayoutContentCachedKey *)keyVal;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setPageCount:(unsigned long long)arg1 ;
-(unsigned long long)pageNumber;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setVerticalAlignment:(unsigned)arg1 ;
-(void)setModelCellID:(SCD_Struct_TS57)arg1 ;
-(void)setCellPropsRowHeight:(BOOL)arg1 ;
-(void)setCellWraps:(BOOL)arg1 ;
-(void)setPaddingInsets:(UIEdgeInsets)arg1 ;
-(void)setForDrawing:(BOOL)arg1 ;
-(void)setMergedRange:(SCD_Struct_TS94)arg1 ;
-(void)setInDynamicLayout:(BOOL)arg1 ;
-(void)setCellContents:(id)arg1 ;
-(void)setLayoutCacheFlags:(int)arg1 ;
-(TSWPColumn *)wpColumn;
-(int)layoutCacheFlags;
-(id)cellContents;
-(SCD_Struct_TS57)modelCellID;
-(BOOL)cellWraps;
-(UIEdgeInsets)paddingInsets;
-(void)setKeyVal:(TSTLayoutContentCachedKey *)arg1 ;
-(void)setWpColumn:(TSWPColumn *)arg1 ;
-(SCD_Struct_TS94)mergedRange;
-(BOOL)cellPropsRowHeight;
-(BOOL)forDrawing;
-(BOOL)inDynamicLayout;
@end

