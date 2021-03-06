/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCHChartGridAdapter.h>

@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter {

	BOOL mCountFromOne;
	unsigned long long mIndexFactor;

}

@property (assign,nonatomic) BOOL countFromOne; 
@property (assign,nonatomic) unsigned long long indexFactor; 
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)countFromOne;
-(void)setCountFromOne:(BOOL)arg1 ;
-(unsigned long long)indexFactor;
-(void)setIndexFactor:(unsigned long long)arg1 ;
@end

