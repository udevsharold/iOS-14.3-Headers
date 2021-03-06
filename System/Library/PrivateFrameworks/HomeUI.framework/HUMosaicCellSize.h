/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HUMosaicCellSize : NSObject {

	unsigned long long _sizeDescription;
	unsigned long long _numRows;
	unsigned long long _numCols;

}

@property (assign,nonatomic) unsigned long long sizeDescription;              //@synthesize sizeDescription=_sizeDescription - In the implementation block
@property (assign,nonatomic) unsigned long long numRows;                      //@synthesize numRows=_numRows - In the implementation block
@property (assign,nonatomic) unsigned long long numCols;                      //@synthesize numCols=_numCols - In the implementation block
+(id)createMosaicCellSizeForSizeDescription:(unsigned long long)arg1 ;
-(unsigned long long)sizeDescription;
-(void)setSizeDescription:(unsigned long long)arg1 ;
-(unsigned long long)numRows;
-(unsigned long long)numCols;
-(void)setNumCols:(unsigned long long)arg1 ;
-(void)setNumRows:(unsigned long long)arg1 ;
@end

