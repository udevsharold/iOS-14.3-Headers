/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@interface RBSProcessIntPredicate : RBSProcessPredicateImpl {

	unsigned long long _identifier;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsRBSXPCSecureCoding;
-(id)processPredicate;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(unsigned long long)arg1 ;
@end

