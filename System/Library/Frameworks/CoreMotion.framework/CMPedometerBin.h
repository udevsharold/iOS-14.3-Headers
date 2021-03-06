/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMPedometerBin : NSObject <NSSecureCoding> {

	double _valueOut;
	double _begin;
	double _end;
	long long _state;

}

@property (nonatomic,readonly) double valueOut;                   //@synthesize valueOut=_valueOut - In the implementation block
@property (nonatomic,readonly) double begin;                      //@synthesize begin=_begin - In the implementation block
@property (nonatomic,readonly) double lowerQuartile; 
@property (nonatomic,readonly) double center; 
@property (nonatomic,readonly) double upperQuartile; 
@property (nonatomic,readonly) double end;                        //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long state;                   //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)begin;
-(double)center;
-(double)valueOut;
-(void)dealloc;
-(double)upperQuartile;
-(long long)state;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(double)end;
-(double)lowerQuartile;
-(id)initWithValueOut:(double)arg1 begin:(double)arg2 end:(double)arg3 state:(long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

