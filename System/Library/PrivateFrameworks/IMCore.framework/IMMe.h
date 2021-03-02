/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, NSString, NSArray, NSMutableArray, IMHandle;

@interface IMMe : NSObject {

	CNContact* _cnContact;
	NSString* _cnNickname;
	NSString* _cnFirstName;
	NSString* _cnFullName;
	NSString* _cnLastName;
	NSArray* _cnEmails;
	NSMutableArray* _cnIMHandles;
	NSMutableArray* _loginIMHandles;

}

@property (nonatomic,readonly) NSString * guid; 
@property (nonatomic,readonly) CNContact * cnContact;                //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,readonly) NSString * nickname; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSArray * emails; 
@property (nonatomic,readonly) IMHandle * bestIMHandle; 
@property (nonatomic,readonly) NSArray * imHandles; 
+(id)me;
+(id)imHandleForService:(id)arg1 ;
+(id)fallbackUserName;
+(id)firstNameFromFallbackUserName;
+(id)lastNameFromFallbackUserName;
-(CNContact *)cnContact;
-(NSString *)fullName;
-(id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2 ;
-(BOOL)removeLoginIMHandle:(id)arg1 ;
-(BOOL)removeIMHandle:(id)arg1 ;
-(void)setCNContact:(id)arg1 ;
-(BOOL)addIMHandle:(id)arg1 ;
-(id)init;
-(id)loginIMHandles;
-(NSString *)email;
-(void)myPictureChanged;
-(NSArray *)emails;
-(NSArray *)imHandles;
-(id)description;
-(BOOL)isIMHandleLoginIMHandle:(id)arg1 ;
-(NSString *)nickname;
-(IMHandle *)bestIMHandle;
-(void)rebuildIMHandles;
-(BOOL)addLoginIMHandle:(id)arg1 ;
-(NSString *)guid;
-(NSString *)lastName;
-(NSString *)firstName;
-(void)resetABPerson;
@end
