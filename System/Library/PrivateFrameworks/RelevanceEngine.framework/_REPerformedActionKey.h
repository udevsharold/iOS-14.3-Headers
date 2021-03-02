/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REDonatedActionIdentifierProviding;
@class NSString;

@interface _REPerformedActionKey : NSObject {

	id<REDonatedActionIdentifierProviding> _identifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) id<REDonatedActionIdentifierProviding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)keyForBundleIdentifier:(id)arg1 identifier:(id)arg2 ;
-(unsigned long long)hash;
-(id<REDonatedActionIdentifierProviding>)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
@end
