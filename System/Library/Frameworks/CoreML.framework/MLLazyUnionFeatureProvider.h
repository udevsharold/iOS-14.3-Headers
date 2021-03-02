/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@protocol MLFeatureProvider;
@class NSSet;

@interface MLLazyUnionFeatureProvider : NSObject <MLFeatureProvider> {

	id<MLFeatureProvider> _first;
	id<MLFeatureProvider> _second;

}

@property (nonatomic,retain) id<MLFeatureProvider> first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,retain) id<MLFeatureProvider> second;              //@synthesize second=_second - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id<MLFeatureProvider>)second;
-(id<MLFeatureProvider>)first;
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)unionFeatureProvider;
-(void)setFirst:(id<MLFeatureProvider>)arg1 ;
-(id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2 ;
-(void)setSecond:(id<MLFeatureProvider>)arg1 ;
@end
