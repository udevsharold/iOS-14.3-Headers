/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class PPSourceMetadata, NSDate, NSArray, NSString, NSSet;

@interface PPSource : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	PPSourceMetadata* _metadata;
	NSDate* _relevanceDate;
	NSArray* _contactHandles;
	NSString* _language;
	NSString* _bundleId;
	NSString* _groupId;
	NSString* _documentId;
	NSDate* _date;

}

@property (nonatomic,readonly) PPSourceMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDate * relevanceDate;                   //@synthesize relevanceDate=_relevanceDate - In the implementation block
@property (nonatomic,readonly) NSString * language;                      //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSArray * contactHandles;                 //@synthesize contactHandles=_contactHandles - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                      //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * groupId;                       //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) NSString * documentId;                    //@synthesize documentId=_documentId - In the implementation block
@property (nonatomic,readonly) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(NSArray *)contactHandles;
-(PPSourceMetadata *)metadata;
-(BOOL)isEqualToSource:(id)arg1 ;
-(id)sha256;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4 ;
-(NSDate *)date;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4 relevanceDate:(id)arg5 contactHandles:(id)arg6 language:(id)arg7 metadata:(id)arg8 ;
-(NSString *)groupId;
-(NSString *)documentId;
-(NSDate *)relevanceDate;
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
@end
