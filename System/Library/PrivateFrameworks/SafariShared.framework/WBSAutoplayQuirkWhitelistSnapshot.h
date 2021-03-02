/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSRemotePlistSnapshot.h>

@class NSDictionary, NSString;

@interface WBSAutoplayQuirkWhitelistSnapshot : NSObject <WBSRemotePlistSnapshot> {

	NSDictionary* _domainsToQuirkTypes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)hash;
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(id)plistDataWithFormat:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)quirkTypeForDomain:(id)arg1 ;
@end
