/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GPURawCounter/GPURawCounter.h>

@class NSString;

@interface _GPURawCounter : NSObject <GPURawCounter> {

	NSString* _name;
	NSString* _description;
	unsigned long long _counterValueType;

}

@property (copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * description;                      //@synthesize description=_description - In the implementation block
@property (readonly) unsigned long long counterValueType;              //@synthesize counterValueType=_counterValueType - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(unsigned long long)counterValueType;
-(id)initWithName:(id)arg1 description:(id)arg2 valueType:(unsigned long long)arg3 ;
@end
