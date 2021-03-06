/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIFaceDetector.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIFaceDetectorVision : HMFObject <HMIFaceDetector, HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)releaseCachedResources;
+(id)detectFacesInImageData:(id)arg1 error:(id*)arg2 ;
+(id)detectFacesInPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
@end

