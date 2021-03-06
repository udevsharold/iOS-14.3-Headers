/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactsUserDefaults.h>

@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults {

	CNFoundationUserDefaults* _foundationUserDefaults;

}

@property (retain) CNFoundationUserDefaults * foundationUserDefaults;              //@synthesize foundationUserDefaults=_foundationUserDefaults - In the implementation block
-(void)setDisplayNameOrder:(long long)arg1 ;
-(long long)displayNameOrder;
-(long long)sortOrder;
-(long long)shortNameFormat;
-(long long)newContactDisplayNameOrder;
-(void)setFoundationUserDefaults:(CNFoundationUserDefaults *)arg1 ;
-(id)init;
-(id)countryCode;
-(CNFoundationUserDefaults *)foundationUserDefaults;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(BOOL)shortNameFormatPrefersNicknames;
-(id)initWithFoundationUserDefaults:(id)arg1 ;
-(BOOL)isShortNameFormatEnabled;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(id)filteredGroupAndContainerIDs;
-(void)setShortNameFormat:(long long)arg1 ;
@end

