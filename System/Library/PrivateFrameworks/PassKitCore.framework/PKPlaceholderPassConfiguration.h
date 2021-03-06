/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAppletSubcredential, PKPassAutomaticSelectionCriterion, NSArray;

@interface PKPlaceholderPassConfiguration : NSObject <NSSecureCoding> {

	PKAppletSubcredential* _subcredential;
	PKPassAutomaticSelectionCriterion* _automaticSelectionCriterion;
	long long _paymentApplicationState;
	NSArray* _associatedApplicationIdentifiers;
	NSArray* _passFields;

}

@property (nonatomic,readonly) PKAppletSubcredential * subcredential;                                        //@synthesize subcredential=_subcredential - In the implementation block
@property (nonatomic,readonly) PKPassAutomaticSelectionCriterion * automaticSelectionCriterion;              //@synthesize automaticSelectionCriterion=_automaticSelectionCriterion - In the implementation block
@property (nonatomic,readonly) long long paymentApplicationState;                                            //@synthesize paymentApplicationState=_paymentApplicationState - In the implementation block
@property (nonatomic,copy) NSArray * associatedApplicationIdentifiers;                                       //@synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * passFields;                                                             //@synthesize passFields=_passFields - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)passFields;
-(NSArray *)associatedApplicationIdentifiers;
-(PKAppletSubcredential *)subcredential;
-(PKPassAutomaticSelectionCriterion *)automaticSelectionCriterion;
-(long long)paymentApplicationState;
-(void)setPassFields:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSubcredential:(id)arg1 automaticSelectionCriterion:(id)arg2 ;
-(id)description;
-(void)setAssociatedApplicationIdentifiers:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

