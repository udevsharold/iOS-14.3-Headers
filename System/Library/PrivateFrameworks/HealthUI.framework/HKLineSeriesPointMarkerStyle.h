/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface HKLineSeriesPointMarkerStyle : NSObject {

	UIColor* _pointColor;
	double _radius;
	long long _pointMarkerStyle;

}

@property (nonatomic,retain) UIColor * pointColor;                    //@synthesize pointColor=_pointColor - In the implementation block
@property (assign,nonatomic) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) long long pointMarkerStyle;              //@synthesize pointMarkerStyle=_pointMarkerStyle - In the implementation block
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(id)initWithColor:(id)arg1 radius:(double)arg2 style:(long long)arg3 ;
-(void)setPointMarkerStyle:(long long)arg1 ;
-(long long)pointMarkerStyle;
-(void)setPointColor:(UIColor *)arg1 ;
-(UIColor *)pointColor;
@end
