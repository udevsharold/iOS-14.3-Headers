/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSPasswordBreachCredentialSource.h>

@class NSArray;

@interface WBSPasswordBreachKeychainCredentialSource : NSObject <WBSPasswordBreachCredentialSource>

@property (nonatomic,readonly) NSArray * credentials; 
-(id)savedPasswordsForPersistentIdentifiers:(id)arg1 ;
-(NSArray *)credentials;
-(BOOL)_shouldCheckCredential:(id)arg1 ;
@end
