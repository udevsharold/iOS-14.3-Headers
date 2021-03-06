/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TRINamespaceStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _lastFetchWasSuccess;
	unsigned _compatibilityVersion;
	NSString* _namespaceName;
	NSDate* _lastFetchAttempt;

}

@property (nonatomic,readonly) NSString * namespaceName;                   //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) unsigned compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchAttempt;                  //@synthesize lastFetchAttempt=_lastFetchAttempt - In the implementation block
@property (nonatomic,readonly) BOOL lastFetchWasSuccess;                   //@synthesize lastFetchWasSuccess=_lastFetchWasSuccess - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)statusWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 lastFetchAttempt:(id)arg3 lastFetchWasSuccess:(BOOL)arg4 ;
+(id)statusFromData:(id)arg1 ;
-(BOOL)isEqualToStatus:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyWithReplacementCompatibilityVersion:(unsigned)arg1 ;
-(id)copyWithReplacementNamespaceName:(id)arg1 ;
-(id)copyWithReplacementLastFetchAttempt:(id)arg1 ;
-(id)initWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 lastFetchAttempt:(id)arg3 lastFetchWasSuccess:(BOOL)arg4 ;
-(id)copyWithReplacementLastFetchWasSuccess:(BOOL)arg1 ;
-(NSString *)namespaceName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)asData;
-(unsigned)compatibilityVersion;
-(BOOL)lastFetchWasSuccess;
-(NSDate *)lastFetchAttempt;
-(void)encodeWithCoder:(id)arg1 ;
@end

