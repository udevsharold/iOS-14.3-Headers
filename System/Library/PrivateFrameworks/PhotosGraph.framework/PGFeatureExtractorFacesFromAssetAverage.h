/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFacesFromAssetFeatureExtractor.h>

@class MAFeatureExtractor, NSString;

@interface PGFeatureExtractorFacesFromAssetAverage : PGFacesFromAssetFeatureExtractor {

	MAFeatureExtractor* _faceFeatureExtractor;
	NSString* _name;

}

@property (readonly) MAFeatureExtractor * faceFeatureExtractor;              //@synthesize faceFeatureExtractor=_faceFeatureExtractor - In the implementation block
@property (readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
-(id)featureNames;
-(NSString *)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)initWithFaceFeatureExtractor:(id)arg1 name:(id)arg2 ;
-(id)floatVectorWithFaces:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 underlyingError:(id)arg4 ;
-(MAFeatureExtractor *)faceFeatureExtractor;
@end

