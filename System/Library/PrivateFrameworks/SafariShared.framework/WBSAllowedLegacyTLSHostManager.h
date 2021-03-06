/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface WBSAllowedLegacyTLSHostManager : NSObject {

	NSUserDefaults* _browserDefaults;

}
-(id)initWithBrowserDefaults:(id)arg1 ;
-(BOOL)isLegacyTLSAllowedForHost:(id)arg1 ;
-(void)allowLegacyTLSForHost:(id)arg1 ;
-(void)clearAllLegacyTLSHosts;
-(void)clearLegacyTLSForHostIfPresent:(id)arg1 ;
-(void)clearLegacyTLSForHosts:(id)arg1 ;
@end

