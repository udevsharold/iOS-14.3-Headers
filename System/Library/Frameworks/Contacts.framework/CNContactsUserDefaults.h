/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (assign,nonatomic) long long displayNameOrder; 
@property (assign,nonatomic) long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) BOOL shortNameFormatPrefersNicknames; 
@property (nonatomic,readonly) long long sortOrder; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
+(id)sharedDefaults;
+(void)flushSharedInstance;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(long long)displayNameOrder;
-(long long)sortOrder;
-(long long)shortNameFormat;
-(long long)newContactDisplayNameOrder;
-(id)init;
-(NSString *)countryCode;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(BOOL)shortNameFormatPrefersNicknames;
-(BOOL)isShortNameFormatEnabled;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(id)changeNotificationName;
-(id)filteredGroupAndContainerIDs;
-(void)setShortNameFormat:(long long)arg1 ;
@end

