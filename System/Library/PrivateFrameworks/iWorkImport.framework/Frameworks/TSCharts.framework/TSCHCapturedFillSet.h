/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCHFillSet.h>

@class NSArray;

@interface TSCHCapturedFillSet : TSCHFillSet {

	int _numberOfThemeSeriesStyles;
	NSArray* _seriesStyles;

}
+(id)capturedFillSetWithIdentifier:(id)arg1 seriesStyles:(id)arg2 numberOfThemeSeriesStyles:(unsigned long long)arg3 ;
-(unsigned long long)countOfDefinedSeriesForSeriesType:(id)arg1 ;
-(id)fillForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 context:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 seriesStyles:(id)arg2 numberOfThemeSeriesStyles:(unsigned long long)arg3 ;
@end

