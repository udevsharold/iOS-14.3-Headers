/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class CLPlacemark, PPLocationRecord, NSString, NSSet;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	unsigned short _category;
	CLPlacemark* _placemark;
	PPLocationRecord* _mostRelevantRecord;
	NSString* _clusterIdentifier;

}

@property (nonatomic,readonly) NSString * clusterIdentifier;                       //@synthesize clusterIdentifier=_clusterIdentifier - In the implementation block
@property (nonatomic,readonly) CLPlacemark * placemark;                            //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) unsigned short category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) PPLocationRecord * mostRelevantRecord;              //@synthesize mostRelevantRecord=_mostRelevantRecord - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(id)clusterIdentifierFromPlacemark:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)describeCategory:(unsigned short)arg1 ;
-(unsigned short)category;
-(id)init;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)customizedDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(PPLocationRecord *)mostRelevantRecord;
-(NSString *)clusterIdentifier;
-(CLPlacemark *)placemark;
-(void)encodeWithCoder:(id)arg1 ;
@end
