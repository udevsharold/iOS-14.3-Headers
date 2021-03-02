/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MAFeatureExtractor : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * featureNames; 
-(NSArray *)featureNames;
-(NSString *)name;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)defaultFloatVectorWithError:(id*)arg1 ;
-(id)featureVectorsWithEntities:(id)arg1 entityLabels:(id)arg2 error:(id*)arg3 ;
-(id)featureVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)floatMatrixWithEntities:(id)arg1 error:(id*)arg2 ;
@end
