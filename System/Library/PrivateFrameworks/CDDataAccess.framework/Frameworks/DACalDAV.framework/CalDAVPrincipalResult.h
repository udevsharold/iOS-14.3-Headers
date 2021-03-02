/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableArray;

@interface CalDAVPrincipalResult : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayName;
	NSString* _resultType;
	NSString* _principalPath;
	NSArray* _emailAddresses;
	NSMutableArray* _mCUAddresses;
	NSMutableArray* _mEmailAddresses;

}

@property (nonatomic,retain) NSMutableArray * mCUAddresses;                 //@synthesize mCUAddresses=_mCUAddresses - In the implementation block
@property (nonatomic,retain) NSMutableArray * mEmailAddresses;              //@synthesize mEmailAddresses=_mEmailAddresses - In the implementation block
@property (nonatomic,retain) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * resultType;                         //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,retain) NSString * principalPath;                      //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,retain) NSArray * emailAddresses;                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * cuAddresses; 
@property (nonatomic,readonly) NSString * preferredCUAddress; 
+(id)resultFromResponse:(id)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setResultType:(NSString *)arg1 ;
-(NSString *)resultType;
-(id)init;
-(id)initWithResponse:(id)arg1 ;
-(NSString *)preferredCUAddress;
-(NSArray *)cuAddresses;
-(NSArray *)emailAddresses;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)description;
-(void)setMCUAddresses:(NSMutableArray *)arg1 ;
-(void)setMEmailAddresses:(NSMutableArray *)arg1 ;
-(void)addEmail:(id)arg1 ;
-(void)addCUAddress:(id)arg1 ;
-(NSMutableArray *)mCUAddresses;
-(NSMutableArray *)mEmailAddresses;
-(id)convertToDAContactSearchResultElement;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(NSString *)lastName;
-(NSString *)firstName;
-(NSString *)displayName;
@end
