/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class VNImageRegistrationSignature;

@interface VNImageAlignmentObservation : VNObservation {

	VNImageRegistrationSignature* _referenceImageSignature;
	VNImageRegistrationSignature* _floatingImageSignature;

}

@property (nonatomic,retain) VNImageRegistrationSignature * referenceImageSignature;              //@synthesize referenceImageSignature=_referenceImageSignature - In the implementation block
@property (nonatomic,retain) VNImageRegistrationSignature * floatingImageSignature;               //@synthesize floatingImageSignature=_floatingImageSignature - In the implementation block
@property (assign,nonatomic) CGAffineTransform alignmentTransform; 
+(BOOL)supportsSecureCoding;
-(CGAffineTransform)alignmentTransform;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAlignmentTransform:(CGAffineTransform)arg1 ;
-(VNImageRegistrationSignature *)referenceImageSignature;
-(void)setReferenceImageSignature:(VNImageRegistrationSignature *)arg1 ;
-(VNImageRegistrationSignature *)floatingImageSignature;
-(void)setFloatingImageSignature:(VNImageRegistrationSignature *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
