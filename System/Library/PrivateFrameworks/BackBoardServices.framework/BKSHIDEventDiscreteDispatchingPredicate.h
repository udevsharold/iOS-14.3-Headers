/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSString;

@interface BKSHIDEventDiscreteDispatchingPredicate : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSSet* _senderDescriptors;
	NSSet* _descriptors;

}

@property (nonatomic,copy,readonly) NSSet * senderDescriptors;              //@synthesize senderDescriptors=_senderDescriptors - In the implementation block
@property (nonatomic,copy,readonly) NSSet * descriptors;                    //@synthesize descriptors=_descriptors - In the implementation block
@property (nonatomic,copy,readonly) NSSet * displays; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSSet *)displays;
-(NSSet *)descriptors;
-(BOOL)containsDescriptor:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)senderDescriptors;
-(id)_initWithSourceDescriptors:(id)arg1 descriptors:(id)arg2 ;
-(BOOL)specifiesDescriptor:(id)arg1 ;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
@end

