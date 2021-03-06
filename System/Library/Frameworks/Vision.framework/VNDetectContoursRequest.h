/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@interface VNDetectContoursRequest : VNImageBasedRequest

@property (assign,nonatomic) BOOL forceUseInputCVPixelBufferDirectly; 
@property (assign,nonatomic) BOOL inHierarchy; 
@property (assign,nonatomic) float contrastAdjustment; 
@property (assign,nonatomic) BOOL detectsDarkOnLight; 
@property (assign,nonatomic) BOOL detectDarkOnLight; 
@property (assign,nonatomic) unsigned long long maximumImageDimension; 
+(Class)configurationClass;
-(float)contrastAdjustment;
-(void)setContrastAdjustment:(float)arg1 ;
-(BOOL)detectsDarkOnLight;
-(void)setDetectsDarkOnLight:(BOOL)arg1 ;
-(unsigned long long)maximumImageDimension;
-(void)setMaximumImageDimension:(unsigned long long)arg1 ;
-(BOOL)inHierarchy;
-(void)setInHierarchy:(BOOL)arg1 ;
-(BOOL)forceUseInputCVPixelBufferDirectly;
-(BOOL)detectDarkOnLight;
-(void)setForceUseInputCVPixelBufferDirectly:(BOOL)arg1 ;
-(void)setDetectDarkOnLight:(BOOL)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
@end

