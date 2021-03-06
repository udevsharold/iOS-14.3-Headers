/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID, NSUUID, NSString, NSDate, NSError;

@interface NSPersistentCloudKitContainerEvent : NSObject <NSCopying> {

	BOOL _succeeded;
	NSManagedObjectID* _ckEventObjectID;
	NSUUID* _identifier;
	NSString* _storeIdentifier;
	long long _type;
	NSDate* _startDate;
	NSDate* _endDate;
	NSError* _error;

}

@property (nonatomic,readonly) NSManagedObjectID * ckEventObjectID;              //@synthesize ckEventObjectID=_ckEventObjectID - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;                                   //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(id)eventTypeString:(long long)arg1 ;
-(NSDate *)endDate;
-(NSError *)error;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)succeeded;
-(void)dealloc;
-(NSString *)storeIdentifier;
-(NSUUID *)identifier;
-(id)description;
-(long long)type;
-(NSDate *)startDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCKEvent:(id)arg1 ;
-(NSManagedObjectID *)ckEventObjectID;
@end

