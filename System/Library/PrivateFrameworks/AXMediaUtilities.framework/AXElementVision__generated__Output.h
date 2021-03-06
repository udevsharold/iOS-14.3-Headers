/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface AXElementVision__generated__Output : NSObject <MLFeatureProvider> {

	MLMultiArray* _confidence;
	MLMultiArray* _coordinates;

}

@property (nonatomic,retain) MLMultiArray * confidence;               //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) MLMultiArray * coordinates;              //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(MLMultiArray *)confidence;
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(MLMultiArray *)coordinates;
-(id)initWithConfidence:(id)arg1 coordinates:(id)arg2 ;
-(void)setCoordinates:(MLMultiArray *)arg1 ;
-(void)setConfidence:(MLMultiArray *)arg1 ;
@end

