/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SXCollectionLayout : NSObject {

	double _spaceBetweenRows;
	NSArray* _rowsLayouts;

}

@property (assign,nonatomic) double spaceBetweenRows;              //@synthesize spaceBetweenRows=_spaceBetweenRows - In the implementation block
@property (nonatomic,retain) NSArray * rowsLayouts;                //@synthesize rowsLayouts=_rowsLayouts - In the implementation block
-(id)description;
-(NSArray *)rowsLayouts;
-(double)spaceBetweenRows;
-(void)setSpaceBetweenRows:(double)arg1 ;
-(void)setRowsLayouts:(NSArray *)arg1 ;
@end
