/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, UIColor;

@interface STUsageReportGraphSegment : NSObject {

	NSNumber* _amount;
	double _amountAsPercentageOfDataPointTotal;
	UIColor* _color;

}

@property (nonatomic,copy) NSNumber * amount;                                        //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) double amountAsPercentageOfDataPointTotal;              //@synthesize amountAsPercentageOfDataPointTotal=_amountAsPercentageOfDataPointTotal - In the implementation block
@property (nonatomic,retain) UIColor * color;                                        //@synthesize color=_color - In the implementation block
-(void)setColor:(UIColor *)arg1 ;
-(UIColor *)color;
-(NSNumber *)amount;
-(void)setAmount:(NSNumber *)arg1 ;
-(double)amountAsPercentageOfDataPointTotal;
-(id)initWithAmount:(id)arg1 amountAsPercentageOfDataPointTotal:(double)arg2 color:(id)arg3 ;
-(void)setAmountAsPercentageOfDataPointTotal:(double)arg1 ;
@end

