/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIFaceUtilities : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)serializeJSONObject:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveFaceClassifications:(id)arg1 videoId:(id)arg2 fragmentId:(unsigned long long)arg3 frameId:(id)arg4 baseURL:(id)arg5 error:(id*)arg6 ;
+(id)faceObservationsFromFaceprintsForClustering:(id)arg1 ;
+(id)faceObservationFromFaceprint:(id)arg1 ;
+(CGRect)estimatePersonBoundingBoxFromFaceBoundingBox:(CGRect)arg1 ;
+(id)eventsWithPersonsAndFacesMergedFromEvents:(id)arg1 ;
@end

