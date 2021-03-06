/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNDetectHorizonRequest;

@interface AXMHorizonDetectorNode : AXMEvaluationNode {

	VNDetectHorizonRequest* __detectHorizonRequest;

}

@property (setter=_setDetectHorizonRequest:,nonatomic,retain) VNDetectHorizonRequest * _detectHorizonRequest;              //@synthesize _detectHorizonRequest=__detectHorizonRequest - In the implementation block
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(VNDetectHorizonRequest *)_detectHorizonRequest;
-(void)_setDetectHorizonRequest:(id)arg1 ;
-(BOOL)requiresVisionFramework;
-(void)encodeWithCoder:(id)arg1 ;
@end

