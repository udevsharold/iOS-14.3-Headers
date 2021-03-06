/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, STFamilyMember, NSString;

@interface STFamily : NSObject <NSCopying> {

	NSArray* _members;
	STFamilyMember* _me;
	NSString* _dataSource;

}

@property (nonatomic,copy) NSString * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSArray * members;                  //@synthesize members=_members - In the implementation block
@property (nonatomic,retain) STFamilyMember * me;              //@synthesize me=_me - In the implementation block
-(STFamilyMember *)me;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDataSource:(NSString *)arg1 ;
-(void)setMe:(STFamilyMember *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)dataSource;
-(NSArray *)members;
-(void)setMembers:(NSArray *)arg1 ;
-(id)initWithFamilyCircle:(id)arg1 ;
-(id)initWithMembers:(id)arg1 ;
@end

