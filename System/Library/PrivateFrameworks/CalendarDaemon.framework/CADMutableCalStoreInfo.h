/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADCalStoreInfo.h>

@class NSString;

@interface CADMutableCalStoreInfo : NSObject <CADCalStoreInfo> {

	BOOL _isLocalStore;
	BOOL _isEnabled;
	int _rowID;
	NSString* _storeName;
	NSString* _accountIdentifier;
	NSString* _delegatedAccountOwnerAccountIdentifier;

}

@property (assign,nonatomic) int rowID;                                                    //@synthesize rowID=_rowID - In the implementation block
@property (assign,nonatomic) BOOL isLocalStore;                                            //@synthesize isLocalStore=_isLocalStore - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,copy) NSString * storeName;                                           //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * delegatedAccountOwnerAccountIdentifier;              //@synthesize delegatedAccountOwnerAccountIdentifier=_delegatedAccountOwnerAccountIdentifier - In the implementation block
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSString *)storeName;
-(void)setStoreName:(NSString *)arg1 ;
-(int)rowID;
-(NSString *)delegatedAccountOwnerAccountIdentifier;
-(void)setIsLocalStore:(BOOL)arg1 ;
-(void)setRowID:(int)arg1 ;
-(void)setDelegatedAccountOwnerAccountIdentifier:(NSString *)arg1 ;
-(BOOL)isLocalStore;
@end

