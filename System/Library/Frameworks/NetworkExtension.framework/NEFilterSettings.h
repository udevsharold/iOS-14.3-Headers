/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NEFilterSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	NSArray* _rules;
	long long _defaultAction;

}

@property (copy,readonly) NSArray * rules;                 //@synthesize rules=_rules - In the implementation block
@property (readonly) long long defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)rules;
-(id)initWithCoder:(id)arg1 ;
-(long long)defaultAction;
-(id)initWithRules:(id)arg1 defaultAction:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

