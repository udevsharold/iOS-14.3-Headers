/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCCertificateTransparencyPayload : MCPayload {

	NSArray* _hashDictionaries;
	NSArray* _domainRules;

}

@property (nonatomic,readonly) NSArray * hashDictionaries;              //@synthesize hashDictionaries=_hashDictionaries - In the implementation block
@property (nonatomic,readonly) NSArray * domainRules;                   //@synthesize domainRules=_domainRules - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(BOOL)isValidDomainRule:(id)arg1 ;
-(id)verboseDescription;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)subtitle1Label;
-(NSArray *)domainRules;
-(NSArray *)hashDictionaries;
@end

