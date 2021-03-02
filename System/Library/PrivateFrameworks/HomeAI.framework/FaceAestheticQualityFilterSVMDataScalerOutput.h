/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface FaceAestheticQualityFilterSVMDataScalerOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _transformed_features;

}

@property (nonatomic,retain) MLMultiArray * transformed_features;              //@synthesize transformed_features=_transformed_features - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithTransformed_features:(id)arg1 ;
-(MLMultiArray *)transformed_features;
-(void)setTransformed_features:(MLMultiArray *)arg1 ;
@end
