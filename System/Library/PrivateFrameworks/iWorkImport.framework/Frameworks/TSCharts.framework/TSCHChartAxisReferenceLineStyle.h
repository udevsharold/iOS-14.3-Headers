/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCHChartAxisID, NSArray;

@interface TSCHChartAxisReferenceLineStyle : NSObject {

	TSCHChartAxisID* mAxisIdentifier;
	NSArray* mReferenceLineStyles;

}

@property (nonatomic,copy) TSCHChartAxisID * axisIdentifier; 
@property (nonatomic,copy) NSArray * referenceLineStyles; 
-(void)didInitFromSOS;
-(TSCHChartAxisID *)axisIdentifier;
-(void)setAxisIdentifier:(TSCHChartAxisID *)arg1 ;
-(NSArray *)referenceLineStyles;
-(void)setReferenceLineStyles:(NSArray *)arg1 ;
@end

