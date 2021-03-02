/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>

@class NSString, REFeatureSet, NSArray;

@interface _RECrossedFeature : REFeature {

	NSString* _name;
	unsigned long long _featureType;
	unsigned long long _bitCount;
	REFeatureSet* _dependentFeatures;
	unsigned long long _hash;
	NSArray* _features;

}

@property (nonatomic,readonly) NSArray * features;              //@synthesize features=_features - In the implementation block
-(id)initWithFeatures:(id)arg1 ;
-(NSArray *)features;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)featureType;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)name;
-(long long)_bitCount;
-(id)_rootFeatures;
-(id)_dependentFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
-(void)_computeHash;
-(void)_updateFeaturesArray;
@end
