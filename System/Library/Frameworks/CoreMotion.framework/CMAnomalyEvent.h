/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMAnomalyEvent : NSObject <NSSecureCoding, NSCopying> {

	BOOL _acknowledgement;
	long long _state;
	long long _response;
	long long _resolution;
	double _absoluteTimestamp;
	unsigned long long _identifier;
	long long _sosState;

}

@property (assign,nonatomic) long long response;                                         //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) long long resolution;                                       //@synthesize resolution=_resolution - In the implementation block
@property (assign,getter=isAcknowledgement,nonatomic) BOOL acknowledgement;              //@synthesize acknowledgement=_acknowledgement - In the implementation block
@property (assign,nonatomic) double absoluteTimestamp;                                   //@synthesize absoluteTimestamp=_absoluteTimestamp - In the implementation block
@property (assign,nonatomic) long long sosState;                                         //@synthesize sosState=_sosState - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) unsigned long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long state;                                          //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResolution:(long long)arg1 ;
-(void)setSosState:(long long)arg1 ;
-(NSDate *)timestamp;
-(long long)sosState;
-(void)setAcknowledgement:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAcknowledgement;
-(id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 state:(long long)arg3 response:(long long)arg4 resolution:(long long)arg5 sosState:(long long)arg6 ;
-(id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 state:(long long)arg3 response:(long long)arg4 resolution:(long long)arg5 sosState:(long long)arg6 acknowledgement:(BOOL)arg7 ;
-(NSDate *)date;
-(long long)response;
-(long long)state;
-(void)setResponse:(long long)arg1 ;
-(long long)resolution;
-(id)initWithCoder:(id)arg1 ;
-(void)setAbsoluteTimestamp:(double)arg1 ;
-(unsigned long long)identifier;
-(id)description;
-(double)absoluteTimestamp;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
@end

