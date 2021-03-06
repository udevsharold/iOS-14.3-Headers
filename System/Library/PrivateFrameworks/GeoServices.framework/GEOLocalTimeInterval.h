/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocalTimeInterval : NSObject <NSSecureCoding> {

	double _startTime;
	double _endTime;

}

@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)endTime;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(id)initWithLocalTimeRange:(GEOPDLocalTimeRange*)arg1 ;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(void)setEndTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

