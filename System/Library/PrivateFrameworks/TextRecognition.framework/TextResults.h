/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray;

@interface TextResults : NSObject {

	NSArray* _cols;
	NSMutableArray* _mutableCols;

}

@property (nonatomic,retain) NSMutableArray * mutableCols;              //@synthesize mutableCols=_mutableCols - In the implementation block
@property (nonatomic,retain) NSArray * cols;                            //@synthesize cols=_cols - In the implementation block
@property (readonly) unsigned long long colCount; 
-(void)addColumn:(id)arg1 ;
-(NSArray *)cols;
-(id)init;
-(unsigned long long)colCount;
-(void)setCols:(NSArray *)arg1 ;
-(void)sortCols;
-(id)transcriptionOfPath:(id)arg1 tokenProcessingBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableCols;
-(void)setMutableCols:(NSMutableArray *)arg1 ;
@end

