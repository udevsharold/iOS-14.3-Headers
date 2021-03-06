/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCarrierBundlingController : SUScriptObject

@property (readonly) NSString * provisioningStyleAlways; 
@property (readonly) NSString * provisioningStyleNever; 
@property (readonly) NSString * provisioningStyleOnce; 
@property (readonly) NSString * statusEligible; 
@property (readonly) NSString * statusNeedsManualVerification; 
@property (readonly) NSString * statusNotEligible; 
@property (readonly) NSString * statusUnknown; 
@property (readonly) NSString * statusUnlinked; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(id)_className;
-(id)scriptAttributeKeys;
-(void)updateLastKnownStatus:(id)arg1 ;
-(NSString *)provisioningStyleAlways;
-(NSString *)provisioningStyleNever;
-(NSString *)provisioningStyleOnce;
-(NSString *)statusEligible;
-(NSString *)statusNeedsManualVerification;
-(NSString *)statusNotEligible;
-(NSString *)statusUnknown;
-(NSString *)statusUnlinked;
@end

