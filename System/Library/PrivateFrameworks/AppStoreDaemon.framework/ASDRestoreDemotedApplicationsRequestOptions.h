/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSNumber, NSString, NSArray;

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions {

	NSNumber* _accountID;
	NSString* _appleID;
	NSArray* _bundleIDs;

}

@property (nonatomic,readonly) NSNumber * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * appleID;                //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSArray * bundleIDs;                   //@synthesize bundleIDs=_bundleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSArray *)bundleIDs;
-(NSNumber *)accountID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBundleIDs:(id)arg1 ;
-(NSString *)appleID;
-(id)initWithAccountID:(id)arg1 appleID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

