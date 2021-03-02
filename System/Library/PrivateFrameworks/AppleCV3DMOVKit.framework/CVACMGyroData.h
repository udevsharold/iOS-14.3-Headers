/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CVACLMotionTypeVector3;

@interface CVACMGyroData : NSObject <NSSecureCoding> {

	float _temperature;
	CVACLMotionTypeVector3* _rotationRate;
	double _timestamp;
	unsigned long long _syncTimestamp;

}

@property (nonatomic,retain) CVACLMotionTypeVector3 * rotationRate;              //@synthesize rotationRate=_rotationRate - In the implementation block
@property (assign,nonatomic) double timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float temperature;                                  //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) unsigned long long syncTimestamp;                   //@synthesize syncTimestamp=_syncTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTemperature:(float)arg1 ;
-(float)temperature;
-(double)timestamp;
-(id)init;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CVACLMotionTypeVector3 *)rotationRate;
-(id)initWithDictionary:(id)arg1 ;
-(void)setRotationRate:(CVACLMotionTypeVector3 *)arg1 ;
-(id)dictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSyncTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)syncTimestamp;
@end
