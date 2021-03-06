/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDictionary, NSData, NSDateComponents;


@protocol CNVCardPerson <CNVCardNameDataSource,NSObject>
@property (readonly) NSString * firstName; 
@property (readonly) NSString * lastName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * title; 
@property (readonly) NSString * suffix; 
@property (readonly) NSString * nickname; 
@property (readonly) NSString * maidenName; 
@property (readonly) NSString * phoneticFirstName; 
@property (readonly) NSString * phoneticMiddleName; 
@property (readonly) NSString * phoneticLastName; 
@property (readonly) NSString * pronunciationFirstName; 
@property (readonly) NSString * pronunciationLastName; 
@property (readonly) NSString * organization; 
@property (readonly) NSString * phoneticOrganization; 
@property (readonly) NSString * department; 
@property (readonly) NSString * jobTitle; 
@property (readonly) BOOL isMe; 
@property (readonly) BOOL isCompany; 
@property (readonly) int nameOrder; 
@property (readonly) NSArray * emailAddresses; 
@property (readonly) NSArray * phoneNumbers; 
@property (readonly) NSArray * postalAddresses; 
@property (readonly) NSArray * socialProfiles; 
@property (readonly) NSArray * instantMessagingAddresses; 
@property (readonly) NSArray * urls; 
@property (readonly) NSArray * calendarURIs; 
@property (readonly) NSDictionary * activityAlerts; 
@property (readonly) NSArray * imageReferences; 
@property (readonly) NSDictionary * imageCropRects; 
@property (readonly) NSDictionary * largeImageCropRects; 
@property (readonly) NSData * largeImageData; 
@property (readonly) NSData * imageData; 
@property (readonly) NSString * imageType; 
@property (readonly) NSData * imageHash; 
@property (readonly) NSDateComponents * birthdayComponents; 
@property (readonly) NSDateComponents * alternateBirthdayComponents; 
@property (readonly) NSArray * otherDateComponents; 
@property (readonly) NSArray * relatedNames; 
@property (readonly) NSString * note; 
@property (readonly) NSArray * namesOfParentGroups; 
@property (readonly) NSString * cardDAVUID; 
@property (readonly) NSString * uid; 
@property (readonly) NSString * phonemeData; 
@property (readonly) int downtimeWhitelistAuthorization; 
@property (readonly) NSString * preferredLikenessSource; 
@property (readonly) NSString * preferredApplePersonaIdentifier; 
@property (readonly) NSArray * unknownProperties; 
@required
-(BOOL)isMe;
-(NSArray *)urls;
-(NSString *)suffix;
-(NSArray *)postalAddresses;
-(NSArray *)socialProfiles;
-(NSString *)uid;
-(NSArray *)relatedNames;
-(NSString *)middleName;
-(NSString *)phoneticMiddleName;
-(NSArray *)phoneNumbers;
-(NSData *)imageData;
-(NSArray *)emailAddresses;
-(NSString *)jobTitle;
-(NSString *)phoneticFirstName;
-(int)nameOrder;
-(NSData *)imageHash;
-(NSString *)preferredLikenessSource;
-(BOOL)isCompany;
-(NSString *)imageType;
-(NSString *)phoneticLastName;
-(NSString *)phonemeData;
-(NSArray *)calendarURIs;
-(NSString *)preferredApplePersonaIdentifier;
-(NSString *)nickname;
-(NSString *)cardDAVUID;
-(NSString *)maidenName;
-(NSString *)department;
-(NSString *)lastName;
-(NSString *)note;
-(NSString *)firstName;
-(NSString *)organization;
-(NSDictionary *)activityAlerts;
-(NSDictionary *)imageCropRects;
-(id)largeImageHashOfType:(id)arg1;
-(NSString *)pronunciationFirstName;
-(NSString *)pronunciationLastName;
-(NSString *)phoneticOrganization;
-(NSArray *)instantMessagingAddresses;
-(NSArray *)imageReferences;
-(NSString *)title;
-(NSDictionary *)largeImageCropRects;
-(NSData *)largeImageData;
-(NSDateComponents *)birthdayComponents;
-(NSDateComponents *)alternateBirthdayComponents;
-(NSArray *)otherDateComponents;
-(NSArray *)namesOfParentGroups;
-(int)downtimeWhitelistAuthorization;
-(NSArray *)unknownProperties;

@end

