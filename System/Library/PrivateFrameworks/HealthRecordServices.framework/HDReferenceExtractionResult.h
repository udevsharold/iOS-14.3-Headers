/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL;

@interface HDReferenceExtractionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _completeResources;
	NSArray* _incompleteResources;
	NSArray* _unresolvableReferences;
	NSURL* _nextSearchResultURL;

}

@property (nonatomic,copy,readonly) NSArray * completeResources;                   //@synthesize completeResources=_completeResources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incompleteResources;                 //@synthesize incompleteResources=_incompleteResources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unresolvableReferences;              //@synthesize unresolvableReferences=_unresolvableReferences - In the implementation block
@property (nonatomic,copy,readonly) NSURL * nextSearchResultURL;                   //@synthesize nextSearchResultURL=_nextSearchResultURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCompleteResources:(id)arg1 incompleteResources:(id)arg2 unresolvableReferences:(id)arg3 nextSearchResultURL:(id)arg4 ;
-(NSArray *)completeResources;
-(NSArray *)incompleteResources;
-(NSArray *)unresolvableReferences;
-(NSURL *)nextSearchResultURL;
@end
