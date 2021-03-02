/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSMescal : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bag:(id)arg4 error:(id*)arg5 ;
+(BOOL)primeTheConnectionWithBag:(id)arg1 error:(id*)arg2 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5 ;
+(id)_matchSignedActions:(id)arg1 withURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 error:(id*)arg6 ;
+(BOOL)_matchSignSapURL:(id)arg1 bagDictionary:(id)arg2 error:(id*)arg3 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5 ;
+(id)bagSubProfileVersion;
+(id)_DAAPActionsForURLBagActions:(id)arg1 ;
+(BOOL)shouldReprimeConnectionWithResult:(id)arg1 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4 ;
+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_signedActionDataFromRequest:(id)arg1 policy:(id)arg2 ;
+(BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 error:(id*)arg5 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(BOOL)primeTheConnectionWithContract:(id)arg1 error:(id*)arg2 ;
+(id)bagSubProfile;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4 ;
+(id)bagKeySet;
+(BOOL)primeTheConnectionWithContract:(id)arg1 logKey:(id)arg2 error:(id*)arg3 ;
@end
