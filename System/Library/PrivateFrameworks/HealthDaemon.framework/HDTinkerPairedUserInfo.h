/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface HDTinkerPairedUserInfo : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSNumber* _dsid;

}

@property (nonatomic,retain) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSNumber * dsid;                   //@synthesize dsid=_dsid - In the implementation block
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)lastName;
-(NSString *)firstName;
@end

