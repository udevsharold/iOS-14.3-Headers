/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXMLayoutItem : NSObject

@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double top; 
@property (nonatomic,readonly) double bottom; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double left; 
@property (nonatomic,readonly) double right; 
@property (nonatomic,readonly) CGRect normalizedFrame; 
+(CGRect)boundingFrameForItems:(id)arg1 ;
+(CGRect)normalizedBoundingFrameForItems:(id)arg1 ;
-(double)left;
-(BOOL)metric:(long long)arg1 inProximityOfMetric:(long long)arg2 item:(id)arg3 threshold:(double)arg4 ;
-(double)width;
-(double)height;
-(double)top;
-(id)description;
-(double)bottom;
-(double)right;
-(long long)_metricTypeForMetric:(long long)arg1 ;
-(double)_floatValueForMetric:(long long)arg1 ;
-(CGRect)_rectValueForMetric:(long long)arg1 ;
@end

