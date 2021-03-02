/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSSecureCoding;
@class NSNumber;

@interface WFGranularAccessResourcePerWorkflowStateEntry : NSObject <NSSecureCoding> {

	id<NSObject><NSSecureCoding> _value;
	NSNumber* _authorized;

}

@property (nonatomic,readonly) id<NSObject><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSNumber * authorized;                           //@synthesize authorized=_authorized - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)valueKey;
+(Class)valueTypeClass;
-(id<NSObject><NSSecureCoding>)value;
-(NSNumber *)authorized;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(id)arg1 authorized:(id)arg2 ;
-(id)entryBySettingAuthorized:(BOOL)arg1 ;
@end
