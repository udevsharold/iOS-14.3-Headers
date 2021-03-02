/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSString;

@interface HKStackedCategoryValueSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	long long _pointStyle;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	CGPoint _start;
	CGPoint _end;

}

@property (nonatomic,readonly) CGPoint start;                                              //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) CGPoint end;                                                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long pointStyle;                                       //@synthesize pointStyle=_pointStyle - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(NSString *)description;
-(CGPoint)start;
-(CGPoint)end;
-(long long)pointStyle;
-(id)initWithStart:(CGPoint)arg1 end:(CGPoint)arg2 pointStyle:(long long)arg3 userInfo:(id)arg4 ;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
@end
