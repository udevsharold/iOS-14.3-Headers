/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface INAppTrust : NSObject
+(id)appsTrustedForLaunch:(id)arg1 ;
+(BOOL)shouldTrustExtensionForLaunch:(id)arg1 ;
+(BOOL)_shouldTrustExtensionForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
+(id)extensionsTrustedForLaunch:(id)arg1 ;
+(BOOL)shouldTrustAppForLaunch:(id)arg1 ;
+(BOOL)_shouldTrustAppForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
+(BOOL)_appRequiresExplicitTrust:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
@end
