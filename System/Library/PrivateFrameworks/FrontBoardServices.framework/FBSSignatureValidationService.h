/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSApplicationTrustDataProvider.h>

@protocol _FBSMISInterfaceWrapper;
@class NSString;

@interface FBSSignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {

	id<_FBSMISInterfaceWrapper> _misInterfaceWrapper;
	BOOL _authoritative;

}

@property (assign,nonatomic) BOOL authoritative;                    //@synthesize authoritative=_authoritative - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_initWithMISInterfaceWrapper:(id)arg1 ;
-(unsigned long long)trustStateForApplication:(id)arg1 ;
-(void)setAuthoritative:(BOOL)arg1 ;
-(BOOL)authoritative;
-(unsigned long long)_validateApp:(id)arg1 ;
-(void)_logTrustState:(unsigned long long)arg1 forApp:(id)arg2 reason:(id)arg3 ;
-(unsigned)signatureVersionForApp:(id)arg1 ;
@end

