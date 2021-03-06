/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableDescription.h>

@class NSDictionary, NSArray;

@interface INRootCodableDescription : INCodableDescription {

	NSDictionary* _referencedCodableDescriptionsByClassName;
	NSArray* _referencedCodableDescriptions;

}

@property (setter=_setReferencedCodableDescriptions:,nonatomic,retain) NSArray * referencedCodableDescriptions;              //@synthesize referencedCodableDescriptions=_referencedCodableDescriptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * _referencedCodableDescriptionsByClassName;                                     //@synthesize referencedCodableDescriptionsByClassName=_referencedCodableDescriptionsByClassName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)_referencedCodableDescriptionsByClassName;
-(void)_setReferencedCodableDescriptions:(id)arg1 ;
-(void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 ;
-(void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 ;
-(NSArray *)referencedCodableDescriptions;
-(void)encodeWithCoder:(id)arg1 ;
@end

