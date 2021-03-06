/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKQueryAnchor, NSDictionary;

@interface HDConceptIndexManagerState : NSObject <NSSecureCoding, NSCopying> {

	long long _generation;
	HKQueryAnchor* _anchor;
	NSDictionary* _deletionAnchors;

}

@property (nonatomic,readonly) long long generation;                             //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy,readonly) HKQueryAnchor * anchor;                      //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * deletionAnchors;              //@synthesize deletionAnchors=_deletionAnchors - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stateWithGeneration:(long long)arg1 ;
-(HKQueryAnchor *)anchor;
-(long long)generation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithGeneration:(long long)arg1 anchor:(id)arg2 deletionAnchors:(id)arg3 ;
-(id)copyWithAnchor:(id)arg1 ;
-(id)copyWithDeletionAnchor:(id)arg1 forSampleType:(id)arg2 ;
-(NSDictionary *)deletionAnchors;
@end

