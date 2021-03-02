/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString;

@interface _BlastDoorLPAppleNewsMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _source;
	NSString* _title;

}

@property (nonatomic,copy) NSString * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * title;               //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
@end
