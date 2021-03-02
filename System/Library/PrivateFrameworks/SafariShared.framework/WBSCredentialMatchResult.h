/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface WBSCredentialMatchResult : NSObject {

	NSArray* _exactMatches;
	NSArray* _potentialMatches;
	NSArray* _associatedDomainMatches;

}

@property (nonatomic,copy,readonly) NSArray * exactMatches;                         //@synthesize exactMatches=_exactMatches - In the implementation block
@property (nonatomic,copy,readonly) NSArray * potentialMatches;                     //@synthesize potentialMatches=_potentialMatches - In the implementation block
@property (nonatomic,copy,readonly) NSArray * associatedDomainMatches;              //@synthesize associatedDomainMatches=_associatedDomainMatches - In the implementation block
-(id)initWithExactMatches:(id)arg1 potentialMatches:(id)arg2 associatedDomainMatches:(id)arg3 ;
-(NSArray *)exactMatches;
-(NSArray *)potentialMatches;
-(NSArray *)associatedDomainMatches;
@end
