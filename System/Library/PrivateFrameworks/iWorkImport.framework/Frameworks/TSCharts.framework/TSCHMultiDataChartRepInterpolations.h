/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface TSCHMultiDataChartRepInterpolations : NSObject {

	CAMediaTimingFunction* mOverallTimingFunction;
	CAMediaTimingFunction* mIndividualTimingFunction;

}

@property (nonatomic,readonly) CAMediaTimingFunction * overall; 
@property (nonatomic,readonly) CAMediaTimingFunction * individual; 
+(id)interpolationsWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2 ;
-(CAMediaTimingFunction *)overall;
-(id)initWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2 ;
-(CAMediaTimingFunction *)individual;
@end
