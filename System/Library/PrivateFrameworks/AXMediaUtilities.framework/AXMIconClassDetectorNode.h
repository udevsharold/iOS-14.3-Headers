/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMMobileAssetEvaluationNode.h>

@class iconclassification__generated__;

@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode

@property (nonatomic,readonly) iconclassification__generated__ * mlModel; 
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(id)_localizedClassForClass:(id)arg1 ;
-(id)modelResourceNames;
-(id)mlModelClasses;
-(id)mobileAssetType;
-(unsigned long long)minSupportedFormatVersion;
-(unsigned long long)maxSupportedFormatVersion;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
@end
