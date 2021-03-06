/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class NSArray, NSString;

@interface ARPersonDetectionData : NSObject <ARResultData> {

	double _timestamp;
	NSArray* _detectedObjects;

}

@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSArray * detectedObjects;               //@synthesize detectedObjects=_detectedObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)description;
-(void)setDetectedObjects:(NSArray *)arg1 ;
-(id)mergeOverlappingDetectionsWithThreshold:(float)arg1 ;
-(NSArray *)detectedObjects;
-(id)transformToCVPixelBuffer:(CVBufferRef)arg1 depthBuffer:(CVBufferRef)arg2 ;
@end

