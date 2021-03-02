/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding> {

	char _pushEnvironment;
	NSString* _topicString;
	NSString* _qualifierString;

}

@property (nonatomic,readonly) NSString * topicString;                  //@synthesize topicString=_topicString - In the implementation block
@property (nonatomic,readonly) NSString * qualifierString;              //@synthesize qualifierString=_qualifierString - In the implementation block
@property (nonatomic,readonly) char pushEnvironment;                    //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(char)pushEnvironment;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTopic:(id)arg1 qualifier:(id)arg2 pushEnvironment:(char)arg3 ;
-(BOOL)isEqualToRegistration:(id)arg1 ;
-(NSString *)topicString;
-(NSString *)qualifierString;
@end
