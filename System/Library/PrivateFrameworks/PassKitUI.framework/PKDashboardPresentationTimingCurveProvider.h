/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UITimingCurveProvider.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@interface PKDashboardPresentationTimingCurveProvider : NSObject <UITimingCurveProvider> {

	double _fractionComplete;
	unsigned long long _type;

}

@property (assign,nonatomic) double fractionComplete;                                          //@synthesize fractionComplete=_fractionComplete - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long timingCurveType; 
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
@property (nonatomic,readonly) UISpringTimingParameters * springTimingParameters; 
-(void)setFractionComplete:(double)arg1 ;
-(double)fractionComplete;
-(UICubicTimingParameters *)cubicTimingParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(UISpringTimingParameters *)springTimingParameters;
-(long long)timingCurveType;
-(void)encodeWithCoder:(id)arg1 ;
@end
