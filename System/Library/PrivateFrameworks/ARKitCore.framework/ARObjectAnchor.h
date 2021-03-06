/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARAnchor.h>

@class ARReferenceObject;

@interface ARObjectAnchor : ARAnchor {

	ARReferenceObject* _referenceObject;

}

@property (nonatomic,readonly) ARReferenceObject * referenceObject;              //@synthesize referenceObject=_referenceObject - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithAnchor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)name;
-(BOOL)isTracked;
-(ARReferenceObject *)referenceObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithReferenceObject:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
@end

