/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMIFaceCrop, HMIFaceprint, NSSet, NSString;

@interface HMIFaceRecognition : HMFObject <HMFLogging, NSSecureCoding> {

	HMIFaceCrop* _faceCrop;
	HMIFaceprint* _faceprint;
	NSSet* _classifications;
	double _faceQualityScore;
	NSSet* _predictedLinkedEntityUUIDs;
	long long _sessionEntityAssignment;

}

@property (readonly) NSSet * predictedLinkedEntityUUIDs;              //@synthesize predictedLinkedEntityUUIDs=_predictedLinkedEntityUUIDs - In the implementation block
@property (readonly) long long sessionEntityAssignment;               //@synthesize sessionEntityAssignment=_sessionEntityAssignment - In the implementation block
@property (readonly) HMIFaceCrop * faceCrop;                          //@synthesize faceCrop=_faceCrop - In the implementation block
@property (readonly) HMIFaceprint * faceprint;                        //@synthesize faceprint=_faceprint - In the implementation block
@property (readonly) NSSet * classifications;                         //@synthesize classifications=_classifications - In the implementation block
@property (readonly) double faceQualityScore;                         //@synthesize faceQualityScore=_faceQualityScore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(HMIFaceCrop *)faceCrop;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)classifications;
-(void)encodeWithCoder:(id)arg1 ;
-(HMIFaceprint *)faceprint;
-(id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4 faceQualityScore:(double)arg5 sessionEntityAssignment:(long long)arg6 ;
-(NSSet *)predictedLinkedEntityUUIDs;
-(double)faceQualityScore;
-(long long)sessionEntityAssignment;
-(id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 ;
-(id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4 ;
@end

