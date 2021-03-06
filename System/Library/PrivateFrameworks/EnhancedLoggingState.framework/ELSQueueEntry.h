/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EnhancedLoggingState/EnhancedLoggingState-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ELSQueueEntry : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	BOOL _retry;
	NSString* _type;
	NSString* _typeName;
	NSDictionary* _parameters;
	double _executeAfterDuration;

}

@property (nonatomic,retain) NSString * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * typeName;                      //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) double executeAfterDuration;              //@synthesize executeAfterDuration=_executeAfterDuration - In the implementation block
@property (assign,nonatomic) BOOL retry;                               //@synthesize retry=_retry - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)parameters;
-(BOOL)retry;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(id)description;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)typeName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRetry:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 typeName:(id)arg2 parameters:(id)arg3 executeAfterDuration:(double)arg4 retry:(BOOL)arg5 ;
-(double)executeAfterDuration;
-(void)setExecuteAfterDuration:(double)arg1 ;
@end

