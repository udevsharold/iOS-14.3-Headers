/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FxCustomParameterInterpolation.h>

@interface PAEHueCurveChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {

	void* _curve_private;

}
+(id)channelDataWithCurve:(const hue_t<double>*)arg1 ;
-(id)init;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(double)evaluate:(double)arg1 ;
-(id)initWithCurve:(const hue_t<double>*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(hue_t<double>*)curveRef;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(BOOL)isAtDefaults;
@end
