/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSNumber;

@interface TIUserModelCounter : NSObject {

	unsigned long long _persisted;
	unsigned long long _current;
	NSString* _name;
	NSDate* _creationDate;
	NSDate* _lastUpdateDate;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * count; 
@property (nonatomic,readonly) NSDate * creationDate;                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateDate;              //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
-(NSDate *)lastUpdateDate;
-(NSDate *)creationDate;
-(void)add:(int)arg1 ;
-(void)doPersist:(id)arg1 forDate:(id)arg2 ;
-(NSNumber *)count;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)initWithName:(id)arg1 initialCount:(id)arg2 creationDate:(id)arg3 lastUpdateDate:(id)arg4 ;
@end

